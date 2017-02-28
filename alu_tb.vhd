LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY alu_tb IS
END alu_tb;
 
ARCHITECTURE behavior OF alu_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT alu
    PORT(
         data_d_in : IN  std_logic_vector(7 downto 0);
         data_r_in : IN  std_logic_vector(7 downto 0);
         data_out : OUT  std_logic_vector(7 downto 0);
         carry_flag_in : IN  std_logic;
         c_flag_out : OUT  std_logic;
         z_flag_out : OUT  std_logic;
         n_flag_out : OUT  std_logic;
         instruction : IN  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal data_d_in : std_logic_vector(7 downto 0) := (others => '0');
   signal data_r_in : std_logic_vector(7 downto 0) := (others => '0');
   signal carry_flag_in : std_logic := '0';
   signal instruction : std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs
   signal data_out : std_logic_vector(7 downto 0);
   signal c_flag_out : std_logic;
   signal z_flag_out : std_logic;
   signal n_flag_out : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: alu PORT MAP (
          data_d_in => data_d_in,
          data_r_in => data_r_in,
          data_out => data_out,
          carry_flag_in => carry_flag_in,
          c_flag_out => c_flag_out,
          z_flag_out => z_flag_out,
          n_flag_out => n_flag_out,
          instruction => instruction
        );


   -- Stimulus process
   stim_proc: process
   begin		
	-- insert stimulus here 
		-- ADC
		data_d_in <= X"5A";
		data_r_in <= X"7B";
		carry_flag_in <= '1';
		instruction <= "000111XXXXXXXXXX";
      wait for 100 ns;	
		carry_flag_in <= '0';
		instruction <= "000111XXXXXXXXXX";
		wait for 100 ns;
		-- SBC
		carry_flag_in <= '1';
		instruction <= "000010XXXXXXXXXX";
      wait for 100 ns;	
		carry_flag_in <= '0';
		instruction <= "000010XXXXXXXXXX";
		wait for 100 ns;
		-- AND
		instruction <= "001000XXXXXXXXXX";
      wait for 100 ns;
		-- OR
		instruction <= "001010XXXXXXXXXX";
      wait for 100 ns;
      

      wait;
   end process;

END;
