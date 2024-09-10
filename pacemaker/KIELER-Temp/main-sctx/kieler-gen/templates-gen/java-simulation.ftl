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
            // Receive _cg103
            if (json.has("_cg103")) {
                ${tickdata_name}._cg103 = json.getBoolean("_cg103");
            }
            // Receive _cg104
            if (json.has("_cg104")) {
                ${tickdata_name}._cg104 = json.getBoolean("_cg104");
            }
            // Receive _cg108
            if (json.has("_cg108")) {
                ${tickdata_name}._cg108 = json.getBoolean("_cg108");
            }
            // Receive _cg11
            if (json.has("_cg11")) {
                ${tickdata_name}._cg11 = json.getBoolean("_cg11");
            }
            // Receive _cg113
            if (json.has("_cg113")) {
                ${tickdata_name}._cg113 = json.getBoolean("_cg113");
            }
            // Receive _cg117
            if (json.has("_cg117")) {
                ${tickdata_name}._cg117 = json.getBoolean("_cg117");
            }
            // Receive _cg125
            if (json.has("_cg125")) {
                ${tickdata_name}._cg125 = json.getBoolean("_cg125");
            }
            // Receive _cg129
            if (json.has("_cg129")) {
                ${tickdata_name}._cg129 = json.getBoolean("_cg129");
            }
            // Receive _cg13
            if (json.has("_cg13")) {
                ${tickdata_name}._cg13 = json.getBoolean("_cg13");
            }
            // Receive _cg131
            if (json.has("_cg131")) {
                ${tickdata_name}._cg131 = json.getBoolean("_cg131");
            }
            // Receive _cg133
            if (json.has("_cg133")) {
                ${tickdata_name}._cg133 = json.getBoolean("_cg133");
            }
            // Receive _cg134
            if (json.has("_cg134")) {
                ${tickdata_name}._cg134 = json.getBoolean("_cg134");
            }
            // Receive _cg135
            if (json.has("_cg135")) {
                ${tickdata_name}._cg135 = json.getBoolean("_cg135");
            }
            // Receive _cg137
            if (json.has("_cg137")) {
                ${tickdata_name}._cg137 = json.getBoolean("_cg137");
            }
            // Receive _cg139
            if (json.has("_cg139")) {
                ${tickdata_name}._cg139 = json.getBoolean("_cg139");
            }
            // Receive _cg14
            if (json.has("_cg14")) {
                ${tickdata_name}._cg14 = json.getBoolean("_cg14");
            }
            // Receive _cg140
            if (json.has("_cg140")) {
                ${tickdata_name}._cg140 = json.getBoolean("_cg140");
            }
            // Receive _cg141
            if (json.has("_cg141")) {
                ${tickdata_name}._cg141 = json.getBoolean("_cg141");
            }
            // Receive _cg143
            if (json.has("_cg143")) {
                ${tickdata_name}._cg143 = json.getBoolean("_cg143");
            }
            // Receive _cg144
            if (json.has("_cg144")) {
                ${tickdata_name}._cg144 = json.getBoolean("_cg144");
            }
            // Receive _cg147
            if (json.has("_cg147")) {
                ${tickdata_name}._cg147 = json.getBoolean("_cg147");
            }
            // Receive _cg149
            if (json.has("_cg149")) {
                ${tickdata_name}._cg149 = json.getBoolean("_cg149");
            }
            // Receive _cg15
            if (json.has("_cg15")) {
                ${tickdata_name}._cg15 = json.getBoolean("_cg15");
            }
            // Receive _cg151
            if (json.has("_cg151")) {
                ${tickdata_name}._cg151 = json.getBoolean("_cg151");
            }
            // Receive _cg154
            if (json.has("_cg154")) {
                ${tickdata_name}._cg154 = json.getBoolean("_cg154");
            }
            // Receive _cg156
            if (json.has("_cg156")) {
                ${tickdata_name}._cg156 = json.getBoolean("_cg156");
            }
            // Receive _cg158
            if (json.has("_cg158")) {
                ${tickdata_name}._cg158 = json.getBoolean("_cg158");
            }
            // Receive _cg159
            if (json.has("_cg159")) {
                ${tickdata_name}._cg159 = json.getBoolean("_cg159");
            }
            // Receive _cg160
            if (json.has("_cg160")) {
                ${tickdata_name}._cg160 = json.getBoolean("_cg160");
            }
            // Receive _cg162
            if (json.has("_cg162")) {
                ${tickdata_name}._cg162 = json.getBoolean("_cg162");
            }
            // Receive _cg164
            if (json.has("_cg164")) {
                ${tickdata_name}._cg164 = json.getBoolean("_cg164");
            }
            // Receive _cg165
            if (json.has("_cg165")) {
                ${tickdata_name}._cg165 = json.getBoolean("_cg165");
            }
            // Receive _cg166
            if (json.has("_cg166")) {
                ${tickdata_name}._cg166 = json.getBoolean("_cg166");
            }
            // Receive _cg168
            if (json.has("_cg168")) {
                ${tickdata_name}._cg168 = json.getBoolean("_cg168");
            }
            // Receive _cg169
            if (json.has("_cg169")) {
                ${tickdata_name}._cg169 = json.getBoolean("_cg169");
            }
            // Receive _cg17
            if (json.has("_cg17")) {
                ${tickdata_name}._cg17 = json.getBoolean("_cg17");
            }
            // Receive _cg172
            if (json.has("_cg172")) {
                ${tickdata_name}._cg172 = json.getBoolean("_cg172");
            }
            // Receive _cg174
            if (json.has("_cg174")) {
                ${tickdata_name}._cg174 = json.getBoolean("_cg174");
            }
            // Receive _cg176
            if (json.has("_cg176")) {
                ${tickdata_name}._cg176 = json.getBoolean("_cg176");
            }
            // Receive _cg178
            if (json.has("_cg178")) {
                ${tickdata_name}._cg178 = json.getBoolean("_cg178");
            }
            // Receive _cg18
            if (json.has("_cg18")) {
                ${tickdata_name}._cg18 = json.getBoolean("_cg18");
            }
            // Receive _cg180
            if (json.has("_cg180")) {
                ${tickdata_name}._cg180 = json.getBoolean("_cg180");
            }
            // Receive _cg182
            if (json.has("_cg182")) {
                ${tickdata_name}._cg182 = json.getBoolean("_cg182");
            }
            // Receive _cg185
            if (json.has("_cg185")) {
                ${tickdata_name}._cg185 = json.getBoolean("_cg185");
            }
            // Receive _cg188
            if (json.has("_cg188")) {
                ${tickdata_name}._cg188 = json.getBoolean("_cg188");
            }
            // Receive _cg189
            if (json.has("_cg189")) {
                ${tickdata_name}._cg189 = json.getBoolean("_cg189");
            }
            // Receive _cg19
            if (json.has("_cg19")) {
                ${tickdata_name}._cg19 = json.getBoolean("_cg19");
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
            // Receive _cg25
            if (json.has("_cg25")) {
                ${tickdata_name}._cg25 = json.getBoolean("_cg25");
            }
            // Receive _cg26
            if (json.has("_cg26")) {
                ${tickdata_name}._cg26 = json.getBoolean("_cg26");
            }
            // Receive _cg28
            if (json.has("_cg28")) {
                ${tickdata_name}._cg28 = json.getBoolean("_cg28");
            }
            // Receive _cg29
            if (json.has("_cg29")) {
                ${tickdata_name}._cg29 = json.getBoolean("_cg29");
            }
            // Receive _cg32
            if (json.has("_cg32")) {
                ${tickdata_name}._cg32 = json.getBoolean("_cg32");
            }
            // Receive _cg34
            if (json.has("_cg34")) {
                ${tickdata_name}._cg34 = json.getBoolean("_cg34");
            }
            // Receive _cg36
            if (json.has("_cg36")) {
                ${tickdata_name}._cg36 = json.getBoolean("_cg36");
            }
            // Receive _cg38
            if (json.has("_cg38")) {
                ${tickdata_name}._cg38 = json.getBoolean("_cg38");
            }
            // Receive _cg4
            if (json.has("_cg4")) {
                ${tickdata_name}._cg4 = json.getBoolean("_cg4");
            }
            // Receive _cg40
            if (json.has("_cg40")) {
                ${tickdata_name}._cg40 = json.getBoolean("_cg40");
            }
            // Receive _cg41
            if (json.has("_cg41")) {
                ${tickdata_name}._cg41 = json.getBoolean("_cg41");
            }
            // Receive _cg44
            if (json.has("_cg44")) {
                ${tickdata_name}._cg44 = json.getBoolean("_cg44");
            }
            // Receive _cg45
            if (json.has("_cg45")) {
                ${tickdata_name}._cg45 = json.getBoolean("_cg45");
            }
            // Receive _cg48
            if (json.has("_cg48")) {
                ${tickdata_name}._cg48 = json.getBoolean("_cg48");
            }
            // Receive _cg49
            if (json.has("_cg49")) {
                ${tickdata_name}._cg49 = json.getBoolean("_cg49");
            }
            // Receive _cg51
            if (json.has("_cg51")) {
                ${tickdata_name}._cg51 = json.getBoolean("_cg51");
            }
            // Receive _cg54
            if (json.has("_cg54")) {
                ${tickdata_name}._cg54 = json.getBoolean("_cg54");
            }
            // Receive _cg57
            if (json.has("_cg57")) {
                ${tickdata_name}._cg57 = json.getBoolean("_cg57");
            }
            // Receive _cg61
            if (json.has("_cg61")) {
                ${tickdata_name}._cg61 = json.getBoolean("_cg61");
            }
            // Receive _cg62
            if (json.has("_cg62")) {
                ${tickdata_name}._cg62 = json.getBoolean("_cg62");
            }
            // Receive _cg64
            if (json.has("_cg64")) {
                ${tickdata_name}._cg64 = json.getBoolean("_cg64");
            }
            // Receive _cg66
            if (json.has("_cg66")) {
                ${tickdata_name}._cg66 = json.getBoolean("_cg66");
            }
            // Receive _cg67
            if (json.has("_cg67")) {
                ${tickdata_name}._cg67 = json.getBoolean("_cg67");
            }
            // Receive _cg68
            if (json.has("_cg68")) {
                ${tickdata_name}._cg68 = json.getBoolean("_cg68");
            }
            // Receive _cg70
            if (json.has("_cg70")) {
                ${tickdata_name}._cg70 = json.getBoolean("_cg70");
            }
            // Receive _cg71
            if (json.has("_cg71")) {
                ${tickdata_name}._cg71 = json.getBoolean("_cg71");
            }
            // Receive _cg74
            if (json.has("_cg74")) {
                ${tickdata_name}._cg74 = json.getBoolean("_cg74");
            }
            // Receive _cg76
            if (json.has("_cg76")) {
                ${tickdata_name}._cg76 = json.getBoolean("_cg76");
            }
            // Receive _cg78
            if (json.has("_cg78")) {
                ${tickdata_name}._cg78 = json.getBoolean("_cg78");
            }
            // Receive _cg79
            if (json.has("_cg79")) {
                ${tickdata_name}._cg79 = json.getBoolean("_cg79");
            }
            // Receive _cg8
            if (json.has("_cg8")) {
                ${tickdata_name}._cg8 = json.getBoolean("_cg8");
            }
            // Receive _cg84
            if (json.has("_cg84")) {
                ${tickdata_name}._cg84 = json.getBoolean("_cg84");
            }
            // Receive _cg86
            if (json.has("_cg86")) {
                ${tickdata_name}._cg86 = json.getBoolean("_cg86");
            }
            // Receive _cg89
            if (json.has("_cg89")) {
                ${tickdata_name}._cg89 = json.getBoolean("_cg89");
            }
            // Receive _cg9
            if (json.has("_cg9")) {
                ${tickdata_name}._cg9 = json.getBoolean("_cg9");
            }
            // Receive _cg94
            if (json.has("_cg94")) {
                ${tickdata_name}._cg94 = json.getBoolean("_cg94");
            }
            // Receive _cg98
            if (json.has("_cg98")) {
                ${tickdata_name}._cg98 = json.getBoolean("_cg98");
            }
            // Receive _g10
            if (json.has("_g10")) {
                ${tickdata_name}._g10 = json.getBoolean("_g10");
            }
            // Receive _g100
            if (json.has("_g100")) {
                ${tickdata_name}._g100 = json.getBoolean("_g100");
            }
            // Receive _g101
            if (json.has("_g101")) {
                ${tickdata_name}._g101 = json.getBoolean("_g101");
            }
            // Receive _g11
            if (json.has("_g11")) {
                ${tickdata_name}._g11 = json.getBoolean("_g11");
            }
            // Receive _g112
            if (json.has("_g112")) {
                ${tickdata_name}._g112 = json.getBoolean("_g112");
            }
            // Receive _g119
            if (json.has("_g119")) {
                ${tickdata_name}._g119 = json.getBoolean("_g119");
            }
            // Receive _g13
            if (json.has("_g13")) {
                ${tickdata_name}._g13 = json.getBoolean("_g13");
            }
            // Receive _g14
            if (json.has("_g14")) {
                ${tickdata_name}._g14 = json.getBoolean("_g14");
            }
            // Receive _g16
            if (json.has("_g16")) {
                ${tickdata_name}._g16 = json.getBoolean("_g16");
            }
            // Receive _g17
            if (json.has("_g17")) {
                ${tickdata_name}._g17 = json.getBoolean("_g17");
            }
            // Receive _g199
            if (json.has("_g199")) {
                ${tickdata_name}._g199 = json.getBoolean("_g199");
            }
            // Receive _g207
            if (json.has("_g207")) {
                ${tickdata_name}._g207 = json.getBoolean("_g207");
            }
            // Receive _g21
            if (json.has("_g21")) {
                ${tickdata_name}._g21 = json.getBoolean("_g21");
            }
            // Receive _g211
            if (json.has("_g211")) {
                ${tickdata_name}._g211 = json.getBoolean("_g211");
            }
            // Receive _g215
            if (json.has("_g215")) {
                ${tickdata_name}._g215 = json.getBoolean("_g215");
            }
            // Receive _g22
            if (json.has("_g22")) {
                ${tickdata_name}._g22 = json.getBoolean("_g22");
            }
            // Receive _g24
            if (json.has("_g24")) {
                ${tickdata_name}._g24 = json.getBoolean("_g24");
            }
            // Receive _g25
            if (json.has("_g25")) {
                ${tickdata_name}._g25 = json.getBoolean("_g25");
            }
            // Receive _g27
            if (json.has("_g27")) {
                ${tickdata_name}._g27 = json.getBoolean("_g27");
            }
            // Receive _g28
            if (json.has("_g28")) {
                ${tickdata_name}._g28 = json.getBoolean("_g28");
            }
            // Receive _g3
            if (json.has("_g3")) {
                ${tickdata_name}._g3 = json.getBoolean("_g3");
            }
            // Receive _g4
            if (json.has("_g4")) {
                ${tickdata_name}._g4 = json.getBoolean("_g4");
            }
            // Receive _g46
            if (json.has("_g46")) {
                ${tickdata_name}._g46 = json.getBoolean("_g46");
            }
            // Receive _g47
            if (json.has("_g47")) {
                ${tickdata_name}._g47 = json.getBoolean("_g47");
            }
            // Receive _g48
            if (json.has("_g48")) {
                ${tickdata_name}._g48 = json.getBoolean("_g48");
            }
            // Receive _g49
            if (json.has("_g49")) {
                ${tickdata_name}._g49 = json.getBoolean("_g49");
            }
            // Receive _g5
            if (json.has("_g5")) {
                ${tickdata_name}._g5 = json.getBoolean("_g5");
            }
            // Receive _g50
            if (json.has("_g50")) {
                ${tickdata_name}._g50 = json.getBoolean("_g50");
            }
            // Receive _g50_e1
            if (json.has("_g50_e1")) {
                ${tickdata_name}._g50_e1 = json.getBoolean("_g50_e1");
            }
            // Receive _g51
            if (json.has("_g51")) {
                ${tickdata_name}._g51 = json.getBoolean("_g51");
            }
            // Receive _g52
            if (json.has("_g52")) {
                ${tickdata_name}._g52 = json.getBoolean("_g52");
            }
            // Receive _g53
            if (json.has("_g53")) {
                ${tickdata_name}._g53 = json.getBoolean("_g53");
            }
            // Receive _g56
            if (json.has("_g56")) {
                ${tickdata_name}._g56 = json.getBoolean("_g56");
            }
            // Receive _g57
            if (json.has("_g57")) {
                ${tickdata_name}._g57 = json.getBoolean("_g57");
            }
            // Receive _g58
            if (json.has("_g58")) {
                ${tickdata_name}._g58 = json.getBoolean("_g58");
            }
            // Receive _g58_e2
            if (json.has("_g58_e2")) {
                ${tickdata_name}._g58_e2 = json.getBoolean("_g58_e2");
            }
            // Receive _g59
            if (json.has("_g59")) {
                ${tickdata_name}._g59 = json.getBoolean("_g59");
            }
            // Receive _g6
            if (json.has("_g6")) {
                ${tickdata_name}._g6 = json.getBoolean("_g6");
            }
            // Receive _g62
            if (json.has("_g62")) {
                ${tickdata_name}._g62 = json.getBoolean("_g62");
            }
            // Receive _g64
            if (json.has("_g64")) {
                ${tickdata_name}._g64 = json.getBoolean("_g64");
            }
            // Receive _g65
            if (json.has("_g65")) {
                ${tickdata_name}._g65 = json.getBoolean("_g65");
            }
            // Receive _g65_e1
            if (json.has("_g65_e1")) {
                ${tickdata_name}._g65_e1 = json.getBoolean("_g65_e1");
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
            // Receive _g70
            if (json.has("_g70")) {
                ${tickdata_name}._g70 = json.getBoolean("_g70");
            }
            // Receive _g74
            if (json.has("_g74")) {
                ${tickdata_name}._g74 = json.getBoolean("_g74");
            }
            // Receive _g75
            if (json.has("_g75")) {
                ${tickdata_name}._g75 = json.getBoolean("_g75");
            }
            // Receive _g75_e2
            if (json.has("_g75_e2")) {
                ${tickdata_name}._g75_e2 = json.getBoolean("_g75_e2");
            }
            // Receive _g76
            if (json.has("_g76")) {
                ${tickdata_name}._g76 = json.getBoolean("_g76");
            }
            // Receive _g77
            if (json.has("_g77")) {
                ${tickdata_name}._g77 = json.getBoolean("_g77");
            }
            // Receive _g78
            if (json.has("_g78")) {
                ${tickdata_name}._g78 = json.getBoolean("_g78");
            }
            // Receive _g79
            if (json.has("_g79")) {
                ${tickdata_name}._g79 = json.getBoolean("_g79");
            }
            // Receive _g80
            if (json.has("_g80")) {
                ${tickdata_name}._g80 = json.getBoolean("_g80");
            }
            // Receive _g81
            if (json.has("_g81")) {
                ${tickdata_name}._g81 = json.getBoolean("_g81");
            }
            // Receive _g82
            if (json.has("_g82")) {
                ${tickdata_name}._g82 = json.getBoolean("_g82");
            }
            // Receive _g89
            if (json.has("_g89")) {
                ${tickdata_name}._g89 = json.getBoolean("_g89");
            }
            // Receive _g90
            if (json.has("_g90")) {
                ${tickdata_name}._g90 = json.getBoolean("_g90");
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
            // Receive _pacemaker_local__Atrig8
            if (json.has("_pacemaker_local__Atrig8")) {
                ${tickdata_name}._pacemaker_local__Atrig8 = json.getBoolean("_pacemaker_local__Atrig8");
            }
            // Receive _pacemaker_local__CFSterm
            if (json.has("_pacemaker_local__CFSterm")) {
                ${tickdata_name}._pacemaker_local__CFSterm = json.getBoolean("_pacemaker_local__CFSterm");
            }
            // Receive _pacemaker_local__CFSterm1
            if (json.has("_pacemaker_local__CFSterm1")) {
                ${tickdata_name}._pacemaker_local__CFSterm1 = json.getBoolean("_pacemaker_local__CFSterm1");
            }
            // Receive _pacemaker_local_x
            if (json.has("_pacemaker_local_x")) {
                ${tickdata_name}._pacemaker_local_x = json.getDouble("_pacemaker_local_x");
            }
            // Receive _pacemaker_local_x1
            if (json.has("_pacemaker_local_x1")) {
                ${tickdata_name}._pacemaker_local_x1 = json.getDouble("_pacemaker_local_x1");
            }
            // Receive _pg10
            if (json.has("_pg10")) {
                ${tickdata_name}._pg10 = json.getBoolean("_pg10");
            }
            // Receive _pg100
            if (json.has("_pg100")) {
                ${tickdata_name}._pg100 = json.getBoolean("_pg100");
            }
            // Receive _pg112
            if (json.has("_pg112")) {
                ${tickdata_name}._pg112 = json.getBoolean("_pg112");
            }
            // Receive _pg119
            if (json.has("_pg119")) {
                ${tickdata_name}._pg119 = json.getBoolean("_pg119");
            }
            // Receive _pg16
            if (json.has("_pg16")) {
                ${tickdata_name}._pg16 = json.getBoolean("_pg16");
            }
            // Receive _pg21
            if (json.has("_pg21")) {
                ${tickdata_name}._pg21 = json.getBoolean("_pg21");
            }
            // Receive _pg211
            if (json.has("_pg211")) {
                ${tickdata_name}._pg211 = json.getBoolean("_pg211");
            }
            // Receive _pg27
            if (json.has("_pg27")) {
                ${tickdata_name}._pg27 = json.getBoolean("_pg27");
            }
            // Receive _pg3
            if (json.has("_pg3")) {
                ${tickdata_name}._pg3 = json.getBoolean("_pg3");
            }
            // Receive _pg46
            if (json.has("_pg46")) {
                ${tickdata_name}._pg46 = json.getBoolean("_pg46");
            }
            // Receive _pg52
            if (json.has("_pg52")) {
                ${tickdata_name}._pg52 = json.getBoolean("_pg52");
            }
            // Receive _pg56
            if (json.has("_pg56")) {
                ${tickdata_name}._pg56 = json.getBoolean("_pg56");
            }
            // Receive _pg58
            if (json.has("_pg58")) {
                ${tickdata_name}._pg58 = json.getBoolean("_pg58");
            }
            // Receive _pg59
            if (json.has("_pg59")) {
                ${tickdata_name}._pg59 = json.getBoolean("_pg59");
            }
            // Receive _pg6
            if (json.has("_pg6")) {
                ${tickdata_name}._pg6 = json.getBoolean("_pg6");
            }
            // Receive _pg68
            if (json.has("_pg68")) {
                ${tickdata_name}._pg68 = json.getBoolean("_pg68");
            }
            // Receive _pg78
            if (json.has("_pg78")) {
                ${tickdata_name}._pg78 = json.getBoolean("_pg78");
            }
            // Receive _pg89
            if (json.has("_pg89")) {
                ${tickdata_name}._pg89 = json.getBoolean("_pg89");
            }
            // Receive _pre_VP
            if (json.has("_pre_VP")) {
                ${tickdata_name}._pre_VP = json.getBoolean("_pre_VP");
            }
            // Receive _pre_VS
            if (json.has("_pre_VS")) {
                ${tickdata_name}._pre_VS = json.getBoolean("_pre_VS");
            }
            // Receive _reg_VP
            if (json.has("_reg_VP")) {
                ${tickdata_name}._reg_VP = json.getBoolean("_reg_VP");
            }
            // Receive _reg_VS
            if (json.has("_reg_VS")) {
                ${tickdata_name}._reg_VS = json.getBoolean("_reg_VS");
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
        // Send _cg103
        json.put("_cg103", JSONObject.wrap(${tickdata_name}._cg103));
        // Send _cg104
        json.put("_cg104", JSONObject.wrap(${tickdata_name}._cg104));
        // Send _cg108
        json.put("_cg108", JSONObject.wrap(${tickdata_name}._cg108));
        // Send _cg11
        json.put("_cg11", JSONObject.wrap(${tickdata_name}._cg11));
        // Send _cg113
        json.put("_cg113", JSONObject.wrap(${tickdata_name}._cg113));
        // Send _cg117
        json.put("_cg117", JSONObject.wrap(${tickdata_name}._cg117));
        // Send _cg125
        json.put("_cg125", JSONObject.wrap(${tickdata_name}._cg125));
        // Send _cg129
        json.put("_cg129", JSONObject.wrap(${tickdata_name}._cg129));
        // Send _cg13
        json.put("_cg13", JSONObject.wrap(${tickdata_name}._cg13));
        // Send _cg131
        json.put("_cg131", JSONObject.wrap(${tickdata_name}._cg131));
        // Send _cg133
        json.put("_cg133", JSONObject.wrap(${tickdata_name}._cg133));
        // Send _cg134
        json.put("_cg134", JSONObject.wrap(${tickdata_name}._cg134));
        // Send _cg135
        json.put("_cg135", JSONObject.wrap(${tickdata_name}._cg135));
        // Send _cg137
        json.put("_cg137", JSONObject.wrap(${tickdata_name}._cg137));
        // Send _cg139
        json.put("_cg139", JSONObject.wrap(${tickdata_name}._cg139));
        // Send _cg14
        json.put("_cg14", JSONObject.wrap(${tickdata_name}._cg14));
        // Send _cg140
        json.put("_cg140", JSONObject.wrap(${tickdata_name}._cg140));
        // Send _cg141
        json.put("_cg141", JSONObject.wrap(${tickdata_name}._cg141));
        // Send _cg143
        json.put("_cg143", JSONObject.wrap(${tickdata_name}._cg143));
        // Send _cg144
        json.put("_cg144", JSONObject.wrap(${tickdata_name}._cg144));
        // Send _cg147
        json.put("_cg147", JSONObject.wrap(${tickdata_name}._cg147));
        // Send _cg149
        json.put("_cg149", JSONObject.wrap(${tickdata_name}._cg149));
        // Send _cg15
        json.put("_cg15", JSONObject.wrap(${tickdata_name}._cg15));
        // Send _cg151
        json.put("_cg151", JSONObject.wrap(${tickdata_name}._cg151));
        // Send _cg154
        json.put("_cg154", JSONObject.wrap(${tickdata_name}._cg154));
        // Send _cg156
        json.put("_cg156", JSONObject.wrap(${tickdata_name}._cg156));
        // Send _cg158
        json.put("_cg158", JSONObject.wrap(${tickdata_name}._cg158));
        // Send _cg159
        json.put("_cg159", JSONObject.wrap(${tickdata_name}._cg159));
        // Send _cg160
        json.put("_cg160", JSONObject.wrap(${tickdata_name}._cg160));
        // Send _cg162
        json.put("_cg162", JSONObject.wrap(${tickdata_name}._cg162));
        // Send _cg164
        json.put("_cg164", JSONObject.wrap(${tickdata_name}._cg164));
        // Send _cg165
        json.put("_cg165", JSONObject.wrap(${tickdata_name}._cg165));
        // Send _cg166
        json.put("_cg166", JSONObject.wrap(${tickdata_name}._cg166));
        // Send _cg168
        json.put("_cg168", JSONObject.wrap(${tickdata_name}._cg168));
        // Send _cg169
        json.put("_cg169", JSONObject.wrap(${tickdata_name}._cg169));
        // Send _cg17
        json.put("_cg17", JSONObject.wrap(${tickdata_name}._cg17));
        // Send _cg172
        json.put("_cg172", JSONObject.wrap(${tickdata_name}._cg172));
        // Send _cg174
        json.put("_cg174", JSONObject.wrap(${tickdata_name}._cg174));
        // Send _cg176
        json.put("_cg176", JSONObject.wrap(${tickdata_name}._cg176));
        // Send _cg178
        json.put("_cg178", JSONObject.wrap(${tickdata_name}._cg178));
        // Send _cg18
        json.put("_cg18", JSONObject.wrap(${tickdata_name}._cg18));
        // Send _cg180
        json.put("_cg180", JSONObject.wrap(${tickdata_name}._cg180));
        // Send _cg182
        json.put("_cg182", JSONObject.wrap(${tickdata_name}._cg182));
        // Send _cg185
        json.put("_cg185", JSONObject.wrap(${tickdata_name}._cg185));
        // Send _cg188
        json.put("_cg188", JSONObject.wrap(${tickdata_name}._cg188));
        // Send _cg189
        json.put("_cg189", JSONObject.wrap(${tickdata_name}._cg189));
        // Send _cg19
        json.put("_cg19", JSONObject.wrap(${tickdata_name}._cg19));
        // Send _cg20
        json.put("_cg20", JSONObject.wrap(${tickdata_name}._cg20));
        // Send _cg22
        json.put("_cg22", JSONObject.wrap(${tickdata_name}._cg22));
        // Send _cg24
        json.put("_cg24", JSONObject.wrap(${tickdata_name}._cg24));
        // Send _cg25
        json.put("_cg25", JSONObject.wrap(${tickdata_name}._cg25));
        // Send _cg26
        json.put("_cg26", JSONObject.wrap(${tickdata_name}._cg26));
        // Send _cg28
        json.put("_cg28", JSONObject.wrap(${tickdata_name}._cg28));
        // Send _cg29
        json.put("_cg29", JSONObject.wrap(${tickdata_name}._cg29));
        // Send _cg32
        json.put("_cg32", JSONObject.wrap(${tickdata_name}._cg32));
        // Send _cg34
        json.put("_cg34", JSONObject.wrap(${tickdata_name}._cg34));
        // Send _cg36
        json.put("_cg36", JSONObject.wrap(${tickdata_name}._cg36));
        // Send _cg38
        json.put("_cg38", JSONObject.wrap(${tickdata_name}._cg38));
        // Send _cg4
        json.put("_cg4", JSONObject.wrap(${tickdata_name}._cg4));
        // Send _cg40
        json.put("_cg40", JSONObject.wrap(${tickdata_name}._cg40));
        // Send _cg41
        json.put("_cg41", JSONObject.wrap(${tickdata_name}._cg41));
        // Send _cg44
        json.put("_cg44", JSONObject.wrap(${tickdata_name}._cg44));
        // Send _cg45
        json.put("_cg45", JSONObject.wrap(${tickdata_name}._cg45));
        // Send _cg48
        json.put("_cg48", JSONObject.wrap(${tickdata_name}._cg48));
        // Send _cg49
        json.put("_cg49", JSONObject.wrap(${tickdata_name}._cg49));
        // Send _cg51
        json.put("_cg51", JSONObject.wrap(${tickdata_name}._cg51));
        // Send _cg54
        json.put("_cg54", JSONObject.wrap(${tickdata_name}._cg54));
        // Send _cg57
        json.put("_cg57", JSONObject.wrap(${tickdata_name}._cg57));
        // Send _cg61
        json.put("_cg61", JSONObject.wrap(${tickdata_name}._cg61));
        // Send _cg62
        json.put("_cg62", JSONObject.wrap(${tickdata_name}._cg62));
        // Send _cg64
        json.put("_cg64", JSONObject.wrap(${tickdata_name}._cg64));
        // Send _cg66
        json.put("_cg66", JSONObject.wrap(${tickdata_name}._cg66));
        // Send _cg67
        json.put("_cg67", JSONObject.wrap(${tickdata_name}._cg67));
        // Send _cg68
        json.put("_cg68", JSONObject.wrap(${tickdata_name}._cg68));
        // Send _cg70
        json.put("_cg70", JSONObject.wrap(${tickdata_name}._cg70));
        // Send _cg71
        json.put("_cg71", JSONObject.wrap(${tickdata_name}._cg71));
        // Send _cg74
        json.put("_cg74", JSONObject.wrap(${tickdata_name}._cg74));
        // Send _cg76
        json.put("_cg76", JSONObject.wrap(${tickdata_name}._cg76));
        // Send _cg78
        json.put("_cg78", JSONObject.wrap(${tickdata_name}._cg78));
        // Send _cg79
        json.put("_cg79", JSONObject.wrap(${tickdata_name}._cg79));
        // Send _cg8
        json.put("_cg8", JSONObject.wrap(${tickdata_name}._cg8));
        // Send _cg84
        json.put("_cg84", JSONObject.wrap(${tickdata_name}._cg84));
        // Send _cg86
        json.put("_cg86", JSONObject.wrap(${tickdata_name}._cg86));
        // Send _cg89
        json.put("_cg89", JSONObject.wrap(${tickdata_name}._cg89));
        // Send _cg9
        json.put("_cg9", JSONObject.wrap(${tickdata_name}._cg9));
        // Send _cg94
        json.put("_cg94", JSONObject.wrap(${tickdata_name}._cg94));
        // Send _cg98
        json.put("_cg98", JSONObject.wrap(${tickdata_name}._cg98));
        // Send _g10
        json.put("_g10", JSONObject.wrap(${tickdata_name}._g10));
        // Send _g100
        json.put("_g100", JSONObject.wrap(${tickdata_name}._g100));
        // Send _g101
        json.put("_g101", JSONObject.wrap(${tickdata_name}._g101));
        // Send _g11
        json.put("_g11", JSONObject.wrap(${tickdata_name}._g11));
        // Send _g112
        json.put("_g112", JSONObject.wrap(${tickdata_name}._g112));
        // Send _g119
        json.put("_g119", JSONObject.wrap(${tickdata_name}._g119));
        // Send _g13
        json.put("_g13", JSONObject.wrap(${tickdata_name}._g13));
        // Send _g14
        json.put("_g14", JSONObject.wrap(${tickdata_name}._g14));
        // Send _g16
        json.put("_g16", JSONObject.wrap(${tickdata_name}._g16));
        // Send _g17
        json.put("_g17", JSONObject.wrap(${tickdata_name}._g17));
        // Send _g199
        json.put("_g199", JSONObject.wrap(${tickdata_name}._g199));
        // Send _g207
        json.put("_g207", JSONObject.wrap(${tickdata_name}._g207));
        // Send _g21
        json.put("_g21", JSONObject.wrap(${tickdata_name}._g21));
        // Send _g211
        json.put("_g211", JSONObject.wrap(${tickdata_name}._g211));
        // Send _g215
        json.put("_g215", JSONObject.wrap(${tickdata_name}._g215));
        // Send _g22
        json.put("_g22", JSONObject.wrap(${tickdata_name}._g22));
        // Send _g24
        json.put("_g24", JSONObject.wrap(${tickdata_name}._g24));
        // Send _g25
        json.put("_g25", JSONObject.wrap(${tickdata_name}._g25));
        // Send _g27
        json.put("_g27", JSONObject.wrap(${tickdata_name}._g27));
        // Send _g28
        json.put("_g28", JSONObject.wrap(${tickdata_name}._g28));
        // Send _g3
        json.put("_g3", JSONObject.wrap(${tickdata_name}._g3));
        // Send _g4
        json.put("_g4", JSONObject.wrap(${tickdata_name}._g4));
        // Send _g46
        json.put("_g46", JSONObject.wrap(${tickdata_name}._g46));
        // Send _g47
        json.put("_g47", JSONObject.wrap(${tickdata_name}._g47));
        // Send _g48
        json.put("_g48", JSONObject.wrap(${tickdata_name}._g48));
        // Send _g49
        json.put("_g49", JSONObject.wrap(${tickdata_name}._g49));
        // Send _g5
        json.put("_g5", JSONObject.wrap(${tickdata_name}._g5));
        // Send _g50
        json.put("_g50", JSONObject.wrap(${tickdata_name}._g50));
        // Send _g50_e1
        json.put("_g50_e1", JSONObject.wrap(${tickdata_name}._g50_e1));
        // Send _g51
        json.put("_g51", JSONObject.wrap(${tickdata_name}._g51));
        // Send _g52
        json.put("_g52", JSONObject.wrap(${tickdata_name}._g52));
        // Send _g53
        json.put("_g53", JSONObject.wrap(${tickdata_name}._g53));
        // Send _g56
        json.put("_g56", JSONObject.wrap(${tickdata_name}._g56));
        // Send _g57
        json.put("_g57", JSONObject.wrap(${tickdata_name}._g57));
        // Send _g58
        json.put("_g58", JSONObject.wrap(${tickdata_name}._g58));
        // Send _g58_e2
        json.put("_g58_e2", JSONObject.wrap(${tickdata_name}._g58_e2));
        // Send _g59
        json.put("_g59", JSONObject.wrap(${tickdata_name}._g59));
        // Send _g6
        json.put("_g6", JSONObject.wrap(${tickdata_name}._g6));
        // Send _g62
        json.put("_g62", JSONObject.wrap(${tickdata_name}._g62));
        // Send _g64
        json.put("_g64", JSONObject.wrap(${tickdata_name}._g64));
        // Send _g65
        json.put("_g65", JSONObject.wrap(${tickdata_name}._g65));
        // Send _g65_e1
        json.put("_g65_e1", JSONObject.wrap(${tickdata_name}._g65_e1));
        // Send _g66
        json.put("_g66", JSONObject.wrap(${tickdata_name}._g66));
        // Send _g67
        json.put("_g67", JSONObject.wrap(${tickdata_name}._g67));
        // Send _g68
        json.put("_g68", JSONObject.wrap(${tickdata_name}._g68));
        // Send _g70
        json.put("_g70", JSONObject.wrap(${tickdata_name}._g70));
        // Send _g74
        json.put("_g74", JSONObject.wrap(${tickdata_name}._g74));
        // Send _g75
        json.put("_g75", JSONObject.wrap(${tickdata_name}._g75));
        // Send _g75_e2
        json.put("_g75_e2", JSONObject.wrap(${tickdata_name}._g75_e2));
        // Send _g76
        json.put("_g76", JSONObject.wrap(${tickdata_name}._g76));
        // Send _g77
        json.put("_g77", JSONObject.wrap(${tickdata_name}._g77));
        // Send _g78
        json.put("_g78", JSONObject.wrap(${tickdata_name}._g78));
        // Send _g79
        json.put("_g79", JSONObject.wrap(${tickdata_name}._g79));
        // Send _g80
        json.put("_g80", JSONObject.wrap(${tickdata_name}._g80));
        // Send _g81
        json.put("_g81", JSONObject.wrap(${tickdata_name}._g81));
        // Send _g82
        json.put("_g82", JSONObject.wrap(${tickdata_name}._g82));
        // Send _g89
        json.put("_g89", JSONObject.wrap(${tickdata_name}._g89));
        // Send _g90
        json.put("_g90", JSONObject.wrap(${tickdata_name}._g90));
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
        // Send _pacemaker_local__Atrig8
        json.put("_pacemaker_local__Atrig8", JSONObject.wrap(${tickdata_name}._pacemaker_local__Atrig8));
        // Send _pacemaker_local__CFSterm
        json.put("_pacemaker_local__CFSterm", JSONObject.wrap(${tickdata_name}._pacemaker_local__CFSterm));
        // Send _pacemaker_local__CFSterm1
        json.put("_pacemaker_local__CFSterm1", JSONObject.wrap(${tickdata_name}._pacemaker_local__CFSterm1));
        // Send _pacemaker_local_x
        json.put("_pacemaker_local_x", JSONObject.wrap(${tickdata_name}._pacemaker_local_x));
        // Send _pacemaker_local_x1
        json.put("_pacemaker_local_x1", JSONObject.wrap(${tickdata_name}._pacemaker_local_x1));
        // Send _pg10
        json.put("_pg10", JSONObject.wrap(${tickdata_name}._pg10));
        // Send _pg100
        json.put("_pg100", JSONObject.wrap(${tickdata_name}._pg100));
        // Send _pg112
        json.put("_pg112", JSONObject.wrap(${tickdata_name}._pg112));
        // Send _pg119
        json.put("_pg119", JSONObject.wrap(${tickdata_name}._pg119));
        // Send _pg16
        json.put("_pg16", JSONObject.wrap(${tickdata_name}._pg16));
        // Send _pg21
        json.put("_pg21", JSONObject.wrap(${tickdata_name}._pg21));
        // Send _pg211
        json.put("_pg211", JSONObject.wrap(${tickdata_name}._pg211));
        // Send _pg27
        json.put("_pg27", JSONObject.wrap(${tickdata_name}._pg27));
        // Send _pg3
        json.put("_pg3", JSONObject.wrap(${tickdata_name}._pg3));
        // Send _pg46
        json.put("_pg46", JSONObject.wrap(${tickdata_name}._pg46));
        // Send _pg52
        json.put("_pg52", JSONObject.wrap(${tickdata_name}._pg52));
        // Send _pg56
        json.put("_pg56", JSONObject.wrap(${tickdata_name}._pg56));
        // Send _pg58
        json.put("_pg58", JSONObject.wrap(${tickdata_name}._pg58));
        // Send _pg59
        json.put("_pg59", JSONObject.wrap(${tickdata_name}._pg59));
        // Send _pg6
        json.put("_pg6", JSONObject.wrap(${tickdata_name}._pg6));
        // Send _pg68
        json.put("_pg68", JSONObject.wrap(${tickdata_name}._pg68));
        // Send _pg78
        json.put("_pg78", JSONObject.wrap(${tickdata_name}._pg78));
        // Send _pg89
        json.put("_pg89", JSONObject.wrap(${tickdata_name}._pg89));
        // Send _pre_VP
        json.put("_pre_VP", JSONObject.wrap(${tickdata_name}._pre_VP));
        // Send _pre_VS
        json.put("_pre_VS", JSONObject.wrap(${tickdata_name}._pre_VS));
        // Send _reg_VP
        json.put("_reg_VP", JSONObject.wrap(${tickdata_name}._reg_VP));
        // Send _reg_VS
        json.put("_reg_VS", JSONObject.wrap(${tickdata_name}._reg_VS));
        // Send _region0_null_x
        json.put("_region0_null_x", JSONObject.wrap(${tickdata_name}._region0_null_x));
        // Send _taken_transitions
        json.put("_taken_transitions", JSONObject.wrap(${tickdata_name}._taken_transitions));
        
        System.out.println(json.toString());
    }
</#macro>
