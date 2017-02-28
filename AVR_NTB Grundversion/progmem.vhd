library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.std_logic_unsigned.all;

entity ProgMemSimul is
	generic (instr_width: natural := 16;
		address_width: natural :=8);
	Port (address : in std_logic_vector(address_width-1 downto 0);
		instr_code_out : out std_logic_vector(instr_width-1 downto 0));
end ProgMemSimul;

architecture Behavioral of ProgMemSimul is
begin
	process (address) is
	subtype instr_code is std_logic_vector(instr_width-1 downto 0);
	type ProgramMemory is array (natural range 0 to 2**address'length - 1) of instr_code;
	constant mem: ProgramMemory:=("1110011100001000","1110000000011000","0000111100010000","0001111100010000","0001101100010000","0010101100010000","1110000000000010","1110111100011111","1001010100010011","1001010100001010","1111011111101001","1100111111111111",others => (others => '0'));
		
	begin
		instr_code_out <= mem(conv_integer(address));
	end process;
end Behavioral;