library ieee;
use ieee.std_logic_1164.all;

entity cpu_tb is
end cpu_tb;

architecture behavioral of cpu_tb is

	component cpu
		port 
		(
			clock : in STD_LOGIC;
			reset : in STD_LOGIC
		);
	end component;

	signal clock : STD_LOGIC := '0';
	signal reset : STD_LOGIC := '1';
 
	constant PERIOD : time := 100 ns;
	constant DUTY_CYCLE : real := 0.5;
	constant OFFSET : time := 10 ns;

begin
	UUT : cpu
	port map
	( 
		clock => clock, 
		reset => reset
	);
 
	process 
	begin
		wait for OFFSET;
		CLOCK_LOOP : loop
			clock <= '0';
			wait for (PERIOD - (PERIOD * DUTY_CYCLE));
			clock <= '1';
			wait for (PERIOD * DUTY_CYCLE);
		end loop CLOCK_LOOP;
	end process;
	
	process
	begin
		wait for 20 ns;
		reset <= '0';

		wait;

	end process;
	end;