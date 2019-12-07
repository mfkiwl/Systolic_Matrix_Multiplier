library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
Use ieee.std_logic_arith.all;
library work;
use work.util_package.ALL;
entity systolic is
    Generic ( 
        M : INTEGER := 6;
        N : INTEGER := 3;
        D_W : INTEGER := 8;
        D_W_ACC : INTEGER := 16
        );
    Port ( 
        clk : in STD_LOGIC;
        rst : in STD_LOGIC;
        enable_row_count_A : in STD_LOGIC;
        pixel_cntr_A : out STD_LOGIC_VECTOR (clog2(M)-1 downto 0);
        slice_cntr_A : out STD_LOGIC_VECTOR (clog2(M/N)-1 downto 0);
        pixel_cntr_B : out STD_LOGIC_VECTOR (clog2(M/N)-1 downto 0);
        slice_cntr_B : out STD_LOGIC_VECTOR (clog2(M)-1 downto 0);
        A : in STD_LOGIC_VECTOR (D_W*N-1 downto 0);
        B : in STD_LOGIC_VECTOR (D_W*N-1 downto 0);
        D : out STD_LOGIC_VECTOR (D_W_ACC*N*N-1 downto 0);
        valid_D : out STD_LOGIC_VECTOR (N*N-1 downto 0));
end systolic;

architecture Behavioral of systolic is
    component pe
        Port ( 
            clk : in STD_LOGIC;
            rst : in STD_LOGIC;
            init : in STD_LOGIC;
            in_a : in STD_LOGIC_VECTOR (D_W-1 downto 0);
            in_b : in STD_LOGIC_VECTOR (D_W-1 downto 0);
            out_sum : out STD_LOGIC_VECTOR (D_W_ACC-1 downto 0);
            valid_D : out STD_LOGIC;
            out_a : out STD_LOGIC_VECTOR (D_W-1 downto 0); 
            out_b : out STD_LOGIC_VECTOR (D_W-1 downto 0));
    end component;
    component counter
        Port ( 
            clk : in STD_LOGIC;
            rst : in STD_LOGIC;
            enable_row_count : in STD_LOGIC;
            pixel_cntr : out STD_LOGIC_VECTOR (clog2(M)-1 downto 0);
            slice_cntr : out STD_LOGIC_VECTOR (clog2(M/N)-1 downto 0));
    end component;
    type array_3d_D is array(N-1 downto 0,N-1 downto 0) of std_logic_vector(D_W_ACC-1 downto 0);
    type array_3d_pe is array(N-1 downto 0,N-1 downto 0) of std_logic_vector(D_W-1 downto 0);
    type array_2d is array(N-1 downto 0,N-1 downto 0) of std_logic;
    signal out_D:array_3d_D;
    signal pe_out_a:array_3d_pe;
    signal pe_out_b:array_3d_pe;
    signal out_valid_D:array_2d;
    signal init_matrix:array_2d;
    signal enable_row_count_1:std_logic;
    signal enable_row_count_2:std_logic;
    signal pixel_A:STD_LOGIC_VECTOR (clog2(M)-1 downto 0);
    signal pixel_B:STD_LOGIC_VECTOR (clog2(M/N)-1 downto 0);
    signal slice_A:STD_LOGIC_VECTOR (clog2(M/N)-1 downto 0);
    signal slice_B:STD_LOGIC_VECTOR (clog2(M)-1 downto 0);
    signal init:STD_LOGIC_VECTOR(2*(N-1) downto 0);
    signal cnt:integer;
begin
    cntr1:counter port map(clk=>clk,rst=>rst,enable_row_count=>enable_row_count_1,pixel_cntr=>pixel_A,slice_cntr=>slice_A);
    cntr2:counter port map(clk=>clk,rst=>rst,enable_row_count=>enable_row_count_2,pixel_cntr=>slice_B,slice_cntr=>pixel_B);
    init_vector:for i in 2*(N-1) downto 0 generate
        init_array:for j in N-1 downto 0 generate
            D_row:for k in N-1 downto 0 generate
                pe_init:if j+k=i generate
                    init_matrix(j,k)<=init(i);
                end generate;
            end generate;
        end generate;
    end generate;
    valid_D_matrx:for j in N-1 downto 0 generate
        D_row:for k in N-1 downto 0 generate
            D((j*N+k+1)*D_W_ACC-1 downto (j*N+k)*D_W_ACC)<=out_D(j,k);
        end generate;
    end generate;
    D_matrix:for j in N-1 downto 0 generate
        D_row:for k in N-1 downto 0 generate
            valid_D(j*N+k)<=out_valid_D(j,k);
        end generate;
    end generate;
    pe_map:for x in N-1 downto 0 generate
        pe_row:for y in N-1 downto 0 generate
            upper_left_corner:if x=0 and y=0 generate
                upper_left_pe:pe port map(clk=>clk,rst=>rst,init=>init_matrix(x,y),in_a=>A(D_W*(x+1)-1 downto D_W*x),in_b=>B(D_W*(y+1)-1 downto D_W*y),out_sum=>out_D(x,y),valid_D=>out_valid_D(x,y),out_a=>pe_out_a(x,y),out_b=>pe_out_b(x,y));
            end generate; 
            left_column:if x>0 and y=0 generate
                left_column_pe:pe port map(clk=>clk,rst=>rst,init=>init_matrix(x,y),in_a=>A(D_W*(x+1)-1 downto D_W*x),in_b=>pe_out_b(x-1,y),out_sum=>out_D(x,y),valid_D=>out_valid_D(x,y),out_a=>pe_out_a(x,y),out_b=>pe_out_b(x,y));
            end generate;
            top_row:if x=0 and y>0 generate
                top_row_pe:pe port map(clk=>clk,rst=>rst,init=>init_matrix(x,y),in_a=>pe_out_a(x,y-1),in_b=>B(D_W*(y+1)-1 downto D_W*y),out_sum=>out_D(x,y),valid_D=>out_valid_D(x,y),out_a=>pe_out_a(x,y),out_b=>pe_out_b(x,y));
            end generate;
            left_matrix:if x>0 and y>0 generate
                common_pe:pe port map(clk=>clk,rst=>rst,init=>init_matrix(x,y),in_a=>pe_out_a(x,y-1),in_b=>pe_out_b(x-1,y),out_sum=>out_D(x,y),valid_D=>out_valid_D(x,y),out_a=>pe_out_a(x,y),out_b=>pe_out_b(x,y));
            end generate;
        end generate;
    end generate;
    process(pixel_A)
    begin
        if pixel_A=M-1 then
            enable_row_count_2<='1';
        else
            enable_row_count_2<='0';
        end if;
    end process;
--    process(pixel_A,rst)
--    begin
--        if rst='1' then
--            init<=(others=>'0');
--            cnt<=0;
--        elsif rising_edge(pixel_A) then
--            cnt<=cnt+1;
--        elsif pixel_A>=1 and pixel_A<=2*N-1 then
--            for i in init'length-1 downto 0 loop
--                if pixel_A=i+1 then
--                    init(i)<='1';
--                else
--                    init(i)<='0';
--                end if;
--            end loop;
--        else
--            init<=(others=>'0');
--        end if;
--    end process;
    process(clk,rst)
    begin
        if rst='1' then
            init<=(others=>'0');
            cnt<=0;
        elsif rising_edge(clk) then
            if M>N then
                if cnt>=M-1 then
                    cnt<=0;
                else
                    cnt<=cnt+1;
                end if;
            elsif M=N then
                if cnt>=2*N-1 then
                    cnt<=0;
                else
                    cnt<=cnt+1;
                end if;
            end if;
            if cnt>=0 and cnt<=2*N-1 then
                for i in init'length-1 downto 0 loop
                    if cnt=i then
                        init(i)<='1';
                    else
                        init(i)<='0';
                    end if;
                end loop;
            else
                init<=(others=>'0');
            end if;
        end if;
    end process;
    pixel_cntr_A<=pixel_A;
    pixel_cntr_B<=pixel_B;
    slice_cntr_A<=slice_A;
    slice_cntr_B<=slice_B;
    enable_row_count_1<=enable_row_count_A;
end Behavioral;