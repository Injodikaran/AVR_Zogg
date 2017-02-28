library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.STD_LOGIC_ARITH.all;
use IEEE.STD_LOGIC_UNSIGNED.all;

entity sequencer is
	port 
	(
		reset : in STD_LOGIC;
		clock : in STD_LOGIC;
 
		prog_counter : out STD_LOGIC_VECTOR (7 downto 0)
	);
end sequencer;

architecture Behavioral of sequencer is
begin

	sequencer : block
		signal state, next_state : std_logic_vector(15 downto 0);
	begin
	
		registers : process (reset, clock)
		begin
			if reset = '1' then
				state <= (others => '0');
			elsif rising_edge(clock) then
				state <= next_state;
			end if;
		end process registers;
		 
		next_state_function : process (state)
		begin
			next_state <= state + 1; 
		end process next_state_function;
		 
		output_function : process (state)
		begin
			prog_counter <= state(7 downto 0);
		end process output_function;
	 
	end block sequencer;
 
end Behavioral;