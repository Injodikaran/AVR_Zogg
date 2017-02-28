--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____ 
--  /   /\/   / 
-- /___/  \  /    Vendor: Xilinx 
-- \   \   \/     Version : 14.7
--  \   \         Application : sch2hdl
--  /   /         Filename : cpu.vhf
-- /___/   /\     Timestamp : 02/28/2017 13:55:41
-- \   \  /  \ 
--  \___\/\___\ 
--
--Command: sch2hdl -intstyle ise -family zynq -flat -suppress -vhdl D:/RepositoryAvr/cpu.vhf -w D:/RepositoryAvr/cpu.sch
--Design Name: cpu
--Device: zynq
--Purpose:
--    This vhdl netlist is translated from an ECS schematic. It can be 
--    synthesized and simulated, but it should not be modified. 
--

library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;

entity cpu is
   port ( clock : in    std_logic; 
          reset : in    std_logic);
end cpu;

architecture BEHAVIORAL of cpu is
   signal carry_flag_in : std_logic;
   signal instr         : std_logic_vector (15 downto 0);
   signal instruction   : std_logic_vector (15 downto 0);
   signal n_flag_out    : std_logic;
   signal XLXN_5        : std_logic_vector (7 downto 0);
   signal XLXN_8        : std_logic_vector (7 downto 0);
   signal XLXN_35       : std_logic_vector (7 downto 0);
   signal XLXN_80       : std_logic;
   signal XLXN_164      : std_logic_vector (7 downto 0);
   signal z_flag_out    : std_logic;
   component alu
      port ( carry_flag_in : in    std_logic; 
             data_d_in     : in    std_logic_vector (7 downto 0); 
             data_r_in     : in    std_logic_vector (7 downto 0); 
             instruction   : in    std_logic_vector (15 downto 0); 
             c_flag_out    : out   std_logic; 
             z_flag_out    : out   std_logic; 
             n_flag_out    : out   std_logic; 
             data_out      : out   std_logic_vector (7 downto 0));
   end component;
   
   component instruction_register
      port ( reset           : in    std_logic; 
             clock           : in    std_logic; 
             instruction_in  : in    std_logic_vector (15 downto 0); 
             instruction_out : out   std_logic_vector (15 downto 0));
   end component;
   
   component ProgMemSimul
      port ( address        : in    std_logic_vector (7 downto 0); 
             instr_code_out : out   std_logic_vector (15 downto 0));
   end component;
   
   component register_file
      port ( reset       : in    std_logic; 
             clock       : in    std_logic; 
             reg_d_in    : in    std_logic_vector (7 downto 0); 
             instruction : in    std_logic_vector (15 downto 0); 
             reg_d_out   : out   std_logic_vector (7 downto 0); 
             reg_r_out   : out   std_logic_vector (7 downto 0));
   end component;
   
   component sequencer
      port ( reset        : in    std_logic; 
             clock        : in    std_logic; 
             prog_counter : out   std_logic_vector (7 downto 0));
   end component;
   
   component status_register
      port ( reset        : in    std_logic; 
             clock        : in    std_logic; 
             carry_in     : in    std_logic; 
             zero_in      : in    std_logic; 
             negative_in  : in    std_logic; 
             instruction  : in    std_logic_vector (15 downto 0); 
             carry_out    : out   std_logic; 
             zero_out     : out   std_logic; 
             negative_out : out   std_logic);
   end component;
   
begin
   aluu : alu
      port map (carry_flag_in=>carry_flag_in,
                data_d_in(7 downto 0)=>XLXN_35(7 downto 0),
                data_r_in(7 downto 0)=>XLXN_8(7 downto 0),
                instruction(15 downto 0)=>instr(15 downto 0),
                c_flag_out=>XLXN_80,
                data_out(7 downto 0)=>XLXN_5(7 downto 0),
                n_flag_out=>n_flag_out,
                z_flag_out=>z_flag_out);
   
   instr_reg : instruction_register
      port map (clock=>clock,
                instruction_in(15 downto 0)=>instruction(15 downto 0),
                reset=>reset,
                instruction_out(15 downto 0)=>instr(15 downto 0));
   
   programmem : ProgMemSimul
      port map (address(7 downto 0)=>XLXN_164(7 downto 0),
                instr_code_out(15 downto 0)=>instruction(15 downto 0));
   
   registers : register_file
      port map (clock=>clock,
                instruction(15 downto 0)=>instr(15 downto 0),
                reg_d_in(7 downto 0)=>XLXN_5(7 downto 0),
                reset=>reset,
                reg_d_out(7 downto 0)=>XLXN_35(7 downto 0),
                reg_r_out(7 downto 0)=>XLXN_8(7 downto 0));
   
   sequ : sequencer
      port map (clock=>clock,
                reset=>reset,
                prog_counter(7 downto 0)=>XLXN_164(7 downto 0));
   
   stat_reg : status_register
      port map (carry_in=>XLXN_80,
                clock=>clock,
                instruction(15 downto 0)=>instr(15 downto 0),
                negative_in=>n_flag_out,
                reset=>reset,
                zero_in=>z_flag_out,
                carry_out=>carry_flag_in,
                negative_out=>open,
                zero_out=>open);
   
end BEHAVIORAL;


