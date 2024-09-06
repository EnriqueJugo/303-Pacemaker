<#macro simulation_imports position>
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

import org.json.*;
</#macro>

<#macro simulation_in position>
receiveVariables();
</#macro>

<#macro simulation_out position>
sendVariables();
</#macro>

<#macro simulation_body position>
    public static BufferedReader stdInReader = new BufferedReader(new InputStreamReader(System.in));
            
    private static void receiveVariables() {
        try {
            String line = stdInReader.readLine();
            JSONObject json = new JSONObject(line);
            
            // Receive AS
            if (json.has("AS")) {
                ${tickdata_name}.AS = json.getBoolean("AS");
            }
            // Receive VS
            if (json.has("VS")) {
                ${tickdata_name}.VS = json.getBoolean("VS");
            }
            // Receive deltaT
            if (json.has("deltaT")) {
                ${tickdata_name}.deltaT = json.getDouble("deltaT");
            }
            // Receive AP
            if (json.has("AP")) {
                ${tickdata_name}.AP = json.getBoolean("AP");
            }
            // Receive VP
            if (json.has("VP")) {
                ${tickdata_name}.VP = json.getBoolean("VP");
            }
            // Receive sleepT
            if (json.has("sleepT")) {
                ${tickdata_name}.sleepT = json.getDouble("sleepT");
            }
            // Receive #ticktime
            if (json.has("#ticktime")) {
                _ticktime = json.getInt("#ticktime");
            }
            // Receive LRI_ACTIVE
            if (json.has("LRI_ACTIVE")) {
                ${tickdata_name}.LRI_ACTIVE = json.getBoolean("LRI_ACTIVE");
            }
            // Receive LRI_END
            if (json.has("LRI_END")) {
                ${tickdata_name}.LRI_END = json.getBoolean("LRI_END");
            }
            // Receive PVARP_ACTIVE
            if (json.has("PVARP_ACTIVE")) {
                ${tickdata_name}.PVARP_ACTIVE = json.getBoolean("PVARP_ACTIVE");
            }
            // Receive URI_ACTIVE
            if (json.has("URI_ACTIVE")) {
                ${tickdata_name}.URI_ACTIVE = json.getBoolean("URI_ACTIVE");
            }
            // Receive VRP_ACTIVE
            if (json.has("VRP_ACTIVE")) {
                ${tickdata_name}.VRP_ACTIVE = json.getBoolean("VRP_ACTIVE");
            }
            // Receive _GO
            if (json.has("_GO")) {
                ${tickdata_name}._GO = json.getBoolean("_GO");
            }
            // Receive _TERM
            if (json.has("_TERM")) {
                ${tickdata_name}._TERM = json.getBoolean("_TERM");
            }
            // Receive _cg10
            if (json.has("_cg10")) {
                ${tickdata_name}._cg10 = json.getBoolean("_cg10");
            }
            // Receive _cg101
            if (json.has("_cg101")) {
                ${tickdata_name}._cg101 = json.getBoolean("_cg101");
            }
            // Receive _cg109
            if (json.has("_cg109")) {
                ${tickdata_name}._cg109 = json.getBoolean("_cg109");
            }
            // Receive _cg113
            if (json.has("_cg113")) {
                ${tickdata_name}._cg113 = json.getBoolean("_cg113");
            }
            // Receive _cg118
            if (json.has("_cg118")) {
                ${tickdata_name}._cg118 = json.getBoolean("_cg118");
            }
            // Receive _cg119
            if (json.has("_cg119")) {
                ${tickdata_name}._cg119 = json.getBoolean("_cg119");
            }
            // Receive _cg12
            if (json.has("_cg12")) {
                ${tickdata_name}._cg12 = json.getBoolean("_cg12");
            }
            // Receive _cg123
            if (json.has("_cg123")) {
                ${tickdata_name}._cg123 = json.getBoolean("_cg123");
            }
            // Receive _cg128
            if (json.has("_cg128")) {
                ${tickdata_name}._cg128 = json.getBoolean("_cg128");
            }
            // Receive _cg13
            if (json.has("_cg13")) {
                ${tickdata_name}._cg13 = json.getBoolean("_cg13");
            }
            // Receive _cg132
            if (json.has("_cg132")) {
                ${tickdata_name}._cg132 = json.getBoolean("_cg132");
            }
            // Receive _cg14
            if (json.has("_cg14")) {
                ${tickdata_name}._cg14 = json.getBoolean("_cg14");
            }
            // Receive _cg140
            if (json.has("_cg140")) {
                ${tickdata_name}._cg140 = json.getBoolean("_cg140");
            }
            // Receive _cg144
            if (json.has("_cg144")) {
                ${tickdata_name}._cg144 = json.getBoolean("_cg144");
            }
            // Receive _cg145
            if (json.has("_cg145")) {
                ${tickdata_name}._cg145 = json.getBoolean("_cg145");
            }
            // Receive _cg147
            if (json.has("_cg147")) {
                ${tickdata_name}._cg147 = json.getBoolean("_cg147");
            }
            // Receive _cg149
            if (json.has("_cg149")) {
                ${tickdata_name}._cg149 = json.getBoolean("_cg149");
            }
            // Receive _cg150
            if (json.has("_cg150")) {
                ${tickdata_name}._cg150 = json.getBoolean("_cg150");
            }
            // Receive _cg151
            if (json.has("_cg151")) {
                ${tickdata_name}._cg151 = json.getBoolean("_cg151");
            }
            // Receive _cg153
            if (json.has("_cg153")) {
                ${tickdata_name}._cg153 = json.getBoolean("_cg153");
            }
            // Receive _cg154
            if (json.has("_cg154")) {
                ${tickdata_name}._cg154 = json.getBoolean("_cg154");
            }
            // Receive _cg157
            if (json.has("_cg157")) {
                ${tickdata_name}._cg157 = json.getBoolean("_cg157");
            }
            // Receive _cg159
            if (json.has("_cg159")) {
                ${tickdata_name}._cg159 = json.getBoolean("_cg159");
            }
            // Receive _cg16
            if (json.has("_cg16")) {
                ${tickdata_name}._cg16 = json.getBoolean("_cg16");
            }
            // Receive _cg161
            if (json.has("_cg161")) {
                ${tickdata_name}._cg161 = json.getBoolean("_cg161");
            }
            // Receive _cg164
            if (json.has("_cg164")) {
                ${tickdata_name}._cg164 = json.getBoolean("_cg164");
            }
            // Receive _cg166
            if (json.has("_cg166")) {
                ${tickdata_name}._cg166 = json.getBoolean("_cg166");
            }
            // Receive _cg168
            if (json.has("_cg168")) {
                ${tickdata_name}._cg168 = json.getBoolean("_cg168");
            }
            // Receive _cg17
            if (json.has("_cg17")) {
                ${tickdata_name}._cg17 = json.getBoolean("_cg17");
            }
            // Receive _cg171
            if (json.has("_cg171")) {
                ${tickdata_name}._cg171 = json.getBoolean("_cg171");
            }
            // Receive _cg174
            if (json.has("_cg174")) {
                ${tickdata_name}._cg174 = json.getBoolean("_cg174");
            }
            // Receive _cg175
            if (json.has("_cg175")) {
                ${tickdata_name}._cg175 = json.getBoolean("_cg175");
            }
            // Receive _cg20
            if (json.has("_cg20")) {
                ${tickdata_name}._cg20 = json.getBoolean("_cg20");
            }
            // Receive _cg22
            if (json.has("_cg22")) {
                ${tickdata_name}._cg22 = json.getBoolean("_cg22");
            }
            // Receive _cg24
            if (json.has("_cg24")) {
                ${tickdata_name}._cg24 = json.getBoolean("_cg24");
            }
            // Receive _cg26
            if (json.has("_cg26")) {
                ${tickdata_name}._cg26 = json.getBoolean("_cg26");
            }
            // Receive _cg27
            if (json.has("_cg27")) {
                ${tickdata_name}._cg27 = json.getBoolean("_cg27");
            }
            // Receive _cg30
            if (json.has("_cg30")) {
                ${tickdata_name}._cg30 = json.getBoolean("_cg30");
            }
            // Receive _cg31
            if (json.has("_cg31")) {
                ${tickdata_name}._cg31 = json.getBoolean("_cg31");
            }
            // Receive _cg34
            if (json.has("_cg34")) {
                ${tickdata_name}._cg34 = json.getBoolean("_cg34");
            }
            // Receive _cg35
            if (json.has("_cg35")) {
                ${tickdata_name}._cg35 = json.getBoolean("_cg35");
            }
            // Receive _cg37
            if (json.has("_cg37")) {
                ${tickdata_name}._cg37 = json.getBoolean("_cg37");
            }
            // Receive _cg4
            if (json.has("_cg4")) {
                ${tickdata_name}._cg4 = json.getBoolean("_cg4");
            }
            // Receive _cg40
            if (json.has("_cg40")) {
                ${tickdata_name}._cg40 = json.getBoolean("_cg40");
            }
            // Receive _cg43
            if (json.has("_cg43")) {
                ${tickdata_name}._cg43 = json.getBoolean("_cg43");
            }
            // Receive _cg47
            if (json.has("_cg47")) {
                ${tickdata_name}._cg47 = json.getBoolean("_cg47");
            }
            // Receive _cg48
            if (json.has("_cg48")) {
                ${tickdata_name}._cg48 = json.getBoolean("_cg48");
            }
            // Receive _cg50
            if (json.has("_cg50")) {
                ${tickdata_name}._cg50 = json.getBoolean("_cg50");
            }
            // Receive _cg52
            if (json.has("_cg52")) {
                ${tickdata_name}._cg52 = json.getBoolean("_cg52");
            }
            // Receive _cg53
            if (json.has("_cg53")) {
                ${tickdata_name}._cg53 = json.getBoolean("_cg53");
            }
            // Receive _cg54
            if (json.has("_cg54")) {
                ${tickdata_name}._cg54 = json.getBoolean("_cg54");
            }
            // Receive _cg56
            if (json.has("_cg56")) {
                ${tickdata_name}._cg56 = json.getBoolean("_cg56");
            }
            // Receive _cg57
            if (json.has("_cg57")) {
                ${tickdata_name}._cg57 = json.getBoolean("_cg57");
            }
            // Receive _cg60
            if (json.has("_cg60")) {
                ${tickdata_name}._cg60 = json.getBoolean("_cg60");
            }
            // Receive _cg62
            if (json.has("_cg62")) {
                ${tickdata_name}._cg62 = json.getBoolean("_cg62");
            }
            // Receive _cg64
            if (json.has("_cg64")) {
                ${tickdata_name}._cg64 = json.getBoolean("_cg64");
            }
            // Receive _cg65
            if (json.has("_cg65")) {
                ${tickdata_name}._cg65 = json.getBoolean("_cg65");
            }
            // Receive _cg7
            if (json.has("_cg7")) {
                ${tickdata_name}._cg7 = json.getBoolean("_cg7");
            }
            // Receive _cg70
            if (json.has("_cg70")) {
                ${tickdata_name}._cg70 = json.getBoolean("_cg70");
            }
            // Receive _cg73
            if (json.has("_cg73")) {
                ${tickdata_name}._cg73 = json.getBoolean("_cg73");
            }
            // Receive _cg78
            if (json.has("_cg78")) {
                ${tickdata_name}._cg78 = json.getBoolean("_cg78");
            }
            // Receive _cg8
            if (json.has("_cg8")) {
                ${tickdata_name}._cg8 = json.getBoolean("_cg8");
            }
            // Receive _cg82
            if (json.has("_cg82")) {
                ${tickdata_name}._cg82 = json.getBoolean("_cg82");
            }
            // Receive _cg87
            if (json.has("_cg87")) {
                ${tickdata_name}._cg87 = json.getBoolean("_cg87");
            }
            // Receive _cg88
            if (json.has("_cg88")) {
                ${tickdata_name}._cg88 = json.getBoolean("_cg88");
            }
            // Receive _cg92
            if (json.has("_cg92")) {
                ${tickdata_name}._cg92 = json.getBoolean("_cg92");
            }
            // Receive _cg97
            if (json.has("_cg97")) {
                ${tickdata_name}._cg97 = json.getBoolean("_cg97");
            }
            // Receive _g10
            if (json.has("_g10")) {
                ${tickdata_name}._g10 = json.getBoolean("_g10");
            }
            // Receive _g101
            if (json.has("_g101")) {
                ${tickdata_name}._g101 = json.getBoolean("_g101");
            }
            // Receive _g102
            if (json.has("_g102")) {
                ${tickdata_name}._g102 = json.getBoolean("_g102");
            }
            // Receive _g102_e2
            if (json.has("_g102_e2")) {
                ${tickdata_name}._g102_e2 = json.getBoolean("_g102_e2");
            }
            // Receive _g104
            if (json.has("_g104")) {
                ${tickdata_name}._g104 = json.getBoolean("_g104");
            }
            // Receive _g105
            if (json.has("_g105")) {
                ${tickdata_name}._g105 = json.getBoolean("_g105");
            }
            // Receive _g109
            if (json.has("_g109")) {
                ${tickdata_name}._g109 = json.getBoolean("_g109");
            }
            // Receive _g11
            if (json.has("_g11")) {
                ${tickdata_name}._g11 = json.getBoolean("_g11");
            }
            // Receive _g110
            if (json.has("_g110")) {
                ${tickdata_name}._g110 = json.getBoolean("_g110");
            }
            // Receive _g113
            if (json.has("_g113")) {
                ${tickdata_name}._g113 = json.getBoolean("_g113");
            }
            // Receive _g114
            if (json.has("_g114")) {
                ${tickdata_name}._g114 = json.getBoolean("_g114");
            }
            // Receive _g114_e1
            if (json.has("_g114_e1")) {
                ${tickdata_name}._g114_e1 = json.getBoolean("_g114_e1");
            }
            // Receive _g116
            if (json.has("_g116")) {
                ${tickdata_name}._g116 = json.getBoolean("_g116");
            }
            // Receive _g118
            if (json.has("_g118")) {
                ${tickdata_name}._g118 = json.getBoolean("_g118");
            }
            // Receive _g119
            if (json.has("_g119")) {
                ${tickdata_name}._g119 = json.getBoolean("_g119");
            }
            // Receive _g11_e1
            if (json.has("_g11_e1")) {
                ${tickdata_name}._g11_e1 = json.getBoolean("_g11_e1");
            }
            // Receive _g12
            if (json.has("_g12")) {
                ${tickdata_name}._g12 = json.getBoolean("_g12");
            }
            // Receive _g120
            if (json.has("_g120")) {
                ${tickdata_name}._g120 = json.getBoolean("_g120");
            }
            // Receive _g120_e2
            if (json.has("_g120_e2")) {
                ${tickdata_name}._g120_e2 = json.getBoolean("_g120_e2");
            }
            // Receive _g121
            if (json.has("_g121")) {
                ${tickdata_name}._g121 = json.getBoolean("_g121");
            }
            // Receive _g122
            if (json.has("_g122")) {
                ${tickdata_name}._g122 = json.getBoolean("_g122");
            }
            // Receive _g123
            if (json.has("_g123")) {
                ${tickdata_name}._g123 = json.getBoolean("_g123");
            }
            // Receive _g124
            if (json.has("_g124")) {
                ${tickdata_name}._g124 = json.getBoolean("_g124");
            }
            // Receive _g125
            if (json.has("_g125")) {
                ${tickdata_name}._g125 = json.getBoolean("_g125");
            }
            // Receive _g128
            if (json.has("_g128")) {
                ${tickdata_name}._g128 = json.getBoolean("_g128");
            }
            // Receive _g129
            if (json.has("_g129")) {
                ${tickdata_name}._g129 = json.getBoolean("_g129");
            }
            // Receive _g129_e3
            if (json.has("_g129_e3")) {
                ${tickdata_name}._g129_e3 = json.getBoolean("_g129_e3");
            }
            // Receive _g13
            if (json.has("_g13")) {
                ${tickdata_name}._g13 = json.getBoolean("_g13");
            }
            // Receive _g130
            if (json.has("_g130")) {
                ${tickdata_name}._g130 = json.getBoolean("_g130");
            }
            // Receive _g130_e1
            if (json.has("_g130_e1")) {
                ${tickdata_name}._g130_e1 = json.getBoolean("_g130_e1");
            }
            // Receive _g132
            if (json.has("_g132")) {
                ${tickdata_name}._g132 = json.getBoolean("_g132");
            }
            // Receive _g133
            if (json.has("_g133")) {
                ${tickdata_name}._g133 = json.getBoolean("_g133");
            }
            // Receive _g133_e2
            if (json.has("_g133_e2")) {
                ${tickdata_name}._g133_e2 = json.getBoolean("_g133_e2");
            }
            // Receive _g135
            if (json.has("_g135")) {
                ${tickdata_name}._g135 = json.getBoolean("_g135");
            }
            // Receive _g136
            if (json.has("_g136")) {
                ${tickdata_name}._g136 = json.getBoolean("_g136");
            }
            // Receive _g14
            if (json.has("_g14")) {
                ${tickdata_name}._g14 = json.getBoolean("_g14");
            }
            // Receive _g140
            if (json.has("_g140")) {
                ${tickdata_name}._g140 = json.getBoolean("_g140");
            }
            // Receive _g141
            if (json.has("_g141")) {
                ${tickdata_name}._g141 = json.getBoolean("_g141");
            }
            // Receive _g145
            if (json.has("_g145")) {
                ${tickdata_name}._g145 = json.getBoolean("_g145");
            }
            // Receive _g147
            if (json.has("_g147")) {
                ${tickdata_name}._g147 = json.getBoolean("_g147");
            }
            // Receive _g148
            if (json.has("_g148")) {
                ${tickdata_name}._g148 = json.getBoolean("_g148");
            }
            // Receive _g148_e1
            if (json.has("_g148_e1")) {
                ${tickdata_name}._g148_e1 = json.getBoolean("_g148_e1");
            }
            // Receive _g149
            if (json.has("_g149")) {
                ${tickdata_name}._g149 = json.getBoolean("_g149");
            }
            // Receive _g150
            if (json.has("_g150")) {
                ${tickdata_name}._g150 = json.getBoolean("_g150");
            }
            // Receive _g153
            if (json.has("_g153")) {
                ${tickdata_name}._g153 = json.getBoolean("_g153");
            }
            // Receive _g157
            if (json.has("_g157")) {
                ${tickdata_name}._g157 = json.getBoolean("_g157");
            }
            // Receive _g158
            if (json.has("_g158")) {
                ${tickdata_name}._g158 = json.getBoolean("_g158");
            }
            // Receive _g158_e2
            if (json.has("_g158_e2")) {
                ${tickdata_name}._g158_e2 = json.getBoolean("_g158_e2");
            }
            // Receive _g159
            if (json.has("_g159")) {
                ${tickdata_name}._g159 = json.getBoolean("_g159");
            }
            // Receive _g16
            if (json.has("_g16")) {
                ${tickdata_name}._g16 = json.getBoolean("_g16");
            }
            // Receive _g160
            if (json.has("_g160")) {
                ${tickdata_name}._g160 = json.getBoolean("_g160");
            }
            // Receive _g161
            if (json.has("_g161")) {
                ${tickdata_name}._g161 = json.getBoolean("_g161");
            }
            // Receive _g162
            if (json.has("_g162")) {
                ${tickdata_name}._g162 = json.getBoolean("_g162");
            }
            // Receive _g162_e1
            if (json.has("_g162_e1")) {
                ${tickdata_name}._g162_e1 = json.getBoolean("_g162_e1");
            }
            // Receive _g163
            if (json.has("_g163")) {
                ${tickdata_name}._g163 = json.getBoolean("_g163");
            }
            // Receive _g166
            if (json.has("_g166")) {
                ${tickdata_name}._g166 = json.getBoolean("_g166");
            }
            // Receive _g167
            if (json.has("_g167")) {
                ${tickdata_name}._g167 = json.getBoolean("_g167");
            }
            // Receive _g167_e2
            if (json.has("_g167_e2")) {
                ${tickdata_name}._g167_e2 = json.getBoolean("_g167_e2");
            }
            // Receive _g168
            if (json.has("_g168")) {
                ${tickdata_name}._g168 = json.getBoolean("_g168");
            }
            // Receive _g17
            if (json.has("_g17")) {
                ${tickdata_name}._g17 = json.getBoolean("_g17");
            }
            // Receive _g171
            if (json.has("_g171")) {
                ${tickdata_name}._g171 = json.getBoolean("_g171");
            }
            // Receive _g172
            if (json.has("_g172")) {
                ${tickdata_name}._g172 = json.getBoolean("_g172");
            }
            // Receive _g173
            if (json.has("_g173")) {
                ${tickdata_name}._g173 = json.getBoolean("_g173");
            }
            // Receive _g173_e3
            if (json.has("_g173_e3")) {
                ${tickdata_name}._g173_e3 = json.getBoolean("_g173_e3");
            }
            // Receive _g175
            if (json.has("_g175")) {
                ${tickdata_name}._g175 = json.getBoolean("_g175");
            }
            // Receive _g176
            if (json.has("_g176")) {
                ${tickdata_name}._g176 = json.getBoolean("_g176");
            }
            // Receive _g177
            if (json.has("_g177")) {
                ${tickdata_name}._g177 = json.getBoolean("_g177");
            }
            // Receive _g185
            if (json.has("_g185")) {
                ${tickdata_name}._g185 = json.getBoolean("_g185");
            }
            // Receive _g193
            if (json.has("_g193")) {
                ${tickdata_name}._g193 = json.getBoolean("_g193");
            }
            // Receive _g20
            if (json.has("_g20")) {
                ${tickdata_name}._g20 = json.getBoolean("_g20");
            }
            // Receive _g21
            if (json.has("_g21")) {
                ${tickdata_name}._g21 = json.getBoolean("_g21");
            }
            // Receive _g21_e2
            if (json.has("_g21_e2")) {
                ${tickdata_name}._g21_e2 = json.getBoolean("_g21_e2");
            }
            // Receive _g22
            if (json.has("_g22")) {
                ${tickdata_name}._g22 = json.getBoolean("_g22");
            }
            // Receive _g23
            if (json.has("_g23")) {
                ${tickdata_name}._g23 = json.getBoolean("_g23");
            }
            // Receive _g24
            if (json.has("_g24")) {
                ${tickdata_name}._g24 = json.getBoolean("_g24");
            }
            // Receive _g25
            if (json.has("_g25")) {
                ${tickdata_name}._g25 = json.getBoolean("_g25");
            }
            // Receive _g26
            if (json.has("_g26")) {
                ${tickdata_name}._g26 = json.getBoolean("_g26");
            }
            // Receive _g27
            if (json.has("_g27")) {
                ${tickdata_name}._g27 = json.getBoolean("_g27");
            }
            // Receive _g28
            if (json.has("_g28")) {
                ${tickdata_name}._g28 = json.getBoolean("_g28");
            }
            // Receive _g29
            if (json.has("_g29")) {
                ${tickdata_name}._g29 = json.getBoolean("_g29");
            }
            // Receive _g3
            if (json.has("_g3")) {
                ${tickdata_name}._g3 = json.getBoolean("_g3");
            }
            // Receive _g31
            if (json.has("_g31")) {
                ${tickdata_name}._g31 = json.getBoolean("_g31");
            }
            // Receive _g33
            if (json.has("_g33")) {
                ${tickdata_name}._g33 = json.getBoolean("_g33");
            }
            // Receive _g34
            if (json.has("_g34")) {
                ${tickdata_name}._g34 = json.getBoolean("_g34");
            }
            // Receive _g35
            if (json.has("_g35")) {
                ${tickdata_name}._g35 = json.getBoolean("_g35");
            }
            // Receive _g36
            if (json.has("_g36")) {
                ${tickdata_name}._g36 = json.getBoolean("_g36");
            }
            // Receive _g36_e1
            if (json.has("_g36_e1")) {
                ${tickdata_name}._g36_e1 = json.getBoolean("_g36_e1");
            }
            // Receive _g37
            if (json.has("_g37")) {
                ${tickdata_name}._g37 = json.getBoolean("_g37");
            }
            // Receive _g39
            if (json.has("_g39")) {
                ${tickdata_name}._g39 = json.getBoolean("_g39");
            }
            // Receive _g4
            if (json.has("_g4")) {
                ${tickdata_name}._g4 = json.getBoolean("_g4");
            }
            // Receive _g40
            if (json.has("_g40")) {
                ${tickdata_name}._g40 = json.getBoolean("_g40");
            }
            // Receive _g43
            if (json.has("_g43")) {
                ${tickdata_name}._g43 = json.getBoolean("_g43");
            }
            // Receive _g44
            if (json.has("_g44")) {
                ${tickdata_name}._g44 = json.getBoolean("_g44");
            }
            // Receive _g44_e2
            if (json.has("_g44_e2")) {
                ${tickdata_name}._g44_e2 = json.getBoolean("_g44_e2");
            }
            // Receive _g45
            if (json.has("_g45")) {
                ${tickdata_name}._g45 = json.getBoolean("_g45");
            }
            // Receive _g46
            if (json.has("_g46")) {
                ${tickdata_name}._g46 = json.getBoolean("_g46");
            }
            // Receive _g48
            if (json.has("_g48")) {
                ${tickdata_name}._g48 = json.getBoolean("_g48");
            }
            // Receive _g5
            if (json.has("_g5")) {
                ${tickdata_name}._g5 = json.getBoolean("_g5");
            }
            // Receive _g50
            if (json.has("_g50")) {
                ${tickdata_name}._g50 = json.getBoolean("_g50");
            }
            // Receive _g51
            if (json.has("_g51")) {
                ${tickdata_name}._g51 = json.getBoolean("_g51");
            }
            // Receive _g51_e1
            if (json.has("_g51_e1")) {
                ${tickdata_name}._g51_e1 = json.getBoolean("_g51_e1");
            }
            // Receive _g52
            if (json.has("_g52")) {
                ${tickdata_name}._g52 = json.getBoolean("_g52");
            }
            // Receive _g53
            if (json.has("_g53")) {
                ${tickdata_name}._g53 = json.getBoolean("_g53");
            }
            // Receive _g54
            if (json.has("_g54")) {
                ${tickdata_name}._g54 = json.getBoolean("_g54");
            }
            // Receive _g56
            if (json.has("_g56")) {
                ${tickdata_name}._g56 = json.getBoolean("_g56");
            }
            // Receive _g57
            if (json.has("_g57")) {
                ${tickdata_name}._g57 = json.getBoolean("_g57");
            }
            // Receive _g6
            if (json.has("_g6")) {
                ${tickdata_name}._g6 = json.getBoolean("_g6");
            }
            // Receive _g60
            if (json.has("_g60")) {
                ${tickdata_name}._g60 = json.getBoolean("_g60");
            }
            // Receive _g61
            if (json.has("_g61")) {
                ${tickdata_name}._g61 = json.getBoolean("_g61");
            }
            // Receive _g61_e2
            if (json.has("_g61_e2")) {
                ${tickdata_name}._g61_e2 = json.getBoolean("_g61_e2");
            }
            // Receive _g62
            if (json.has("_g62")) {
                ${tickdata_name}._g62 = json.getBoolean("_g62");
            }
            // Receive _g63
            if (json.has("_g63")) {
                ${tickdata_name}._g63 = json.getBoolean("_g63");
            }
            // Receive _g64
            if (json.has("_g64")) {
                ${tickdata_name}._g64 = json.getBoolean("_g64");
            }
            // Receive _g65
            if (json.has("_g65")) {
                ${tickdata_name}._g65 = json.getBoolean("_g65");
            }
            // Receive _g66
            if (json.has("_g66")) {
                ${tickdata_name}._g66 = json.getBoolean("_g66");
            }
            // Receive _g67
            if (json.has("_g67")) {
                ${tickdata_name}._g67 = json.getBoolean("_g67");
            }
            // Receive _g68
            if (json.has("_g68")) {
                ${tickdata_name}._g68 = json.getBoolean("_g68");
            }
            // Receive _g69
            if (json.has("_g69")) {
                ${tickdata_name}._g69 = json.getBoolean("_g69");
            }
            // Receive _g70
            if (json.has("_g70")) {
                ${tickdata_name}._g70 = json.getBoolean("_g70");
            }
            // Receive _g71
            if (json.has("_g71")) {
                ${tickdata_name}._g71 = json.getBoolean("_g71");
            }
            // Receive _g72
            if (json.has("_g72")) {
                ${tickdata_name}._g72 = json.getBoolean("_g72");
            }
            // Receive _g73
            if (json.has("_g73")) {
                ${tickdata_name}._g73 = json.getBoolean("_g73");
            }
            // Receive _g74
            if (json.has("_g74")) {
                ${tickdata_name}._g74 = json.getBoolean("_g74");
            }
            // Receive _g78
            if (json.has("_g78")) {
                ${tickdata_name}._g78 = json.getBoolean("_g78");
            }
            // Receive _g79
            if (json.has("_g79")) {
                ${tickdata_name}._g79 = json.getBoolean("_g79");
            }
            // Receive _g8
            if (json.has("_g8")) {
                ${tickdata_name}._g8 = json.getBoolean("_g8");
            }
            // Receive _g82
            if (json.has("_g82")) {
                ${tickdata_name}._g82 = json.getBoolean("_g82");
            }
            // Receive _g83
            if (json.has("_g83")) {
                ${tickdata_name}._g83 = json.getBoolean("_g83");
            }
            // Receive _g83_e1
            if (json.has("_g83_e1")) {
                ${tickdata_name}._g83_e1 = json.getBoolean("_g83_e1");
            }
            // Receive _g85
            if (json.has("_g85")) {
                ${tickdata_name}._g85 = json.getBoolean("_g85");
            }
            // Receive _g87
            if (json.has("_g87")) {
                ${tickdata_name}._g87 = json.getBoolean("_g87");
            }
            // Receive _g88
            if (json.has("_g88")) {
                ${tickdata_name}._g88 = json.getBoolean("_g88");
            }
            // Receive _g89
            if (json.has("_g89")) {
                ${tickdata_name}._g89 = json.getBoolean("_g89");
            }
            // Receive _g89_e2
            if (json.has("_g89_e2")) {
                ${tickdata_name}._g89_e2 = json.getBoolean("_g89_e2");
            }
            // Receive _g90
            if (json.has("_g90")) {
                ${tickdata_name}._g90 = json.getBoolean("_g90");
            }
            // Receive _g91
            if (json.has("_g91")) {
                ${tickdata_name}._g91 = json.getBoolean("_g91");
            }
            // Receive _g92
            if (json.has("_g92")) {
                ${tickdata_name}._g92 = json.getBoolean("_g92");
            }
            // Receive _g93
            if (json.has("_g93")) {
                ${tickdata_name}._g93 = json.getBoolean("_g93");
            }
            // Receive _g94
            if (json.has("_g94")) {
                ${tickdata_name}._g94 = json.getBoolean("_g94");
            }
            // Receive _g97
            if (json.has("_g97")) {
                ${tickdata_name}._g97 = json.getBoolean("_g97");
            }
            // Receive _g98
            if (json.has("_g98")) {
                ${tickdata_name}._g98 = json.getBoolean("_g98");
            }
            // Receive _g98_e3
            if (json.has("_g98_e3")) {
                ${tickdata_name}._g98_e3 = json.getBoolean("_g98_e3");
            }
            // Receive _g99
            if (json.has("_g99")) {
                ${tickdata_name}._g99 = json.getBoolean("_g99");
            }
            // Receive _g99_e1
            if (json.has("_g99_e1")) {
                ${tickdata_name}._g99_e1 = json.getBoolean("_g99_e1");
            }
            // Receive _pacemaker_local__Atrig
            if (json.has("_pacemaker_local__Atrig")) {
                ${tickdata_name}._pacemaker_local__Atrig = json.getBoolean("_pacemaker_local__Atrig");
            }
            // Receive _pacemaker_local__Atrig1
            if (json.has("_pacemaker_local__Atrig1")) {
                ${tickdata_name}._pacemaker_local__Atrig1 = json.getBoolean("_pacemaker_local__Atrig1");
            }
            // Receive _pacemaker_local__Atrig2
            if (json.has("_pacemaker_local__Atrig2")) {
                ${tickdata_name}._pacemaker_local__Atrig2 = json.getBoolean("_pacemaker_local__Atrig2");
            }
            // Receive _pacemaker_local__Atrig3
            if (json.has("_pacemaker_local__Atrig3")) {
                ${tickdata_name}._pacemaker_local__Atrig3 = json.getBoolean("_pacemaker_local__Atrig3");
            }
            // Receive _pacemaker_local__Atrig4
            if (json.has("_pacemaker_local__Atrig4")) {
                ${tickdata_name}._pacemaker_local__Atrig4 = json.getBoolean("_pacemaker_local__Atrig4");
            }
            // Receive _pacemaker_local__Atrig5
            if (json.has("_pacemaker_local__Atrig5")) {
                ${tickdata_name}._pacemaker_local__Atrig5 = json.getBoolean("_pacemaker_local__Atrig5");
            }
            // Receive _pacemaker_local__Atrig6
            if (json.has("_pacemaker_local__Atrig6")) {
                ${tickdata_name}._pacemaker_local__Atrig6 = json.getBoolean("_pacemaker_local__Atrig6");
            }
            // Receive _pacemaker_local__Atrig7
            if (json.has("_pacemaker_local__Atrig7")) {
                ${tickdata_name}._pacemaker_local__Atrig7 = json.getBoolean("_pacemaker_local__Atrig7");
            }
            // Receive _pacemaker_local__CFSterm
            if (json.has("_pacemaker_local__CFSterm")) {
                ${tickdata_name}._pacemaker_local__CFSterm = json.getBoolean("_pacemaker_local__CFSterm");
            }
            // Receive _pacemaker_local__CFSterm1
            if (json.has("_pacemaker_local__CFSterm1")) {
                ${tickdata_name}._pacemaker_local__CFSterm1 = json.getBoolean("_pacemaker_local__CFSterm1");
            }
            // Receive _pacemaker_local__CFSterm2
            if (json.has("_pacemaker_local__CFSterm2")) {
                ${tickdata_name}._pacemaker_local__CFSterm2 = json.getBoolean("_pacemaker_local__CFSterm2");
            }
            // Receive _pacemaker_local_x
            if (json.has("_pacemaker_local_x")) {
                ${tickdata_name}._pacemaker_local_x = json.getDouble("_pacemaker_local_x");
            }
            // Receive _pacemaker_local_x1
            if (json.has("_pacemaker_local_x1")) {
                ${tickdata_name}._pacemaker_local_x1 = json.getDouble("_pacemaker_local_x1");
            }
            // Receive _pacemaker_local_x2
            if (json.has("_pacemaker_local_x2")) {
                ${tickdata_name}._pacemaker_local_x2 = json.getDouble("_pacemaker_local_x2");
            }
            // Receive _pg102_e2
            if (json.has("_pg102_e2")) {
                ${tickdata_name}._pg102_e2 = json.getBoolean("_pg102_e2");
            }
            // Receive _pg120
            if (json.has("_pg120")) {
                ${tickdata_name}._pg120 = json.getBoolean("_pg120");
            }
            // Receive _pg121
            if (json.has("_pg121")) {
                ${tickdata_name}._pg121 = json.getBoolean("_pg121");
            }
            // Receive _pg124
            if (json.has("_pg124")) {
                ${tickdata_name}._pg124 = json.getBoolean("_pg124");
            }
            // Receive _pg135
            if (json.has("_pg135")) {
                ${tickdata_name}._pg135 = json.getBoolean("_pg135");
            }
            // Receive _pg14
            if (json.has("_pg14")) {
                ${tickdata_name}._pg14 = json.getBoolean("_pg14");
            }
            // Receive _pg141
            if (json.has("_pg141")) {
                ${tickdata_name}._pg141 = json.getBoolean("_pg141");
            }
            // Receive _pg145
            if (json.has("_pg145")) {
                ${tickdata_name}._pg145 = json.getBoolean("_pg145");
            }
            // Receive _pg150
            if (json.has("_pg150")) {
                ${tickdata_name}._pg150 = json.getBoolean("_pg150");
            }
            // Receive _pg167_e2
            if (json.has("_pg167_e2")) {
                ${tickdata_name}._pg167_e2 = json.getBoolean("_pg167_e2");
            }
            // Receive _pg17
            if (json.has("_pg17")) {
                ${tickdata_name}._pg17 = json.getBoolean("_pg17");
            }
            // Receive _pg175
            if (json.has("_pg175")) {
                ${tickdata_name}._pg175 = json.getBoolean("_pg175");
            }
            // Receive _pg176
            if (json.has("_pg176")) {
                ${tickdata_name}._pg176 = json.getBoolean("_pg176");
            }
            // Receive _pg177
            if (json.has("_pg177")) {
                ${tickdata_name}._pg177 = json.getBoolean("_pg177");
            }
            // Receive _pg3
            if (json.has("_pg3")) {
                ${tickdata_name}._pg3 = json.getBoolean("_pg3");
            }
            // Receive _pg31
            if (json.has("_pg31")) {
                ${tickdata_name}._pg31 = json.getBoolean("_pg31");
            }
            // Receive _pg37
            if (json.has("_pg37")) {
                ${tickdata_name}._pg37 = json.getBoolean("_pg37");
            }
            // Receive _pg40
            if (json.has("_pg40")) {
                ${tickdata_name}._pg40 = json.getBoolean("_pg40");
            }
            // Receive _pg44_e2
            if (json.has("_pg44_e2")) {
                ${tickdata_name}._pg44_e2 = json.getBoolean("_pg44_e2");
            }
            // Receive _pg45
            if (json.has("_pg45")) {
                ${tickdata_name}._pg45 = json.getBoolean("_pg45");
            }
            // Receive _pg54
            if (json.has("_pg54")) {
                ${tickdata_name}._pg54 = json.getBoolean("_pg54");
            }
            // Receive _pg68
            if (json.has("_pg68")) {
                ${tickdata_name}._pg68 = json.getBoolean("_pg68");
            }
            // Receive _pg73
            if (json.has("_pg73")) {
                ${tickdata_name}._pg73 = json.getBoolean("_pg73");
            }
            // Receive _pg78
            if (json.has("_pg78")) {
                ${tickdata_name}._pg78 = json.getBoolean("_pg78");
            }
            // Receive _pg79
            if (json.has("_pg79")) {
                ${tickdata_name}._pg79 = json.getBoolean("_pg79");
            }
            // Receive _pg8
            if (json.has("_pg8")) {
                ${tickdata_name}._pg8 = json.getBoolean("_pg8");
            }
            // Receive _pg90
            if (json.has("_pg90")) {
                ${tickdata_name}._pg90 = json.getBoolean("_pg90");
            }
            // Receive _pg93
            if (json.has("_pg93")) {
                ${tickdata_name}._pg93 = json.getBoolean("_pg93");
            }
            // Receive _pg97
            if (json.has("_pg97")) {
                ${tickdata_name}._pg97 = json.getBoolean("_pg97");
            }
            // Receive _pg98
            if (json.has("_pg98")) {
                ${tickdata_name}._pg98 = json.getBoolean("_pg98");
            }
            // Receive _region0_null_x
            if (json.has("_region0_null_x")) {
                ${tickdata_name}._region0_null_x = json.getDouble("_region0_null_x");
            }
            // Receive _taken_transitions
            if (json.has("_taken_transitions")) {
                JSONArray _array = json.getJSONArray("_taken_transitions");
                for (int i = 0; i < _array.length(); i++) {
                    ${tickdata_name}._taken_transitions[i] = _array.getInt(i);
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        } catch (JSONException e) {
           // Ignore other input
        }
    }
    
    private static void sendVariables() {
        JSONObject json = new JSONObject();
        
        // Send AS
        json.put("AS", JSONObject.wrap(${tickdata_name}.AS));
        // Send VS
        json.put("VS", JSONObject.wrap(${tickdata_name}.VS));
        // Send deltaT
        json.put("deltaT", JSONObject.wrap(${tickdata_name}.deltaT));
        // Send AP
        json.put("AP", JSONObject.wrap(${tickdata_name}.AP));
        // Send VP
        json.put("VP", JSONObject.wrap(${tickdata_name}.VP));
        // Send sleepT
        json.put("sleepT", JSONObject.wrap(${tickdata_name}.sleepT));
        // Send #ticktime
        json.put("#ticktime", _ticktime);
        // Send LRI_ACTIVE
        json.put("LRI_ACTIVE", JSONObject.wrap(${tickdata_name}.LRI_ACTIVE));
        // Send LRI_END
        json.put("LRI_END", JSONObject.wrap(${tickdata_name}.LRI_END));
        // Send PVARP_ACTIVE
        json.put("PVARP_ACTIVE", JSONObject.wrap(${tickdata_name}.PVARP_ACTIVE));
        // Send URI_ACTIVE
        json.put("URI_ACTIVE", JSONObject.wrap(${tickdata_name}.URI_ACTIVE));
        // Send VRP_ACTIVE
        json.put("VRP_ACTIVE", JSONObject.wrap(${tickdata_name}.VRP_ACTIVE));
        // Send _GO
        json.put("_GO", JSONObject.wrap(${tickdata_name}._GO));
        // Send _TERM
        json.put("_TERM", JSONObject.wrap(${tickdata_name}._TERM));
        // Send _cg10
        json.put("_cg10", JSONObject.wrap(${tickdata_name}._cg10));
        // Send _cg101
        json.put("_cg101", JSONObject.wrap(${tickdata_name}._cg101));
        // Send _cg109
        json.put("_cg109", JSONObject.wrap(${tickdata_name}._cg109));
        // Send _cg113
        json.put("_cg113", JSONObject.wrap(${tickdata_name}._cg113));
        // Send _cg118
        json.put("_cg118", JSONObject.wrap(${tickdata_name}._cg118));
        // Send _cg119
        json.put("_cg119", JSONObject.wrap(${tickdata_name}._cg119));
        // Send _cg12
        json.put("_cg12", JSONObject.wrap(${tickdata_name}._cg12));
        // Send _cg123
        json.put("_cg123", JSONObject.wrap(${tickdata_name}._cg123));
        // Send _cg128
        json.put("_cg128", JSONObject.wrap(${tickdata_name}._cg128));
        // Send _cg13
        json.put("_cg13", JSONObject.wrap(${tickdata_name}._cg13));
        // Send _cg132
        json.put("_cg132", JSONObject.wrap(${tickdata_name}._cg132));
        // Send _cg14
        json.put("_cg14", JSONObject.wrap(${tickdata_name}._cg14));
        // Send _cg140
        json.put("_cg140", JSONObject.wrap(${tickdata_name}._cg140));
        // Send _cg144
        json.put("_cg144", JSONObject.wrap(${tickdata_name}._cg144));
        // Send _cg145
        json.put("_cg145", JSONObject.wrap(${tickdata_name}._cg145));
        // Send _cg147
        json.put("_cg147", JSONObject.wrap(${tickdata_name}._cg147));
        // Send _cg149
        json.put("_cg149", JSONObject.wrap(${tickdata_name}._cg149));
        // Send _cg150
        json.put("_cg150", JSONObject.wrap(${tickdata_name}._cg150));
        // Send _cg151
        json.put("_cg151", JSONObject.wrap(${tickdata_name}._cg151));
        // Send _cg153
        json.put("_cg153", JSONObject.wrap(${tickdata_name}._cg153));
        // Send _cg154
        json.put("_cg154", JSONObject.wrap(${tickdata_name}._cg154));
        // Send _cg157
        json.put("_cg157", JSONObject.wrap(${tickdata_name}._cg157));
        // Send _cg159
        json.put("_cg159", JSONObject.wrap(${tickdata_name}._cg159));
        // Send _cg16
        json.put("_cg16", JSONObject.wrap(${tickdata_name}._cg16));
        // Send _cg161
        json.put("_cg161", JSONObject.wrap(${tickdata_name}._cg161));
        // Send _cg164
        json.put("_cg164", JSONObject.wrap(${tickdata_name}._cg164));
        // Send _cg166
        json.put("_cg166", JSONObject.wrap(${tickdata_name}._cg166));
        // Send _cg168
        json.put("_cg168", JSONObject.wrap(${tickdata_name}._cg168));
        // Send _cg17
        json.put("_cg17", JSONObject.wrap(${tickdata_name}._cg17));
        // Send _cg171
        json.put("_cg171", JSONObject.wrap(${tickdata_name}._cg171));
        // Send _cg174
        json.put("_cg174", JSONObject.wrap(${tickdata_name}._cg174));
        // Send _cg175
        json.put("_cg175", JSONObject.wrap(${tickdata_name}._cg175));
        // Send _cg20
        json.put("_cg20", JSONObject.wrap(${tickdata_name}._cg20));
        // Send _cg22
        json.put("_cg22", JSONObject.wrap(${tickdata_name}._cg22));
        // Send _cg24
        json.put("_cg24", JSONObject.wrap(${tickdata_name}._cg24));
        // Send _cg26
        json.put("_cg26", JSONObject.wrap(${tickdata_name}._cg26));
        // Send _cg27
        json.put("_cg27", JSONObject.wrap(${tickdata_name}._cg27));
        // Send _cg30
        json.put("_cg30", JSONObject.wrap(${tickdata_name}._cg30));
        // Send _cg31
        json.put("_cg31", JSONObject.wrap(${tickdata_name}._cg31));
        // Send _cg34
        json.put("_cg34", JSONObject.wrap(${tickdata_name}._cg34));
        // Send _cg35
        json.put("_cg35", JSONObject.wrap(${tickdata_name}._cg35));
        // Send _cg37
        json.put("_cg37", JSONObject.wrap(${tickdata_name}._cg37));
        // Send _cg4
        json.put("_cg4", JSONObject.wrap(${tickdata_name}._cg4));
        // Send _cg40
        json.put("_cg40", JSONObject.wrap(${tickdata_name}._cg40));
        // Send _cg43
        json.put("_cg43", JSONObject.wrap(${tickdata_name}._cg43));
        // Send _cg47
        json.put("_cg47", JSONObject.wrap(${tickdata_name}._cg47));
        // Send _cg48
        json.put("_cg48", JSONObject.wrap(${tickdata_name}._cg48));
        // Send _cg50
        json.put("_cg50", JSONObject.wrap(${tickdata_name}._cg50));
        // Send _cg52
        json.put("_cg52", JSONObject.wrap(${tickdata_name}._cg52));
        // Send _cg53
        json.put("_cg53", JSONObject.wrap(${tickdata_name}._cg53));
        // Send _cg54
        json.put("_cg54", JSONObject.wrap(${tickdata_name}._cg54));
        // Send _cg56
        json.put("_cg56", JSONObject.wrap(${tickdata_name}._cg56));
        // Send _cg57
        json.put("_cg57", JSONObject.wrap(${tickdata_name}._cg57));
        // Send _cg60
        json.put("_cg60", JSONObject.wrap(${tickdata_name}._cg60));
        // Send _cg62
        json.put("_cg62", JSONObject.wrap(${tickdata_name}._cg62));
        // Send _cg64
        json.put("_cg64", JSONObject.wrap(${tickdata_name}._cg64));
        // Send _cg65
        json.put("_cg65", JSONObject.wrap(${tickdata_name}._cg65));
        // Send _cg7
        json.put("_cg7", JSONObject.wrap(${tickdata_name}._cg7));
        // Send _cg70
        json.put("_cg70", JSONObject.wrap(${tickdata_name}._cg70));
        // Send _cg73
        json.put("_cg73", JSONObject.wrap(${tickdata_name}._cg73));
        // Send _cg78
        json.put("_cg78", JSONObject.wrap(${tickdata_name}._cg78));
        // Send _cg8
        json.put("_cg8", JSONObject.wrap(${tickdata_name}._cg8));
        // Send _cg82
        json.put("_cg82", JSONObject.wrap(${tickdata_name}._cg82));
        // Send _cg87
        json.put("_cg87", JSONObject.wrap(${tickdata_name}._cg87));
        // Send _cg88
        json.put("_cg88", JSONObject.wrap(${tickdata_name}._cg88));
        // Send _cg92
        json.put("_cg92", JSONObject.wrap(${tickdata_name}._cg92));
        // Send _cg97
        json.put("_cg97", JSONObject.wrap(${tickdata_name}._cg97));
        // Send _g10
        json.put("_g10", JSONObject.wrap(${tickdata_name}._g10));
        // Send _g101
        json.put("_g101", JSONObject.wrap(${tickdata_name}._g101));
        // Send _g102
        json.put("_g102", JSONObject.wrap(${tickdata_name}._g102));
        // Send _g102_e2
        json.put("_g102_e2", JSONObject.wrap(${tickdata_name}._g102_e2));
        // Send _g104
        json.put("_g104", JSONObject.wrap(${tickdata_name}._g104));
        // Send _g105
        json.put("_g105", JSONObject.wrap(${tickdata_name}._g105));
        // Send _g109
        json.put("_g109", JSONObject.wrap(${tickdata_name}._g109));
        // Send _g11
        json.put("_g11", JSONObject.wrap(${tickdata_name}._g11));
        // Send _g110
        json.put("_g110", JSONObject.wrap(${tickdata_name}._g110));
        // Send _g113
        json.put("_g113", JSONObject.wrap(${tickdata_name}._g113));
        // Send _g114
        json.put("_g114", JSONObject.wrap(${tickdata_name}._g114));
        // Send _g114_e1
        json.put("_g114_e1", JSONObject.wrap(${tickdata_name}._g114_e1));
        // Send _g116
        json.put("_g116", JSONObject.wrap(${tickdata_name}._g116));
        // Send _g118
        json.put("_g118", JSONObject.wrap(${tickdata_name}._g118));
        // Send _g119
        json.put("_g119", JSONObject.wrap(${tickdata_name}._g119));
        // Send _g11_e1
        json.put("_g11_e1", JSONObject.wrap(${tickdata_name}._g11_e1));
        // Send _g12
        json.put("_g12", JSONObject.wrap(${tickdata_name}._g12));
        // Send _g120
        json.put("_g120", JSONObject.wrap(${tickdata_name}._g120));
        // Send _g120_e2
        json.put("_g120_e2", JSONObject.wrap(${tickdata_name}._g120_e2));
        // Send _g121
        json.put("_g121", JSONObject.wrap(${tickdata_name}._g121));
        // Send _g122
        json.put("_g122", JSONObject.wrap(${tickdata_name}._g122));
        // Send _g123
        json.put("_g123", JSONObject.wrap(${tickdata_name}._g123));
        // Send _g124
        json.put("_g124", JSONObject.wrap(${tickdata_name}._g124));
        // Send _g125
        json.put("_g125", JSONObject.wrap(${tickdata_name}._g125));
        // Send _g128
        json.put("_g128", JSONObject.wrap(${tickdata_name}._g128));
        // Send _g129
        json.put("_g129", JSONObject.wrap(${tickdata_name}._g129));
        // Send _g129_e3
        json.put("_g129_e3", JSONObject.wrap(${tickdata_name}._g129_e3));
        // Send _g13
        json.put("_g13", JSONObject.wrap(${tickdata_name}._g13));
        // Send _g130
        json.put("_g130", JSONObject.wrap(${tickdata_name}._g130));
        // Send _g130_e1
        json.put("_g130_e1", JSONObject.wrap(${tickdata_name}._g130_e1));
        // Send _g132
        json.put("_g132", JSONObject.wrap(${tickdata_name}._g132));
        // Send _g133
        json.put("_g133", JSONObject.wrap(${tickdata_name}._g133));
        // Send _g133_e2
        json.put("_g133_e2", JSONObject.wrap(${tickdata_name}._g133_e2));
        // Send _g135
        json.put("_g135", JSONObject.wrap(${tickdata_name}._g135));
        // Send _g136
        json.put("_g136", JSONObject.wrap(${tickdata_name}._g136));
        // Send _g14
        json.put("_g14", JSONObject.wrap(${tickdata_name}._g14));
        // Send _g140
        json.put("_g140", JSONObject.wrap(${tickdata_name}._g140));
        // Send _g141
        json.put("_g141", JSONObject.wrap(${tickdata_name}._g141));
        // Send _g145
        json.put("_g145", JSONObject.wrap(${tickdata_name}._g145));
        // Send _g147
        json.put("_g147", JSONObject.wrap(${tickdata_name}._g147));
        // Send _g148
        json.put("_g148", JSONObject.wrap(${tickdata_name}._g148));
        // Send _g148_e1
        json.put("_g148_e1", JSONObject.wrap(${tickdata_name}._g148_e1));
        // Send _g149
        json.put("_g149", JSONObject.wrap(${tickdata_name}._g149));
        // Send _g150
        json.put("_g150", JSONObject.wrap(${tickdata_name}._g150));
        // Send _g153
        json.put("_g153", JSONObject.wrap(${tickdata_name}._g153));
        // Send _g157
        json.put("_g157", JSONObject.wrap(${tickdata_name}._g157));
        // Send _g158
        json.put("_g158", JSONObject.wrap(${tickdata_name}._g158));
        // Send _g158_e2
        json.put("_g158_e2", JSONObject.wrap(${tickdata_name}._g158_e2));
        // Send _g159
        json.put("_g159", JSONObject.wrap(${tickdata_name}._g159));
        // Send _g16
        json.put("_g16", JSONObject.wrap(${tickdata_name}._g16));
        // Send _g160
        json.put("_g160", JSONObject.wrap(${tickdata_name}._g160));
        // Send _g161
        json.put("_g161", JSONObject.wrap(${tickdata_name}._g161));
        // Send _g162
        json.put("_g162", JSONObject.wrap(${tickdata_name}._g162));
        // Send _g162_e1
        json.put("_g162_e1", JSONObject.wrap(${tickdata_name}._g162_e1));
        // Send _g163
        json.put("_g163", JSONObject.wrap(${tickdata_name}._g163));
        // Send _g166
        json.put("_g166", JSONObject.wrap(${tickdata_name}._g166));
        // Send _g167
        json.put("_g167", JSONObject.wrap(${tickdata_name}._g167));
        // Send _g167_e2
        json.put("_g167_e2", JSONObject.wrap(${tickdata_name}._g167_e2));
        // Send _g168
        json.put("_g168", JSONObject.wrap(${tickdata_name}._g168));
        // Send _g17
        json.put("_g17", JSONObject.wrap(${tickdata_name}._g17));
        // Send _g171
        json.put("_g171", JSONObject.wrap(${tickdata_name}._g171));
        // Send _g172
        json.put("_g172", JSONObject.wrap(${tickdata_name}._g172));
        // Send _g173
        json.put("_g173", JSONObject.wrap(${tickdata_name}._g173));
        // Send _g173_e3
        json.put("_g173_e3", JSONObject.wrap(${tickdata_name}._g173_e3));
        // Send _g175
        json.put("_g175", JSONObject.wrap(${tickdata_name}._g175));
        // Send _g176
        json.put("_g176", JSONObject.wrap(${tickdata_name}._g176));
        // Send _g177
        json.put("_g177", JSONObject.wrap(${tickdata_name}._g177));
        // Send _g185
        json.put("_g185", JSONObject.wrap(${tickdata_name}._g185));
        // Send _g193
        json.put("_g193", JSONObject.wrap(${tickdata_name}._g193));
        // Send _g20
        json.put("_g20", JSONObject.wrap(${tickdata_name}._g20));
        // Send _g21
        json.put("_g21", JSONObject.wrap(${tickdata_name}._g21));
        // Send _g21_e2
        json.put("_g21_e2", JSONObject.wrap(${tickdata_name}._g21_e2));
        // Send _g22
        json.put("_g22", JSONObject.wrap(${tickdata_name}._g22));
        // Send _g23
        json.put("_g23", JSONObject.wrap(${tickdata_name}._g23));
        // Send _g24
        json.put("_g24", JSONObject.wrap(${tickdata_name}._g24));
        // Send _g25
        json.put("_g25", JSONObject.wrap(${tickdata_name}._g25));
        // Send _g26
        json.put("_g26", JSONObject.wrap(${tickdata_name}._g26));
        // Send _g27
        json.put("_g27", JSONObject.wrap(${tickdata_name}._g27));
        // Send _g28
        json.put("_g28", JSONObject.wrap(${tickdata_name}._g28));
        // Send _g29
        json.put("_g29", JSONObject.wrap(${tickdata_name}._g29));
        // Send _g3
        json.put("_g3", JSONObject.wrap(${tickdata_name}._g3));
        // Send _g31
        json.put("_g31", JSONObject.wrap(${tickdata_name}._g31));
        // Send _g33
        json.put("_g33", JSONObject.wrap(${tickdata_name}._g33));
        // Send _g34
        json.put("_g34", JSONObject.wrap(${tickdata_name}._g34));
        // Send _g35
        json.put("_g35", JSONObject.wrap(${tickdata_name}._g35));
        // Send _g36
        json.put("_g36", JSONObject.wrap(${tickdata_name}._g36));
        // Send _g36_e1
        json.put("_g36_e1", JSONObject.wrap(${tickdata_name}._g36_e1));
        // Send _g37
        json.put("_g37", JSONObject.wrap(${tickdata_name}._g37));
        // Send _g39
        json.put("_g39", JSONObject.wrap(${tickdata_name}._g39));
        // Send _g4
        json.put("_g4", JSONObject.wrap(${tickdata_name}._g4));
        // Send _g40
        json.put("_g40", JSONObject.wrap(${tickdata_name}._g40));
        // Send _g43
        json.put("_g43", JSONObject.wrap(${tickdata_name}._g43));
        // Send _g44
        json.put("_g44", JSONObject.wrap(${tickdata_name}._g44));
        // Send _g44_e2
        json.put("_g44_e2", JSONObject.wrap(${tickdata_name}._g44_e2));
        // Send _g45
        json.put("_g45", JSONObject.wrap(${tickdata_name}._g45));
        // Send _g46
        json.put("_g46", JSONObject.wrap(${tickdata_name}._g46));
        // Send _g48
        json.put("_g48", JSONObject.wrap(${tickdata_name}._g48));
        // Send _g5
        json.put("_g5", JSONObject.wrap(${tickdata_name}._g5));
        // Send _g50
        json.put("_g50", JSONObject.wrap(${tickdata_name}._g50));
        // Send _g51
        json.put("_g51", JSONObject.wrap(${tickdata_name}._g51));
        // Send _g51_e1
        json.put("_g51_e1", JSONObject.wrap(${tickdata_name}._g51_e1));
        // Send _g52
        json.put("_g52", JSONObject.wrap(${tickdata_name}._g52));
        // Send _g53
        json.put("_g53", JSONObject.wrap(${tickdata_name}._g53));
        // Send _g54
        json.put("_g54", JSONObject.wrap(${tickdata_name}._g54));
        // Send _g56
        json.put("_g56", JSONObject.wrap(${tickdata_name}._g56));
        // Send _g57
        json.put("_g57", JSONObject.wrap(${tickdata_name}._g57));
        // Send _g6
        json.put("_g6", JSONObject.wrap(${tickdata_name}._g6));
        // Send _g60
        json.put("_g60", JSONObject.wrap(${tickdata_name}._g60));
        // Send _g61
        json.put("_g61", JSONObject.wrap(${tickdata_name}._g61));
        // Send _g61_e2
        json.put("_g61_e2", JSONObject.wrap(${tickdata_name}._g61_e2));
        // Send _g62
        json.put("_g62", JSONObject.wrap(${tickdata_name}._g62));
        // Send _g63
        json.put("_g63", JSONObject.wrap(${tickdata_name}._g63));
        // Send _g64
        json.put("_g64", JSONObject.wrap(${tickdata_name}._g64));
        // Send _g65
        json.put("_g65", JSONObject.wrap(${tickdata_name}._g65));
        // Send _g66
        json.put("_g66", JSONObject.wrap(${tickdata_name}._g66));
        // Send _g67
        json.put("_g67", JSONObject.wrap(${tickdata_name}._g67));
        // Send _g68
        json.put("_g68", JSONObject.wrap(${tickdata_name}._g68));
        // Send _g69
        json.put("_g69", JSONObject.wrap(${tickdata_name}._g69));
        // Send _g70
        json.put("_g70", JSONObject.wrap(${tickdata_name}._g70));
        // Send _g71
        json.put("_g71", JSONObject.wrap(${tickdata_name}._g71));
        // Send _g72
        json.put("_g72", JSONObject.wrap(${tickdata_name}._g72));
        // Send _g73
        json.put("_g73", JSONObject.wrap(${tickdata_name}._g73));
        // Send _g74
        json.put("_g74", JSONObject.wrap(${tickdata_name}._g74));
        // Send _g78
        json.put("_g78", JSONObject.wrap(${tickdata_name}._g78));
        // Send _g79
        json.put("_g79", JSONObject.wrap(${tickdata_name}._g79));
        // Send _g8
        json.put("_g8", JSONObject.wrap(${tickdata_name}._g8));
        // Send _g82
        json.put("_g82", JSONObject.wrap(${tickdata_name}._g82));
        // Send _g83
        json.put("_g83", JSONObject.wrap(${tickdata_name}._g83));
        // Send _g83_e1
        json.put("_g83_e1", JSONObject.wrap(${tickdata_name}._g83_e1));
        // Send _g85
        json.put("_g85", JSONObject.wrap(${tickdata_name}._g85));
        // Send _g87
        json.put("_g87", JSONObject.wrap(${tickdata_name}._g87));
        // Send _g88
        json.put("_g88", JSONObject.wrap(${tickdata_name}._g88));
        // Send _g89
        json.put("_g89", JSONObject.wrap(${tickdata_name}._g89));
        // Send _g89_e2
        json.put("_g89_e2", JSONObject.wrap(${tickdata_name}._g89_e2));
        // Send _g90
        json.put("_g90", JSONObject.wrap(${tickdata_name}._g90));
        // Send _g91
        json.put("_g91", JSONObject.wrap(${tickdata_name}._g91));
        // Send _g92
        json.put("_g92", JSONObject.wrap(${tickdata_name}._g92));
        // Send _g93
        json.put("_g93", JSONObject.wrap(${tickdata_name}._g93));
        // Send _g94
        json.put("_g94", JSONObject.wrap(${tickdata_name}._g94));
        // Send _g97
        json.put("_g97", JSONObject.wrap(${tickdata_name}._g97));
        // Send _g98
        json.put("_g98", JSONObject.wrap(${tickdata_name}._g98));
        // Send _g98_e3
        json.put("_g98_e3", JSONObject.wrap(${tickdata_name}._g98_e3));
        // Send _g99
        json.put("_g99", JSONObject.wrap(${tickdata_name}._g99));
        // Send _g99_e1
        json.put("_g99_e1", JSONObject.wrap(${tickdata_name}._g99_e1));
        // Send _pacemaker_local__Atrig
        json.put("_pacemaker_local__Atrig", JSONObject.wrap(${tickdata_name}._pacemaker_local__Atrig));
        // Send _pacemaker_local__Atrig1
        json.put("_pacemaker_local__Atrig1", JSONObject.wrap(${tickdata_name}._pacemaker_local__Atrig1));
        // Send _pacemaker_local__Atrig2
        json.put("_pacemaker_local__Atrig2", JSONObject.wrap(${tickdata_name}._pacemaker_local__Atrig2));
        // Send _pacemaker_local__Atrig3
        json.put("_pacemaker_local__Atrig3", JSONObject.wrap(${tickdata_name}._pacemaker_local__Atrig3));
        // Send _pacemaker_local__Atrig4
        json.put("_pacemaker_local__Atrig4", JSONObject.wrap(${tickdata_name}._pacemaker_local__Atrig4));
        // Send _pacemaker_local__Atrig5
        json.put("_pacemaker_local__Atrig5", JSONObject.wrap(${tickdata_name}._pacemaker_local__Atrig5));
        // Send _pacemaker_local__Atrig6
        json.put("_pacemaker_local__Atrig6", JSONObject.wrap(${tickdata_name}._pacemaker_local__Atrig6));
        // Send _pacemaker_local__Atrig7
        json.put("_pacemaker_local__Atrig7", JSONObject.wrap(${tickdata_name}._pacemaker_local__Atrig7));
        // Send _pacemaker_local__CFSterm
        json.put("_pacemaker_local__CFSterm", JSONObject.wrap(${tickdata_name}._pacemaker_local__CFSterm));
        // Send _pacemaker_local__CFSterm1
        json.put("_pacemaker_local__CFSterm1", JSONObject.wrap(${tickdata_name}._pacemaker_local__CFSterm1));
        // Send _pacemaker_local__CFSterm2
        json.put("_pacemaker_local__CFSterm2", JSONObject.wrap(${tickdata_name}._pacemaker_local__CFSterm2));
        // Send _pacemaker_local_x
        json.put("_pacemaker_local_x", JSONObject.wrap(${tickdata_name}._pacemaker_local_x));
        // Send _pacemaker_local_x1
        json.put("_pacemaker_local_x1", JSONObject.wrap(${tickdata_name}._pacemaker_local_x1));
        // Send _pacemaker_local_x2
        json.put("_pacemaker_local_x2", JSONObject.wrap(${tickdata_name}._pacemaker_local_x2));
        // Send _pg102_e2
        json.put("_pg102_e2", JSONObject.wrap(${tickdata_name}._pg102_e2));
        // Send _pg120
        json.put("_pg120", JSONObject.wrap(${tickdata_name}._pg120));
        // Send _pg121
        json.put("_pg121", JSONObject.wrap(${tickdata_name}._pg121));
        // Send _pg124
        json.put("_pg124", JSONObject.wrap(${tickdata_name}._pg124));
        // Send _pg135
        json.put("_pg135", JSONObject.wrap(${tickdata_name}._pg135));
        // Send _pg14
        json.put("_pg14", JSONObject.wrap(${tickdata_name}._pg14));
        // Send _pg141
        json.put("_pg141", JSONObject.wrap(${tickdata_name}._pg141));
        // Send _pg145
        json.put("_pg145", JSONObject.wrap(${tickdata_name}._pg145));
        // Send _pg150
        json.put("_pg150", JSONObject.wrap(${tickdata_name}._pg150));
        // Send _pg167_e2
        json.put("_pg167_e2", JSONObject.wrap(${tickdata_name}._pg167_e2));
        // Send _pg17
        json.put("_pg17", JSONObject.wrap(${tickdata_name}._pg17));
        // Send _pg175
        json.put("_pg175", JSONObject.wrap(${tickdata_name}._pg175));
        // Send _pg176
        json.put("_pg176", JSONObject.wrap(${tickdata_name}._pg176));
        // Send _pg177
        json.put("_pg177", JSONObject.wrap(${tickdata_name}._pg177));
        // Send _pg3
        json.put("_pg3", JSONObject.wrap(${tickdata_name}._pg3));
        // Send _pg31
        json.put("_pg31", JSONObject.wrap(${tickdata_name}._pg31));
        // Send _pg37
        json.put("_pg37", JSONObject.wrap(${tickdata_name}._pg37));
        // Send _pg40
        json.put("_pg40", JSONObject.wrap(${tickdata_name}._pg40));
        // Send _pg44_e2
        json.put("_pg44_e2", JSONObject.wrap(${tickdata_name}._pg44_e2));
        // Send _pg45
        json.put("_pg45", JSONObject.wrap(${tickdata_name}._pg45));
        // Send _pg54
        json.put("_pg54", JSONObject.wrap(${tickdata_name}._pg54));
        // Send _pg68
        json.put("_pg68", JSONObject.wrap(${tickdata_name}._pg68));
        // Send _pg73
        json.put("_pg73", JSONObject.wrap(${tickdata_name}._pg73));
        // Send _pg78
        json.put("_pg78", JSONObject.wrap(${tickdata_name}._pg78));
        // Send _pg79
        json.put("_pg79", JSONObject.wrap(${tickdata_name}._pg79));
        // Send _pg8
        json.put("_pg8", JSONObject.wrap(${tickdata_name}._pg8));
        // Send _pg90
        json.put("_pg90", JSONObject.wrap(${tickdata_name}._pg90));
        // Send _pg93
        json.put("_pg93", JSONObject.wrap(${tickdata_name}._pg93));
        // Send _pg97
        json.put("_pg97", JSONObject.wrap(${tickdata_name}._pg97));
        // Send _pg98
        json.put("_pg98", JSONObject.wrap(${tickdata_name}._pg98));
        // Send _region0_null_x
        json.put("_region0_null_x", JSONObject.wrap(${tickdata_name}._region0_null_x));
        // Send _taken_transitions
        json.put("_taken_transitions", JSONObject.wrap(${tickdata_name}._taken_transitions));
        
        System.out.println(json.toString());
    }
</#macro>
