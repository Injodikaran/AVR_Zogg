library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity status_register is port (
	reset : in std_logic;
	clock : in std_logic;
	
	carry_in : in std_logic; 
	zero_in : in std_logic;
	negative_in : in std_logic;
	
	carry_out : out std_logic;
	zero_out : out std_logic;
	negative_out : out std_logic;
	
	instruction : in std_logic_vector(15 downto 0));
end status_register;

architecture Behavioral of status_register is
	signal write_carry_flag, write_zero_flag, write_negative_flag : boolean;
begin

	instruction_decoder: process (instruction)
	begin
		write_carry_flag <=  
		   instruction(15 downto 10) = "000011" or	-- add
		   instruction(15 downto 10) = "000111" or;	-- adc
			
		write_zero_flag <= 
		   instruction(15 downto 10) = "000011" or	-- add
		   instruction(15 downto 10) = "000111";	-- adc
				 
		write_negative_flag <=
			instruction(15 downto 10) = "000011" or	-- add
		   instruction(15 downto 10) = "000111"; 		-- adc
	end process instruction_decoder;

	register_file: block
		constant carry_position : integer := 0;
		constant zero_position : integer := 1;
		constant negative_position : integer := 2;
		signal state, nextState: std_logic_vector(7 downto 0);
	begin
	
		registers: process (reset, clock)
		begin
			if reset = '1' then
				state <= "00000000";
			elsif rising_edge(clock) then
				state <= nextState;
			end if;
		end process registers; 
		
		nextStateFunction: process (state, write_carry_flag, write_zero_flag, write_negative_flag,
												carry_in, zero_in, negative_in)
		begin
			nextState <= state;
			if write_carry_flag then
				nextState(carry_position) <= carry_in;
			end if;
			if write_zero_flag then
				nextState(zero_position) <= zero_in;
			end if;
			if write_negative_flag then
				nextState(negative_position) <= negative_in;
			end if;
		end process nextStateFunction;
		
		outputFunction: process (state)
		begin
			carry_out <= state(carry_position);
			zero_out <= state(zero_position);
			negative_out <= state(negative_position);
		end process outputFunction;
		
	end block register_file;
end Behavioral;

