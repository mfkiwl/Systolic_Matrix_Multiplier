library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

package util_package is    
    function clog2 (x : integer) return integer;
end util_package;

package body util_package is

function clog2 (x : integer) return integer is
    variable i : integer;
begin
    i := 0;  
    while (2**i <= x) and i < 31 loop
        i := i + 1;
    end loop;
    return i;
end function;


end package body util_package;