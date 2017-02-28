<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="zynq" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="XLXN_35(7:0)" />
        <signal name="XLXN_8(7:0)" />
        <signal name="carry_flag_in" />
        <signal name="n_flag_out" />
        <signal name="z_flag_out" />
        <signal name="XLXN_5(7:0)" />
        <signal name="clock" />
        <signal name="reset" />
        <signal name="instruction(15:0)" />
        <signal name="XLXN_48(7:0)" />
        <signal name="instr(15:0)" />
        <signal name="XLXN_80" />
        <signal name="XLXN_150" />
        <signal name="XLXN_151" />
        <signal name="XLXN_152" />
        <signal name="XLXN_153" />
        <signal name="XLXN_154(15:0)" />
        <signal name="XLXN_155(15:0)" />
        <signal name="XLXN_156(15:0)" />
        <signal name="XLXN_157(15:0)" />
        <signal name="XLXN_158" />
        <signal name="XLXN_164(7:0)" />
        <signal name="XLXN_165" />
        <signal name="XLXN_166" />
        <signal name="XLXN_169(7:0)" />
        <signal name="XLXN_170" />
        <signal name="XLXN_171" />
        <signal name="XLXN_172" />
        <signal name="XLXN_173" />
        <signal name="XLXN_174(7:0)" />
        <signal name="XLXN_175(7:0)" />
        <signal name="XLXN_176(7:0)" />
        <signal name="XLXN_177" />
        <signal name="XLXN_178" />
        <signal name="XLXN_179" />
        <signal name="XLXN_180" />
        <signal name="XLXN_181" />
        <signal name="XLXN_182" />
        <signal name="XLXN_184" />
        <signal name="XLXN_185" />
        <port polarity="Input" name="clock" />
        <port polarity="Input" name="reset" />
        <blockdef name="alu">
            <timestamp>2017-2-20T6:32:38</timestamp>
            <rect width="320" x="64" y="-256" height="256" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="448" y1="-224" y2="-224" x1="384" />
            <line x2="448" y1="-160" y2="-160" x1="384" />
            <line x2="448" y1="-96" y2="-96" x1="384" />
            <rect width="64" x="384" y="-44" height="24" />
            <line x2="448" y1="-32" y2="-32" x1="384" />
        </blockdef>
        <blockdef name="instruction_register">
            <timestamp>2017-2-20T6:43:16</timestamp>
            <rect width="416" x="64" y="-192" height="192" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="480" y="-172" height="24" />
            <line x2="544" y1="-160" y2="-160" x1="480" />
        </blockdef>
        <blockdef name="status_register">
            <timestamp>2017-2-20T6:55:6</timestamp>
            <rect width="320" x="64" y="-384" height="384" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="448" y1="-352" y2="-352" x1="384" />
            <line x2="448" y1="-272" y2="-272" x1="384" />
            <line x2="448" y1="-192" y2="-192" x1="384" />
        </blockdef>
        <blockdef name="sequencer">
            <timestamp>2017-2-20T6:49:5</timestamp>
            <rect width="256" x="64" y="-128" height="128" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-108" height="24" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
        </blockdef>
        <blockdef name="register_file">
            <timestamp>2017-2-20T6:40:7</timestamp>
            <rect width="336" x="64" y="-256" height="256" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="400" y="-236" height="24" />
            <line x2="464" y1="-224" y2="-224" x1="400" />
            <rect width="64" x="400" y="-172" height="24" />
            <line x2="464" y1="-160" y2="-160" x1="400" />
        </blockdef>
        <blockdef name="ProgMemSimul">
            <timestamp>2017-2-20T6:20:51</timestamp>
            <rect width="368" x="64" y="-64" height="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="432" y="-44" height="24" />
            <line x2="496" y1="-32" y2="-32" x1="432" />
        </blockdef>
        <block symbolname="instruction_register" name="instr_reg">
            <blockpin signalname="reset" name="reset" />
            <blockpin signalname="clock" name="clock" />
            <blockpin signalname="instruction(15:0)" name="instruction_in(15:0)" />
            <blockpin signalname="instr(15:0)" name="instruction_out(15:0)" />
        </block>
        <block symbolname="status_register" name="stat_reg">
            <blockpin signalname="reset" name="reset" />
            <blockpin signalname="clock" name="clock" />
            <blockpin signalname="XLXN_80" name="carry_in" />
            <blockpin signalname="z_flag_out" name="zero_in" />
            <blockpin signalname="n_flag_out" name="negative_in" />
            <blockpin signalname="instr(15:0)" name="instruction(15:0)" />
            <blockpin signalname="carry_flag_in" name="carry_out" />
            <blockpin name="zero_out" />
            <blockpin name="negative_out" />
        </block>
        <block symbolname="register_file" name="registers">
            <blockpin signalname="reset" name="reset" />
            <blockpin signalname="clock" name="clock" />
            <blockpin signalname="XLXN_5(7:0)" name="reg_d_in(7:0)" />
            <blockpin signalname="instr(15:0)" name="instruction(15:0)" />
            <blockpin signalname="XLXN_35(7:0)" name="reg_d_out(7:0)" />
            <blockpin signalname="XLXN_8(7:0)" name="reg_r_out(7:0)" />
        </block>
        <block symbolname="ProgMemSimul" name="programmem">
            <blockpin signalname="XLXN_164(7:0)" name="address(7:0)" />
            <blockpin signalname="instruction(15:0)" name="instr_code_out(15:0)" />
        </block>
        <block symbolname="alu" name="aluu">
            <blockpin signalname="carry_flag_in" name="carry_flag_in" />
            <blockpin signalname="XLXN_35(7:0)" name="data_d_in(7:0)" />
            <blockpin signalname="XLXN_8(7:0)" name="data_r_in(7:0)" />
            <blockpin signalname="instr(15:0)" name="instruction(15:0)" />
            <blockpin signalname="XLXN_80" name="c_flag_out" />
            <blockpin signalname="z_flag_out" name="z_flag_out" />
            <blockpin signalname="n_flag_out" name="n_flag_out" />
            <blockpin signalname="XLXN_5(7:0)" name="data_out(7:0)" />
        </block>
        <block symbolname="sequencer" name="sequ">
            <blockpin signalname="reset" name="reset" />
            <blockpin signalname="clock" name="clock" />
            <blockpin signalname="XLXN_164(7:0)" name="prog_counter(7:0)" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="2496" y="2048" name="stat_reg" orien="R0">
        </instance>
        <branch name="XLXN_35(7:0)">
            <wire x2="2480" y1="1120" y2="1280" x1="2480" />
            <wire x2="2496" y1="1280" y2="1280" x1="2480" />
            <wire x2="3024" y1="1120" y2="1120" x1="2480" />
            <wire x2="3024" y1="784" y2="784" x1="2944" />
            <wire x2="3024" y1="784" y2="1120" x1="3024" />
        </branch>
        <branch name="XLXN_8(7:0)">
            <wire x2="2496" y1="1344" y2="1344" x1="2480" />
            <wire x2="2480" y1="1344" y2="1520" x1="2480" />
            <wire x2="3040" y1="1520" y2="1520" x1="2480" />
            <wire x2="3040" y1="848" y2="848" x1="2944" />
            <wire x2="3040" y1="848" y2="1520" x1="3040" />
        </branch>
        <branch name="n_flag_out">
            <wire x2="2496" y1="1952" y2="1952" x1="2464" />
            <wire x2="2464" y1="1952" y2="2112" x1="2464" />
            <wire x2="3088" y1="2112" y2="2112" x1="2464" />
            <wire x2="3088" y1="1344" y2="1344" x1="2944" />
            <wire x2="3088" y1="1344" y2="2112" x1="3088" />
        </branch>
        <branch name="z_flag_out">
            <wire x2="2496" y1="1888" y2="1888" x1="2448" />
            <wire x2="2448" y1="1888" y2="2144" x1="2448" />
            <wire x2="3104" y1="2144" y2="2144" x1="2448" />
            <wire x2="3104" y1="1280" y2="1280" x1="2944" />
            <wire x2="3104" y1="1280" y2="2144" x1="3104" />
        </branch>
        <branch name="XLXN_5(7:0)">
            <wire x2="2480" y1="912" y2="912" x1="2416" />
            <wire x2="2416" y1="912" y2="1088" x1="2416" />
            <wire x2="2960" y1="1088" y2="1088" x1="2416" />
            <wire x2="2960" y1="1088" y2="1408" x1="2960" />
            <wire x2="2960" y1="1408" y2="1408" x1="2944" />
        </branch>
        <branch name="XLXN_80">
            <wire x2="2496" y1="1824" y2="1824" x1="2432" />
            <wire x2="2432" y1="1824" y2="2176" x1="2432" />
            <wire x2="3120" y1="2176" y2="2176" x1="2432" />
            <wire x2="3120" y1="1216" y2="1216" x1="2944" />
            <wire x2="3120" y1="1216" y2="2176" x1="3120" />
        </branch>
        <instance x="2496" y="1440" name="aluu" orien="R0">
        </instance>
        <instance x="2480" y="1008" name="registers" orien="R0">
        </instance>
        <branch name="instruction(15:0)">
            <wire x2="1648" y1="1104" y2="1104" x1="1232" />
        </branch>
        <instance x="1648" y="1136" name="instr_reg" orien="R0">
        </instance>
        <branch name="instr(15:0)">
            <wire x2="2320" y1="976" y2="976" x1="2192" />
            <wire x2="2480" y1="976" y2="976" x1="2320" />
            <wire x2="2320" y1="976" y2="1408" x1="2320" />
            <wire x2="2496" y1="1408" y2="1408" x1="2320" />
            <wire x2="2320" y1="1408" y2="2016" x1="2320" />
            <wire x2="2496" y1="2016" y2="2016" x1="2320" />
        </branch>
        <branch name="XLXN_164(7:0)">
            <wire x2="912" y1="992" y2="992" x1="720" />
            <wire x2="720" y1="992" y2="1104" x1="720" />
            <wire x2="736" y1="1104" y2="1104" x1="720" />
            <wire x2="912" y1="816" y2="816" x1="832" />
            <wire x2="912" y1="816" y2="992" x1="912" />
        </branch>
        <branch name="carry_flag_in">
            <wire x2="2496" y1="1216" y2="1216" x1="2432" />
            <wire x2="2432" y1="1216" y2="1584" x1="2432" />
            <wire x2="2992" y1="1584" y2="1584" x1="2432" />
            <wire x2="2992" y1="1584" y2="1696" x1="2992" />
            <wire x2="2992" y1="1696" y2="1696" x1="2944" />
        </branch>
        <instance x="736" y="1136" name="programmem" orien="R0">
        </instance>
        <instance x="448" y="912" name="sequ" orien="R0">
        </instance>
        <branch name="reset">
            <wire x2="368" y1="640" y2="640" x1="272" />
            <wire x2="368" y1="640" y2="816" x1="368" />
            <wire x2="448" y1="816" y2="816" x1="368" />
            <wire x2="1504" y1="640" y2="640" x1="368" />
            <wire x2="1504" y1="640" y2="976" x1="1504" />
            <wire x2="1648" y1="976" y2="976" x1="1504" />
            <wire x2="1504" y1="976" y2="1696" x1="1504" />
            <wire x2="2496" y1="1696" y2="1696" x1="1504" />
            <wire x2="2208" y1="640" y2="640" x1="1504" />
            <wire x2="2208" y1="640" y2="784" x1="2208" />
            <wire x2="2480" y1="784" y2="784" x1="2208" />
        </branch>
        <branch name="clock">
            <wire x2="352" y1="688" y2="688" x1="272" />
            <wire x2="352" y1="688" y2="880" x1="352" />
            <wire x2="448" y1="880" y2="880" x1="352" />
            <wire x2="1456" y1="688" y2="688" x1="352" />
            <wire x2="1456" y1="688" y2="1040" x1="1456" />
            <wire x2="1648" y1="1040" y2="1040" x1="1456" />
            <wire x2="1456" y1="1040" y2="1760" x1="1456" />
            <wire x2="2496" y1="1760" y2="1760" x1="1456" />
            <wire x2="2192" y1="688" y2="688" x1="1456" />
            <wire x2="2192" y1="688" y2="848" x1="2192" />
            <wire x2="2480" y1="848" y2="848" x1="2192" />
        </branch>
        <iomarker fontsize="28" x="272" y="688" name="clock" orien="R180" />
        <iomarker fontsize="28" x="272" y="640" name="reset" orien="R180" />
    </sheet>
</drawing>