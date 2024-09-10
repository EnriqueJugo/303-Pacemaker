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
            // Receive _g101
            if (json.has("_g101")) {
                ${tickdata_name}._g101 = json.getBoolean("_g101");
            }
            // Receive _g103
            if (json.has("_g103")) {
                ${tickdata_name}._g103 = json.getBoolean("_g103");
            }
            // Receive _g104
            if (json.has("_g104")) {
                ${tickdata_name}._g104 = json.getBoolean("_g104");
            }
            // Receive _g105
            if (json.has("_g105")) {
                ${tickdata_name}._g105 = json.getBoolean("_g105");
            }
            // Receive _g105_e2
            if (json.has("_g105_e2")) {
                ${tickdata_name}._g105_e2 = json.getBoolean("_g105_e2");
            }
            // Receive _g106
            if (json.has("_g106")) {
                ${tickdata_name}._g106 = json.getBoolean("_g106");
            }
            // Receive _g107
            if (json.has("_g107")) {
                ${tickdata_name}._g107 = json.getBoolean("_g107");
            }
            // Receive _g108
            if (json.has("_g108")) {
                ${tickdata_name}._g108 = json.getBoolean("_g108");
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
            // Receive _g114_e3
            if (json.has("_g114_e3")) {
                ${tickdata_name}._g114_e3 = json.getBoolean("_g114_e3");
            }
            // Receive _g115
            if (json.has("_g115")) {
                ${tickdata_name}._g115 = json.getBoolean("_g115");
            }
            // Receive _g115_e1
            if (json.has("_g115_e1")) {
                ${tickdata_name}._g115_e1 = json.getBoolean("_g115_e1");
            }
            // Receive _g117
            if (json.has("_g117")) {
                ${tickdata_name}._g117 = json.getBoolean("_g117");
            }
            // Receive _g118
            if (json.has("_g118")) {
                ${tickdata_name}._g118 = json.getBoolean("_g118");
            }
            // Receive _g118_e2
            if (json.has("_g118_e2")) {
                ${tickdata_name}._g118_e2 = json.getBoolean("_g118_e2");
            }
            // Receive _g12
            if (json.has("_g12")) {
                ${tickdata_name}._g12 = json.getBoolean("_g12");
            }
            // Receive _g120
            if (json.has("_g120")) {
                ${tickdata_name}._g120 = json.getBoolean("_g120");
            }
            // Receive _g121
            if (json.has("_g121")) {
                ${tickdata_name}._g121 = json.getBoolean("_g121");
            }
            // Receive _g125
            if (json.has("_g125")) {
                ${tickdata_name}._g125 = json.getBoolean("_g125");
            }
            // Receive _g126
            if (json.has("_g126")) {
                ${tickdata_name}._g126 = json.getBoolean("_g126");
            }
            // Receive _g12_e1
            if (json.has("_g12_e1")) {
                ${tickdata_name}._g12_e1 = json.getBoolean("_g12_e1");
            }
            // Receive _g13
            if (json.has("_g13")) {
                ${tickdata_name}._g13 = json.getBoolean("_g13");
            }
            // Receive _g131
            if (json.has("_g131")) {
                ${tickdata_name}._g131 = json.getBoolean("_g131");
            }
            // Receive _g132
            if (json.has("_g132")) {
                ${tickdata_name}._g132 = json.getBoolean("_g132");
            }
            // Receive _g132_e1
            if (json.has("_g132_e1")) {
                ${tickdata_name}._g132_e1 = json.getBoolean("_g132_e1");
            }
            // Receive _g133
            if (json.has("_g133")) {
                ${tickdata_name}._g133 = json.getBoolean("_g133");
            }
            // Receive _g135
            if (json.has("_g135")) {
                ${tickdata_name}._g135 = json.getBoolean("_g135");
            }
            // Receive _g137
            if (json.has("_g137")) {
                ${tickdata_name}._g137 = json.getBoolean("_g137");
            }
            // Receive _g138
            if (json.has("_g138")) {
                ${tickdata_name}._g138 = json.getBoolean("_g138");
            }
            // Receive _g138_e2
            if (json.has("_g138_e2")) {
                ${tickdata_name}._g138_e2 = json.getBoolean("_g138_e2");
            }
            // Receive _g139
            if (json.has("_g139")) {
                ${tickdata_name}._g139 = json.getBoolean("_g139");
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
            // Receive _g143
            if (json.has("_g143")) {
                ${tickdata_name}._g143 = json.getBoolean("_g143");
            }
            // Receive _g144
            if (json.has("_g144")) {
                ${tickdata_name}._g144 = json.getBoolean("_g144");
            }
            // Receive _g147
            if (json.has("_g147")) {
                ${tickdata_name}._g147 = json.getBoolean("_g147");
            }
            // Receive _g148
            if (json.has("_g148")) {
                ${tickdata_name}._g148 = json.getBoolean("_g148");
            }
            // Receive _g148_e3
            if (json.has("_g148_e3")) {
                ${tickdata_name}._g148_e3 = json.getBoolean("_g148_e3");
            }
            // Receive _g149
            if (json.has("_g149")) {
                ${tickdata_name}._g149 = json.getBoolean("_g149");
            }
            // Receive _g15
            if (json.has("_g15")) {
                ${tickdata_name}._g15 = json.getBoolean("_g15");
            }
            // Receive _g150
            if (json.has("_g150")) {
                ${tickdata_name}._g150 = json.getBoolean("_g150");
            }
            // Receive _g151
            if (json.has("_g151")) {
                ${tickdata_name}._g151 = json.getBoolean("_g151");
            }
            // Receive _g152
            if (json.has("_g152")) {
                ${tickdata_name}._g152 = json.getBoolean("_g152");
            }
            // Receive _g152_e1
            if (json.has("_g152_e1")) {
                ${tickdata_name}._g152_e1 = json.getBoolean("_g152_e1");
            }
            // Receive _g156
            if (json.has("_g156")) {
                ${tickdata_name}._g156 = json.getBoolean("_g156");
            }
            // Receive _g157
            if (json.has("_g157")) {
                ${tickdata_name}._g157 = json.getBoolean("_g157");
            }
            // Receive _g157_e1
            if (json.has("_g157_e1")) {
                ${tickdata_name}._g157_e1 = json.getBoolean("_g157_e1");
            }
            // Receive _g158
            if (json.has("_g158")) {
                ${tickdata_name}._g158 = json.getBoolean("_g158");
            }
            // Receive _g162
            if (json.has("_g162")) {
                ${tickdata_name}._g162 = json.getBoolean("_g162");
            }
            // Receive _g163
            if (json.has("_g163")) {
                ${tickdata_name}._g163 = json.getBoolean("_g163");
            }
            // Receive _g163_e2
            if (json.has("_g163_e2")) {
                ${tickdata_name}._g163_e2 = json.getBoolean("_g163_e2");
            }
            // Receive _g164
            if (json.has("_g164")) {
                ${tickdata_name}._g164 = json.getBoolean("_g164");
            }
            // Receive _g165
            if (json.has("_g165")) {
                ${tickdata_name}._g165 = json.getBoolean("_g165");
            }
            // Receive _g168
            if (json.has("_g168")) {
                ${tickdata_name}._g168 = json.getBoolean("_g168");
            }
            // Receive _g17
            if (json.has("_g17")) {
                ${tickdata_name}._g17 = json.getBoolean("_g17");
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
            // Receive _g18
            if (json.has("_g18")) {
                ${tickdata_name}._g18 = json.getBoolean("_g18");
            }
            // Receive _g180
            if (json.has("_g180")) {
                ${tickdata_name}._g180 = json.getBoolean("_g180");
            }
            // Receive _g181
            if (json.has("_g181")) {
                ${tickdata_name}._g181 = json.getBoolean("_g181");
            }
            // Receive _g181_e2
            if (json.has("_g181_e2")) {
                ${tickdata_name}._g181_e2 = json.getBoolean("_g181_e2");
            }
            // Receive _g182
            if (json.has("_g182")) {
                ${tickdata_name}._g182 = json.getBoolean("_g182");
            }
            // Receive _g185
            if (json.has("_g185")) {
                ${tickdata_name}._g185 = json.getBoolean("_g185");
            }
            // Receive _g186
            if (json.has("_g186")) {
                ${tickdata_name}._g186 = json.getBoolean("_g186");
            }
            // Receive _g187
            if (json.has("_g187")) {
                ${tickdata_name}._g187 = json.getBoolean("_g187");
            }
            // Receive _g187_e3
            if (json.has("_g187_e3")) {
                ${tickdata_name}._g187_e3 = json.getBoolean("_g187_e3");
            }
            // Receive _g189
            if (json.has("_g189")) {
                ${tickdata_name}._g189 = json.getBoolean("_g189");
            }
            // Receive _g190
            if (json.has("_g190")) {
                ${tickdata_name}._g190 = json.getBoolean("_g190");
            }
            // Receive _g191
            if (json.has("_g191")) {
                ${tickdata_name}._g191 = json.getBoolean("_g191");
            }
            // Receive _g20
            if (json.has("_g20")) {
                ${tickdata_name}._g20 = json.getBoolean("_g20");
            }
            // Receive _g22
            if (json.has("_g22")) {
                ${tickdata_name}._g22 = json.getBoolean("_g22");
            }
            // Receive _g23
            if (json.has("_g23")) {
                ${tickdata_name}._g23 = json.getBoolean("_g23");
            }
            // Receive _g23_e2
            if (json.has("_g23_e2")) {
                ${tickdata_name}._g23_e2 = json.getBoolean("_g23_e2");
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
            // Receive _g28
            if (json.has("_g28")) {
                ${tickdata_name}._g28 = json.getBoolean("_g28");
            }
            // Receive _g29
            if (json.has("_g29")) {
                ${tickdata_name}._g29 = json.getBoolean("_g29");
            }
            // Receive _g32
            if (json.has("_g32")) {
                ${tickdata_name}._g32 = json.getBoolean("_g32");
            }
            // Receive _g33
            if (json.has("_g33")) {
                ${tickdata_name}._g33 = json.getBoolean("_g33");
            }
            // Receive _g33_e3
            if (json.has("_g33_e3")) {
                ${tickdata_name}._g33_e3 = json.getBoolean("_g33_e3");
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
            // Receive _g37
            if (json.has("_g37")) {
                ${tickdata_name}._g37 = json.getBoolean("_g37");
            }
            // Receive _g38
            if (json.has("_g38")) {
                ${tickdata_name}._g38 = json.getBoolean("_g38");
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
            // Receive _g41
            if (json.has("_g41")) {
                ${tickdata_name}._g41 = json.getBoolean("_g41");
            }
            // Receive _g42
            if (json.has("_g42")) {
                ${tickdata_name}._g42 = json.getBoolean("_g42");
            }
            // Receive _g43
            if (json.has("_g43")) {
                ${tickdata_name}._g43 = json.getBoolean("_g43");
            }
            // Receive _g45
            if (json.has("_g45")) {
                ${tickdata_name}._g45 = json.getBoolean("_g45");
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
            // Receive _g53
            if (json.has("_g53")) {
                ${tickdata_name}._g53 = json.getBoolean("_g53");
            }
            // Receive _g54
            if (json.has("_g54")) {
                ${tickdata_name}._g54 = json.getBoolean("_g54");
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
            // Receive _g60
            if (json.has("_g60")) {
                ${tickdata_name}._g60 = json.getBoolean("_g60");
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
            // Receive _g7
            if (json.has("_g7")) {
                ${tickdata_name}._g7 = json.getBoolean("_g7");
            }
            // Receive _g70
            if (json.has("_g70")) {
                ${tickdata_name}._g70 = json.getBoolean("_g70");
            }
            // Receive _g71
            if (json.has("_g71")) {
                ${tickdata_name}._g71 = json.getBoolean("_g71");
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
            // Receive _g83
            if (json.has("_g83")) {
                ${tickdata_name}._g83 = json.getBoolean("_g83");
            }
            // Receive _g84
            if (json.has("_g84")) {
                ${tickdata_name}._g84 = json.getBoolean("_g84");
            }
            // Receive _g85
            if (json.has("_g85")) {
                ${tickdata_name}._g85 = json.getBoolean("_g85");
            }
            // Receive _g86
            if (json.has("_g86")) {
                ${tickdata_name}._g86 = json.getBoolean("_g86");
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
            // Receive _g9
            if (json.has("_g9")) {
                ${tickdata_name}._g9 = json.getBoolean("_g9");
            }
            // Receive _g90
            if (json.has("_g90")) {
                ${tickdata_name}._g90 = json.getBoolean("_g90");
            }
            // Receive _g94
            if (json.has("_g94")) {
                ${tickdata_name}._g94 = json.getBoolean("_g94");
            }
            // Receive _g95
            if (json.has("_g95")) {
                ${tickdata_name}._g95 = json.getBoolean("_g95");
            }
            // Receive _g98
            if (json.has("_g98")) {
                ${tickdata_name}._g98 = json.getBoolean("_g98");
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
            // Receive _pg106
            if (json.has("_pg106")) {
                ${tickdata_name}._pg106 = json.getBoolean("_pg106");
            }
            // Receive _pg109
            if (json.has("_pg109")) {
                ${tickdata_name}._pg109 = json.getBoolean("_pg109");
            }
            // Receive _pg114_e3
            if (json.has("_pg114_e3")) {
                ${tickdata_name}._pg114_e3 = json.getBoolean("_pg114_e3");
            }
            // Receive _pg115
            if (json.has("_pg115")) {
                ${tickdata_name}._pg115 = json.getBoolean("_pg115");
            }
            // Receive _pg117
            if (json.has("_pg117")) {
                ${tickdata_name}._pg117 = json.getBoolean("_pg117");
            }
            // Receive _pg12
            if (json.has("_pg12")) {
                ${tickdata_name}._pg12 = json.getBoolean("_pg12");
            }
            // Receive _pg12_e1
            if (json.has("_pg12_e1")) {
                ${tickdata_name}._pg12_e1 = json.getBoolean("_pg12_e1");
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
            // Receive _pg144
            if (json.has("_pg144")) {
                ${tickdata_name}._pg144 = json.getBoolean("_pg144");
            }
            // Receive _pg149
            if (json.has("_pg149")) {
                ${tickdata_name}._pg149 = json.getBoolean("_pg149");
            }
            // Receive _pg151
            if (json.has("_pg151")) {
                ${tickdata_name}._pg151 = json.getBoolean("_pg151");
            }
            // Receive _pg158
            if (json.has("_pg158")) {
                ${tickdata_name}._pg158 = json.getBoolean("_pg158");
            }
            // Receive _pg181
            if (json.has("_pg181")) {
                ${tickdata_name}._pg181 = json.getBoolean("_pg181");
            }
            // Receive _pg189
            if (json.has("_pg189")) {
                ${tickdata_name}._pg189 = json.getBoolean("_pg189");
            }
            // Receive _pg190
            if (json.has("_pg190")) {
                ${tickdata_name}._pg190 = json.getBoolean("_pg190");
            }
            // Receive _pg191
            if (json.has("_pg191")) {
                ${tickdata_name}._pg191 = json.getBoolean("_pg191");
            }
            // Receive _pg42
            if (json.has("_pg42")) {
                ${tickdata_name}._pg42 = json.getBoolean("_pg42");
            }
            // Receive _pg49
            if (json.has("_pg49")) {
                ${tickdata_name}._pg49 = json.getBoolean("_pg49");
            }
            // Receive _pg50
            if (json.has("_pg50")) {
                ${tickdata_name}._pg50 = json.getBoolean("_pg50");
            }
            // Receive _pg50_e1
            if (json.has("_pg50_e1")) {
                ${tickdata_name}._pg50_e1 = json.getBoolean("_pg50_e1");
            }
            // Receive _pg51
            if (json.has("_pg51")) {
                ${tickdata_name}._pg51 = json.getBoolean("_pg51");
            }
            // Receive _pg68
            if (json.has("_pg68")) {
                ${tickdata_name}._pg68 = json.getBoolean("_pg68");
            }
            // Receive _pg76
            if (json.has("_pg76")) {
                ${tickdata_name}._pg76 = json.getBoolean("_pg76");
            }
            // Receive _pg85
            if (json.has("_pg85")) {
                ${tickdata_name}._pg85 = json.getBoolean("_pg85");
            }
            // Receive _pg89
            if (json.has("_pg89")) {
                ${tickdata_name}._pg89 = json.getBoolean("_pg89");
            }
            // Receive _pg9
            if (json.has("_pg9")) {
                ${tickdata_name}._pg9 = json.getBoolean("_pg9");
            }
            // Receive _pg94
            if (json.has("_pg94")) {
                ${tickdata_name}._pg94 = json.getBoolean("_pg94");
            }
            // Receive _pg95
            if (json.has("_pg95")) {
                ${tickdata_name}._pg95 = json.getBoolean("_pg95");
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
        // Send _g101
        json.put("_g101", JSONObject.wrap(${tickdata_name}._g101));
        // Send _g103
        json.put("_g103", JSONObject.wrap(${tickdata_name}._g103));
        // Send _g104
        json.put("_g104", JSONObject.wrap(${tickdata_name}._g104));
        // Send _g105
        json.put("_g105", JSONObject.wrap(${tickdata_name}._g105));
        // Send _g105_e2
        json.put("_g105_e2", JSONObject.wrap(${tickdata_name}._g105_e2));
        // Send _g106
        json.put("_g106", JSONObject.wrap(${tickdata_name}._g106));
        // Send _g107
        json.put("_g107", JSONObject.wrap(${tickdata_name}._g107));
        // Send _g108
        json.put("_g108", JSONObject.wrap(${tickdata_name}._g108));
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
        // Send _g114_e3
        json.put("_g114_e3", JSONObject.wrap(${tickdata_name}._g114_e3));
        // Send _g115
        json.put("_g115", JSONObject.wrap(${tickdata_name}._g115));
        // Send _g115_e1
        json.put("_g115_e1", JSONObject.wrap(${tickdata_name}._g115_e1));
        // Send _g117
        json.put("_g117", JSONObject.wrap(${tickdata_name}._g117));
        // Send _g118
        json.put("_g118", JSONObject.wrap(${tickdata_name}._g118));
        // Send _g118_e2
        json.put("_g118_e2", JSONObject.wrap(${tickdata_name}._g118_e2));
        // Send _g12
        json.put("_g12", JSONObject.wrap(${tickdata_name}._g12));
        // Send _g120
        json.put("_g120", JSONObject.wrap(${tickdata_name}._g120));
        // Send _g121
        json.put("_g121", JSONObject.wrap(${tickdata_name}._g121));
        // Send _g125
        json.put("_g125", JSONObject.wrap(${tickdata_name}._g125));
        // Send _g126
        json.put("_g126", JSONObject.wrap(${tickdata_name}._g126));
        // Send _g12_e1
        json.put("_g12_e1", JSONObject.wrap(${tickdata_name}._g12_e1));
        // Send _g13
        json.put("_g13", JSONObject.wrap(${tickdata_name}._g13));
        // Send _g131
        json.put("_g131", JSONObject.wrap(${tickdata_name}._g131));
        // Send _g132
        json.put("_g132", JSONObject.wrap(${tickdata_name}._g132));
        // Send _g132_e1
        json.put("_g132_e1", JSONObject.wrap(${tickdata_name}._g132_e1));
        // Send _g133
        json.put("_g133", JSONObject.wrap(${tickdata_name}._g133));
        // Send _g135
        json.put("_g135", JSONObject.wrap(${tickdata_name}._g135));
        // Send _g137
        json.put("_g137", JSONObject.wrap(${tickdata_name}._g137));
        // Send _g138
        json.put("_g138", JSONObject.wrap(${tickdata_name}._g138));
        // Send _g138_e2
        json.put("_g138_e2", JSONObject.wrap(${tickdata_name}._g138_e2));
        // Send _g139
        json.put("_g139", JSONObject.wrap(${tickdata_name}._g139));
        // Send _g14
        json.put("_g14", JSONObject.wrap(${tickdata_name}._g14));
        // Send _g140
        json.put("_g140", JSONObject.wrap(${tickdata_name}._g140));
        // Send _g141
        json.put("_g141", JSONObject.wrap(${tickdata_name}._g141));
        // Send _g143
        json.put("_g143", JSONObject.wrap(${tickdata_name}._g143));
        // Send _g144
        json.put("_g144", JSONObject.wrap(${tickdata_name}._g144));
        // Send _g147
        json.put("_g147", JSONObject.wrap(${tickdata_name}._g147));
        // Send _g148
        json.put("_g148", JSONObject.wrap(${tickdata_name}._g148));
        // Send _g148_e3
        json.put("_g148_e3", JSONObject.wrap(${tickdata_name}._g148_e3));
        // Send _g149
        json.put("_g149", JSONObject.wrap(${tickdata_name}._g149));
        // Send _g15
        json.put("_g15", JSONObject.wrap(${tickdata_name}._g15));
        // Send _g150
        json.put("_g150", JSONObject.wrap(${tickdata_name}._g150));
        // Send _g151
        json.put("_g151", JSONObject.wrap(${tickdata_name}._g151));
        // Send _g152
        json.put("_g152", JSONObject.wrap(${tickdata_name}._g152));
        // Send _g152_e1
        json.put("_g152_e1", JSONObject.wrap(${tickdata_name}._g152_e1));
        // Send _g156
        json.put("_g156", JSONObject.wrap(${tickdata_name}._g156));
        // Send _g157
        json.put("_g157", JSONObject.wrap(${tickdata_name}._g157));
        // Send _g157_e1
        json.put("_g157_e1", JSONObject.wrap(${tickdata_name}._g157_e1));
        // Send _g158
        json.put("_g158", JSONObject.wrap(${tickdata_name}._g158));
        // Send _g162
        json.put("_g162", JSONObject.wrap(${tickdata_name}._g162));
        // Send _g163
        json.put("_g163", JSONObject.wrap(${tickdata_name}._g163));
        // Send _g163_e2
        json.put("_g163_e2", JSONObject.wrap(${tickdata_name}._g163_e2));
        // Send _g164
        json.put("_g164", JSONObject.wrap(${tickdata_name}._g164));
        // Send _g165
        json.put("_g165", JSONObject.wrap(${tickdata_name}._g165));
        // Send _g168
        json.put("_g168", JSONObject.wrap(${tickdata_name}._g168));
        // Send _g17
        json.put("_g17", JSONObject.wrap(${tickdata_name}._g17));
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
        // Send _g18
        json.put("_g18", JSONObject.wrap(${tickdata_name}._g18));
        // Send _g180
        json.put("_g180", JSONObject.wrap(${tickdata_name}._g180));
        // Send _g181
        json.put("_g181", JSONObject.wrap(${tickdata_name}._g181));
        // Send _g181_e2
        json.put("_g181_e2", JSONObject.wrap(${tickdata_name}._g181_e2));
        // Send _g182
        json.put("_g182", JSONObject.wrap(${tickdata_name}._g182));
        // Send _g185
        json.put("_g185", JSONObject.wrap(${tickdata_name}._g185));
        // Send _g186
        json.put("_g186", JSONObject.wrap(${tickdata_name}._g186));
        // Send _g187
        json.put("_g187", JSONObject.wrap(${tickdata_name}._g187));
        // Send _g187_e3
        json.put("_g187_e3", JSONObject.wrap(${tickdata_name}._g187_e3));
        // Send _g189
        json.put("_g189", JSONObject.wrap(${tickdata_name}._g189));
        // Send _g190
        json.put("_g190", JSONObject.wrap(${tickdata_name}._g190));
        // Send _g191
        json.put("_g191", JSONObject.wrap(${tickdata_name}._g191));
        // Send _g20
        json.put("_g20", JSONObject.wrap(${tickdata_name}._g20));
        // Send _g22
        json.put("_g22", JSONObject.wrap(${tickdata_name}._g22));
        // Send _g23
        json.put("_g23", JSONObject.wrap(${tickdata_name}._g23));
        // Send _g23_e2
        json.put("_g23_e2", JSONObject.wrap(${tickdata_name}._g23_e2));
        // Send _g24
        json.put("_g24", JSONObject.wrap(${tickdata_name}._g24));
        // Send _g25
        json.put("_g25", JSONObject.wrap(${tickdata_name}._g25));
        // Send _g26
        json.put("_g26", JSONObject.wrap(${tickdata_name}._g26));
        // Send _g28
        json.put("_g28", JSONObject.wrap(${tickdata_name}._g28));
        // Send _g29
        json.put("_g29", JSONObject.wrap(${tickdata_name}._g29));
        // Send _g32
        json.put("_g32", JSONObject.wrap(${tickdata_name}._g32));
        // Send _g33
        json.put("_g33", JSONObject.wrap(${tickdata_name}._g33));
        // Send _g33_e3
        json.put("_g33_e3", JSONObject.wrap(${tickdata_name}._g33_e3));
        // Send _g34
        json.put("_g34", JSONObject.wrap(${tickdata_name}._g34));
        // Send _g35
        json.put("_g35", JSONObject.wrap(${tickdata_name}._g35));
        // Send _g36
        json.put("_g36", JSONObject.wrap(${tickdata_name}._g36));
        // Send _g37
        json.put("_g37", JSONObject.wrap(${tickdata_name}._g37));
        // Send _g38
        json.put("_g38", JSONObject.wrap(${tickdata_name}._g38));
        // Send _g39
        json.put("_g39", JSONObject.wrap(${tickdata_name}._g39));
        // Send _g4
        json.put("_g4", JSONObject.wrap(${tickdata_name}._g4));
        // Send _g40
        json.put("_g40", JSONObject.wrap(${tickdata_name}._g40));
        // Send _g41
        json.put("_g41", JSONObject.wrap(${tickdata_name}._g41));
        // Send _g42
        json.put("_g42", JSONObject.wrap(${tickdata_name}._g42));
        // Send _g43
        json.put("_g43", JSONObject.wrap(${tickdata_name}._g43));
        // Send _g45
        json.put("_g45", JSONObject.wrap(${tickdata_name}._g45));
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
        // Send _g53
        json.put("_g53", JSONObject.wrap(${tickdata_name}._g53));
        // Send _g54
        json.put("_g54", JSONObject.wrap(${tickdata_name}._g54));
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
        // Send _g60
        json.put("_g60", JSONObject.wrap(${tickdata_name}._g60));
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
        // Send _g7
        json.put("_g7", JSONObject.wrap(${tickdata_name}._g7));
        // Send _g70
        json.put("_g70", JSONObject.wrap(${tickdata_name}._g70));
        // Send _g71
        json.put("_g71", JSONObject.wrap(${tickdata_name}._g71));
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
        // Send _g83
        json.put("_g83", JSONObject.wrap(${tickdata_name}._g83));
        // Send _g84
        json.put("_g84", JSONObject.wrap(${tickdata_name}._g84));
        // Send _g85
        json.put("_g85", JSONObject.wrap(${tickdata_name}._g85));
        // Send _g86
        json.put("_g86", JSONObject.wrap(${tickdata_name}._g86));
        // Send _g87
        json.put("_g87", JSONObject.wrap(${tickdata_name}._g87));
        // Send _g88
        json.put("_g88", JSONObject.wrap(${tickdata_name}._g88));
        // Send _g89
        json.put("_g89", JSONObject.wrap(${tickdata_name}._g89));
        // Send _g9
        json.put("_g9", JSONObject.wrap(${tickdata_name}._g9));
        // Send _g90
        json.put("_g90", JSONObject.wrap(${tickdata_name}._g90));
        // Send _g94
        json.put("_g94", JSONObject.wrap(${tickdata_name}._g94));
        // Send _g95
        json.put("_g95", JSONObject.wrap(${tickdata_name}._g95));
        // Send _g98
        json.put("_g98", JSONObject.wrap(${tickdata_name}._g98));
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
        // Send _pg106
        json.put("_pg106", JSONObject.wrap(${tickdata_name}._pg106));
        // Send _pg109
        json.put("_pg109", JSONObject.wrap(${tickdata_name}._pg109));
        // Send _pg114_e3
        json.put("_pg114_e3", JSONObject.wrap(${tickdata_name}._pg114_e3));
        // Send _pg115
        json.put("_pg115", JSONObject.wrap(${tickdata_name}._pg115));
        // Send _pg117
        json.put("_pg117", JSONObject.wrap(${tickdata_name}._pg117));
        // Send _pg12
        json.put("_pg12", JSONObject.wrap(${tickdata_name}._pg12));
        // Send _pg12_e1
        json.put("_pg12_e1", JSONObject.wrap(${tickdata_name}._pg12_e1));
        // Send _pg135
        json.put("_pg135", JSONObject.wrap(${tickdata_name}._pg135));
        // Send _pg14
        json.put("_pg14", JSONObject.wrap(${tickdata_name}._pg14));
        // Send _pg141
        json.put("_pg141", JSONObject.wrap(${tickdata_name}._pg141));
        // Send _pg144
        json.put("_pg144", JSONObject.wrap(${tickdata_name}._pg144));
        // Send _pg149
        json.put("_pg149", JSONObject.wrap(${tickdata_name}._pg149));
        // Send _pg151
        json.put("_pg151", JSONObject.wrap(${tickdata_name}._pg151));
        // Send _pg158
        json.put("_pg158", JSONObject.wrap(${tickdata_name}._pg158));
        // Send _pg181
        json.put("_pg181", JSONObject.wrap(${tickdata_name}._pg181));
        // Send _pg189
        json.put("_pg189", JSONObject.wrap(${tickdata_name}._pg189));
        // Send _pg190
        json.put("_pg190", JSONObject.wrap(${tickdata_name}._pg190));
        // Send _pg191
        json.put("_pg191", JSONObject.wrap(${tickdata_name}._pg191));
        // Send _pg42
        json.put("_pg42", JSONObject.wrap(${tickdata_name}._pg42));
        // Send _pg49
        json.put("_pg49", JSONObject.wrap(${tickdata_name}._pg49));
        // Send _pg50
        json.put("_pg50", JSONObject.wrap(${tickdata_name}._pg50));
        // Send _pg50_e1
        json.put("_pg50_e1", JSONObject.wrap(${tickdata_name}._pg50_e1));
        // Send _pg51
        json.put("_pg51", JSONObject.wrap(${tickdata_name}._pg51));
        // Send _pg68
        json.put("_pg68", JSONObject.wrap(${tickdata_name}._pg68));
        // Send _pg76
        json.put("_pg76", JSONObject.wrap(${tickdata_name}._pg76));
        // Send _pg85
        json.put("_pg85", JSONObject.wrap(${tickdata_name}._pg85));
        // Send _pg89
        json.put("_pg89", JSONObject.wrap(${tickdata_name}._pg89));
        // Send _pg9
        json.put("_pg9", JSONObject.wrap(${tickdata_name}._pg9));
        // Send _pg94
        json.put("_pg94", JSONObject.wrap(${tickdata_name}._pg94));
        // Send _pg95
        json.put("_pg95", JSONObject.wrap(${tickdata_name}._pg95));
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
