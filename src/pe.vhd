library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
library work;
use work.util_package.ALL;
entity pe is
    Generic ( 
        M : INTEGER := 8;
        D_W : INTEGER := 8;
        D_W_ACC : INTEGER := 16);
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
end pe;

architecture Behavioral of pe is
    signal sum:std_logic_vector(D_W_ACC-1 downto 0);
    signal count:integer:=0;
    signal init_recv:std_logic:='0';
begin
out_sum<=sum;
process(clk,rst)
begin
    if rst='1' then
        sum<=(others=>'0');
        valid_D<='0';
        out_a<=(others=>'0');
        out_b<=(others=>'0');
        count<=0;
        init_recv<='0';
    elsif rising_edge(clk) then
        if init='0' then
            sum<=sum+in_a*in_b;
            out_a<=in_a;
            out_b<=in_b;
            if init_recv='0' then
                valid_D<='0';
                count<=0;
            else
                if count=M-2 then
                    valid_D<='1';
                    count<=0;
                    init_recv<='0';
                else 
                    count<=count+1;
                    valid_D<='0';
                end if;
            end if;
        elsif init='1' then
            sum<=in_a*in_b;
            out_a<=in_a;
            out_b<=in_b;
            count<=0;
            valid_D<='0';
            init_recv<='1';
        end if;
    end if;
end process;
end Behavioral;