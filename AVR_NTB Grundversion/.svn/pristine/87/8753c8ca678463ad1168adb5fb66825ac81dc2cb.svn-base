library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.STD_LOGIC_ARITH.all;
use IEEE.STD_LOGIC_UNSIGNED.all;

entity instruction_register is
	port 
	(
		reset : in std_logic;
		clock : in std_logic;
 
		instruction_in : in std_logic_vector(15 downto 0);
		instruction_out : out std_logic_vector(15 downto 0)
	);
end instruction_register;

architecture Behavioral of instruction_register is 
	signal state, next_state : std_logic_vector(15 downto 0);
begin

	instruction_decoder : process (state)
	begin
		
	end process instruction_decoder;
		
	instr_reg : block
	begin
 
		registers : process (reset, clock)
		begin
			if reset = '1' then
				state <= "0000000000000000";
			elsif rising_edge(clock) then
				state <= next_state;
			end if;
		end process registers;
		 
		next_state_function : process (instruction_in)
		begin
			next_state <= instruction_in;
		end process next_state_function;
		 
		output_function : process (state)
		begin
			instruction_out <= state;
		end process output_function;
 
	end block instr_reg;
 
end Behavioral;