library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.STD_LOGIC_ARITH.all;
use IEEE.STD_LOGIC_UNSIGNED.all;

entity register_file is
	port 
	(
		reset : in std_logic;
		clock : in std_logic;
 
		reg_d_in : in std_logic_vector(7 downto 0);
 
		reg_d_out : out std_logic_vector(7 downto 0);
		reg_r_out : out std_logic_vector(7 downto 0);
 
		instruction : in std_logic_vector(15 downto 0)
	);
end register_file;

architecture Behavioral of register_file is
	type OpCodes is (OpOther, OpLDI);
	signal opcode : OpCodes;
	signal reg_d_adr : std_logic_vector(4 downto 0);
	signal reg_r_adr : std_logic_vector(4 downto 0);
	signal reg_d_wr : boolean; 
	signal constant_value : std_logic_vector(7 downto 0) := "XXXXXXXX";
begin

	instruction_decoder : process (instruction)
		variable tempOpCode : OpCodes;
	begin
		reg_d_adr <= instruction(8 downto 4);
		reg_r_adr <= instruction(9) & instruction(3 downto 0);
		constant_value <= "XXXXXXXX";
		tempOpCode := OpOther;
		if instruction(15 downto 12) = "1110" then 
			tempOpCode := OpLDI;
			constant_value <= instruction(11 downto 8) & instruction(3 downto 0);
			reg_d_adr <= "1" & instruction(7 downto 4);
		end if;
	 
		reg_d_wr <= 
			instruction(15 downto 10) = "000011" or -- add
			instruction(15 downto 10) = "000111" or -- adc
			instruction(15 downto 10) = "000110" or -- sub
			instruction(15 downto 10) = "001010" or -- or
			(instruction(15 downto 10) = "100101" and instruction(3 downto 0) = "1010") or -- dec
			(instruction(15 downto 10) = "100101" and instruction(3 downto 0) = "0011") or  -- inc
			tempOpCode =  OpLDI;-- ldi
		opcode <= tempOpCode;
	end process instruction_decoder;

	register_file : block
		type States is array(0 to 31) of std_logic_vector(7 downto 0);
		signal state, nextState : States;
	begin
		registers : process (reset, clock)
		begin
			if reset = '1' then
				state <= (others => "00000000");
			elsif rising_edge(clock) then
				state <= nextState;
			end if;
		end process registers;
		 
		nextStateFunction : process (state, reg_d_adr, reg_d_in, reg_d_wr, opcode, constant_value)
		variable temp : std_logic_vector(15 downto 0);
		begin
			nextState <= state;
			if reg_d_wr then
				case opcode is
					when OpLDI => 
						nextState(conv_integer(reg_d_adr)) <= constant_value;
					when OpOther  => 
						nextState(conv_integer(reg_d_adr)) <= reg_d_in;
					when others => 
				end case;
			end if;
		end process nextStateFunction;
		 
		outputFunction : process (state, reg_d_adr, reg_r_adr, opcode, constant_value)
		variable temp : std_logic_vector(15 downto 0);
		begin
			reg_d_out <= state(conv_integer(reg_d_adr));
			reg_r_out <= state(conv_integer(reg_r_adr));
		end process outputFunction;
	 
	end block register_file;

end Behavioral;