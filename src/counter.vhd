library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
Use ieee.std_logic_arith.all;
library work;
use work.util_package.ALL;
entity counter is
    Generic ( 
            M : INTEGER := 6;
            N : INTEGER := 3);
    Port ( 
            clk : in STD_LOGIC;
            rst : in STD_LOGIC;
            enable_row_count : in STD_LOGIC;
            pixel_cntr : out STD_LOGIC_VECTOR (clog2(M)-1 downto 0);
            slice_cntr : out STD_LOGIC_VECTOR (clog2(M/N)-1 downto 0));
end counter;

architecture Behavioral of counter is
    signal slice:integer:=0;
    signal pixel:integer:=0;
    signal count:integer:=0;
begin
slice_cntr<=CONV_STD_LOGIC_VECTOR(slice,clog2(M/N));
pixel_cntr<=CONV_STD_LOGIC_VECTOR(pixel,clog2(M));
process(clk,rst)
begin
    if rst='1' then
        slice<=0;
        pixel<=0;
        count<=0;
    elsif rising_edge(clk) then
        if M/=N then
            pixel<=(pixel+1) mod M;
            if enable_row_count='1' then
                slice<=(slice+1) mod (M/N);
            elsif enable_row_count='0' then
                slice<=slice;            
            end if;
        elsif M=N then
            pixel<=(pixel+1) mod M;
            slice<=0;
        end if;
    end if;
end process;
end Behavioral;







