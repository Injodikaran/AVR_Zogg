library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity alu is
	port 
	(
		data_d_in : in std_logic_vector(7 downto 0); 
		data_r_in : in std_logic_vector(7 downto 0); 
		data_out : out std_logic_vector(7 downto 0); 
 
		carry_flag_in : in std_logic;
 
		c_flag_out : out std_logic;
		z_flag_out : out std_logic;
		n_flag_out : out std_logic;
 
		instruction : in std_logic_vector(15 downto 0)
	);
end alu;

architecture Behavioral of alu is
	type OpCodes is (OpNULL, OpADD, OpADC, OpSUB, OpSBC, OpAND, OpOR, OpEOR, OpMOV, OpCOM, OpNEG, 
	OpINC, OpDEC, OpLSR, OpROR, OpASR, OpSUBI, OpANDI);
	signal opcode : OpCodes;
begin

	instruction_decoder : process (instruction)
	begin
		opcode <= OpNULL;
		if instruction(15 downto 10) = "000011" then 
			opcode <= OpADD;
		elsif instruction(15 downto 10) = "000111" then 
			opcode <= OpADC;
			
		end if;
	end process instruction_decoder;

	alu : process (data_d_in, data_r_in, carry_flag_in, opcode)
	variable temp : std_logic_vector(8 downto 0);
	begin
		c_flag_out <= '0';
		z_flag_out <= '0';
		n_flag_out <= '0';
		data_out <= "00000000";
	 
		case opcode is
			when OpADD => 
				temp := (data_d_in(7) & data_d_in) + (data_d_in(7) & data_r_in);
				data_out <= temp(7 downto 0);
				c_flag_out <= temp(8);
				n_flag_out <= temp(7); 
				if (temp(7 downto 0) = "00000000") then
					z_flag_out <= '1';
				end if;
			when OpADC => 
				temp := (data_d_in(7) & data_d_in) + (data_d_in(7) & data_r_in) + ("00000000" & carry_flag_in);
				data_out <= temp(7 downto 0);
				c_flag_out <= temp(8);
				n_flag_out <= temp(7);
				if (temp(7 downto 0) = "00000000") then
					z_flag_out <= '1';
				end if;
			when others => 
		end case;
	end process alu;
 
end architecture Behavioral;