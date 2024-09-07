

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

import org.json.*;

public class Main {

    public static pacemaker model = new pacemaker();
    
    private static long _tickstart;
private static long _ticktime;

    
    public static BufferedReader stdInReader = new BufferedReader(new InputStreamReader(System.in));
            
    private static void receiveVariables() {
        try {
            String line = stdInReader.readLine();
            JSONObject json = new JSONObject(line);
            
            // Receive AS
            if (json.has("AS")) {
                model.AS = json.getBoolean("AS");
            }
            // Receive VS
            if (json.has("VS")) {
                model.VS = json.getBoolean("VS");
            }
            // Receive deltaT
            if (json.has("deltaT")) {
                model.deltaT = json.getDouble("deltaT");
            }
            // Receive AP
            if (json.has("AP")) {
                model.AP = json.getBoolean("AP");
            }
            // Receive VP
            if (json.has("VP")) {
                model.VP = json.getBoolean("VP");
            }
            // Receive sleepT
            if (json.has("sleepT")) {
                model.sleepT = json.getDouble("sleepT");
            }
            // Receive #ticktime
            if (json.has("#ticktime")) {
                _ticktime = json.getInt("#ticktime");
            }
            // Receive LRI_ACTIVE
            if (json.has("LRI_ACTIVE")) {
                model.LRI_ACTIVE = json.getBoolean("LRI_ACTIVE");
            }
            // Receive PVARP_ACTIVE
            if (json.has("PVARP_ACTIVE")) {
                model.PVARP_ACTIVE = json.getBoolean("PVARP_ACTIVE");
            }
            // Receive URI_ACTIVE
            if (json.has("URI_ACTIVE")) {
                model.URI_ACTIVE = json.getBoolean("URI_ACTIVE");
            }
            // Receive VRP_ACTIVE
            if (json.has("VRP_ACTIVE")) {
                model.VRP_ACTIVE = json.getBoolean("VRP_ACTIVE");
            }
            // Receive _GO
            if (json.has("_GO")) {
                model._GO = json.getBoolean("_GO");
            }
            // Receive _TERM
            if (json.has("_TERM")) {
                model._TERM = json.getBoolean("_TERM");
            }
            // Receive _cg10
            if (json.has("_cg10")) {
                model._cg10 = json.getBoolean("_cg10");
            }
            // Receive _cg101
            if (json.has("_cg101")) {
                model._cg101 = json.getBoolean("_cg101");
            }
            // Receive _cg109
            if (json.has("_cg109")) {
                model._cg109 = json.getBoolean("_cg109");
            }
            // Receive _cg113
            if (json.has("_cg113")) {
                model._cg113 = json.getBoolean("_cg113");
            }
            // Receive _cg118
            if (json.has("_cg118")) {
                model._cg118 = json.getBoolean("_cg118");
            }
            // Receive _cg119
            if (json.has("_cg119")) {
                model._cg119 = json.getBoolean("_cg119");
            }
            // Receive _cg12
            if (json.has("_cg12")) {
                model._cg12 = json.getBoolean("_cg12");
            }
            // Receive _cg123
            if (json.has("_cg123")) {
                model._cg123 = json.getBoolean("_cg123");
            }
            // Receive _cg128
            if (json.has("_cg128")) {
                model._cg128 = json.getBoolean("_cg128");
            }
            // Receive _cg13
            if (json.has("_cg13")) {
                model._cg13 = json.getBoolean("_cg13");
            }
            // Receive _cg132
            if (json.has("_cg132")) {
                model._cg132 = json.getBoolean("_cg132");
            }
            // Receive _cg14
            if (json.has("_cg14")) {
                model._cg14 = json.getBoolean("_cg14");
            }
            // Receive _cg140
            if (json.has("_cg140")) {
                model._cg140 = json.getBoolean("_cg140");
            }
            // Receive _cg144
            if (json.has("_cg144")) {
                model._cg144 = json.getBoolean("_cg144");
            }
            // Receive _cg146
            if (json.has("_cg146")) {
                model._cg146 = json.getBoolean("_cg146");
            }
            // Receive _cg148
            if (json.has("_cg148")) {
                model._cg148 = json.getBoolean("_cg148");
            }
            // Receive _cg149
            if (json.has("_cg149")) {
                model._cg149 = json.getBoolean("_cg149");
            }
            // Receive _cg150
            if (json.has("_cg150")) {
                model._cg150 = json.getBoolean("_cg150");
            }
            // Receive _cg152
            if (json.has("_cg152")) {
                model._cg152 = json.getBoolean("_cg152");
            }
            // Receive _cg154
            if (json.has("_cg154")) {
                model._cg154 = json.getBoolean("_cg154");
            }
            // Receive _cg155
            if (json.has("_cg155")) {
                model._cg155 = json.getBoolean("_cg155");
            }
            // Receive _cg156
            if (json.has("_cg156")) {
                model._cg156 = json.getBoolean("_cg156");
            }
            // Receive _cg158
            if (json.has("_cg158")) {
                model._cg158 = json.getBoolean("_cg158");
            }
            // Receive _cg159
            if (json.has("_cg159")) {
                model._cg159 = json.getBoolean("_cg159");
            }
            // Receive _cg16
            if (json.has("_cg16")) {
                model._cg16 = json.getBoolean("_cg16");
            }
            // Receive _cg162
            if (json.has("_cg162")) {
                model._cg162 = json.getBoolean("_cg162");
            }
            // Receive _cg164
            if (json.has("_cg164")) {
                model._cg164 = json.getBoolean("_cg164");
            }
            // Receive _cg166
            if (json.has("_cg166")) {
                model._cg166 = json.getBoolean("_cg166");
            }
            // Receive _cg169
            if (json.has("_cg169")) {
                model._cg169 = json.getBoolean("_cg169");
            }
            // Receive _cg17
            if (json.has("_cg17")) {
                model._cg17 = json.getBoolean("_cg17");
            }
            // Receive _cg171
            if (json.has("_cg171")) {
                model._cg171 = json.getBoolean("_cg171");
            }
            // Receive _cg173
            if (json.has("_cg173")) {
                model._cg173 = json.getBoolean("_cg173");
            }
            // Receive _cg176
            if (json.has("_cg176")) {
                model._cg176 = json.getBoolean("_cg176");
            }
            // Receive _cg179
            if (json.has("_cg179")) {
                model._cg179 = json.getBoolean("_cg179");
            }
            // Receive _cg180
            if (json.has("_cg180")) {
                model._cg180 = json.getBoolean("_cg180");
            }
            // Receive _cg20
            if (json.has("_cg20")) {
                model._cg20 = json.getBoolean("_cg20");
            }
            // Receive _cg22
            if (json.has("_cg22")) {
                model._cg22 = json.getBoolean("_cg22");
            }
            // Receive _cg24
            if (json.has("_cg24")) {
                model._cg24 = json.getBoolean("_cg24");
            }
            // Receive _cg26
            if (json.has("_cg26")) {
                model._cg26 = json.getBoolean("_cg26");
            }
            // Receive _cg27
            if (json.has("_cg27")) {
                model._cg27 = json.getBoolean("_cg27");
            }
            // Receive _cg30
            if (json.has("_cg30")) {
                model._cg30 = json.getBoolean("_cg30");
            }
            // Receive _cg31
            if (json.has("_cg31")) {
                model._cg31 = json.getBoolean("_cg31");
            }
            // Receive _cg34
            if (json.has("_cg34")) {
                model._cg34 = json.getBoolean("_cg34");
            }
            // Receive _cg35
            if (json.has("_cg35")) {
                model._cg35 = json.getBoolean("_cg35");
            }
            // Receive _cg37
            if (json.has("_cg37")) {
                model._cg37 = json.getBoolean("_cg37");
            }
            // Receive _cg4
            if (json.has("_cg4")) {
                model._cg4 = json.getBoolean("_cg4");
            }
            // Receive _cg40
            if (json.has("_cg40")) {
                model._cg40 = json.getBoolean("_cg40");
            }
            // Receive _cg43
            if (json.has("_cg43")) {
                model._cg43 = json.getBoolean("_cg43");
            }
            // Receive _cg47
            if (json.has("_cg47")) {
                model._cg47 = json.getBoolean("_cg47");
            }
            // Receive _cg48
            if (json.has("_cg48")) {
                model._cg48 = json.getBoolean("_cg48");
            }
            // Receive _cg50
            if (json.has("_cg50")) {
                model._cg50 = json.getBoolean("_cg50");
            }
            // Receive _cg52
            if (json.has("_cg52")) {
                model._cg52 = json.getBoolean("_cg52");
            }
            // Receive _cg53
            if (json.has("_cg53")) {
                model._cg53 = json.getBoolean("_cg53");
            }
            // Receive _cg54
            if (json.has("_cg54")) {
                model._cg54 = json.getBoolean("_cg54");
            }
            // Receive _cg56
            if (json.has("_cg56")) {
                model._cg56 = json.getBoolean("_cg56");
            }
            // Receive _cg57
            if (json.has("_cg57")) {
                model._cg57 = json.getBoolean("_cg57");
            }
            // Receive _cg60
            if (json.has("_cg60")) {
                model._cg60 = json.getBoolean("_cg60");
            }
            // Receive _cg62
            if (json.has("_cg62")) {
                model._cg62 = json.getBoolean("_cg62");
            }
            // Receive _cg64
            if (json.has("_cg64")) {
                model._cg64 = json.getBoolean("_cg64");
            }
            // Receive _cg65
            if (json.has("_cg65")) {
                model._cg65 = json.getBoolean("_cg65");
            }
            // Receive _cg7
            if (json.has("_cg7")) {
                model._cg7 = json.getBoolean("_cg7");
            }
            // Receive _cg70
            if (json.has("_cg70")) {
                model._cg70 = json.getBoolean("_cg70");
            }
            // Receive _cg73
            if (json.has("_cg73")) {
                model._cg73 = json.getBoolean("_cg73");
            }
            // Receive _cg78
            if (json.has("_cg78")) {
                model._cg78 = json.getBoolean("_cg78");
            }
            // Receive _cg8
            if (json.has("_cg8")) {
                model._cg8 = json.getBoolean("_cg8");
            }
            // Receive _cg82
            if (json.has("_cg82")) {
                model._cg82 = json.getBoolean("_cg82");
            }
            // Receive _cg87
            if (json.has("_cg87")) {
                model._cg87 = json.getBoolean("_cg87");
            }
            // Receive _cg88
            if (json.has("_cg88")) {
                model._cg88 = json.getBoolean("_cg88");
            }
            // Receive _cg92
            if (json.has("_cg92")) {
                model._cg92 = json.getBoolean("_cg92");
            }
            // Receive _cg97
            if (json.has("_cg97")) {
                model._cg97 = json.getBoolean("_cg97");
            }
            // Receive _g10
            if (json.has("_g10")) {
                model._g10 = json.getBoolean("_g10");
            }
            // Receive _g103
            if (json.has("_g103")) {
                model._g103 = json.getBoolean("_g103");
            }
            // Receive _g115
            if (json.has("_g115")) {
                model._g115 = json.getBoolean("_g115");
            }
            // Receive _g116
            if (json.has("_g116")) {
                model._g116 = json.getBoolean("_g116");
            }
            // Receive _g12
            if (json.has("_g12")) {
                model._g12 = json.getBoolean("_g12");
            }
            // Receive _g127
            if (json.has("_g127")) {
                model._g127 = json.getBoolean("_g127");
            }
            // Receive _g13
            if (json.has("_g13")) {
                model._g13 = json.getBoolean("_g13");
            }
            // Receive _g134
            if (json.has("_g134")) {
                model._g134 = json.getBoolean("_g134");
            }
            // Receive _g15
            if (json.has("_g15")) {
                model._g15 = json.getBoolean("_g15");
            }
            // Receive _g16
            if (json.has("_g16")) {
                model._g16 = json.getBoolean("_g16");
            }
            // Receive _g19
            if (json.has("_g19")) {
                model._g19 = json.getBoolean("_g19");
            }
            // Receive _g190
            if (json.has("_g190")) {
                model._g190 = json.getBoolean("_g190");
            }
            // Receive _g198
            if (json.has("_g198")) {
                model._g198 = json.getBoolean("_g198");
            }
            // Receive _g20
            if (json.has("_g20")) {
                model._g20 = json.getBoolean("_g20");
            }
            // Receive _g22
            if (json.has("_g22")) {
                model._g22 = json.getBoolean("_g22");
            }
            // Receive _g23
            if (json.has("_g23")) {
                model._g23 = json.getBoolean("_g23");
            }
            // Receive _g3
            if (json.has("_g3")) {
                model._g3 = json.getBoolean("_g3");
            }
            // Receive _g32
            if (json.has("_g32")) {
                model._g32 = json.getBoolean("_g32");
            }
            // Receive _g33
            if (json.has("_g33")) {
                model._g33 = json.getBoolean("_g33");
            }
            // Receive _g34
            if (json.has("_g34")) {
                model._g34 = json.getBoolean("_g34");
            }
            // Receive _g35
            if (json.has("_g35")) {
                model._g35 = json.getBoolean("_g35");
            }
            // Receive _g36
            if (json.has("_g36")) {
                model._g36 = json.getBoolean("_g36");
            }
            // Receive _g36_e1
            if (json.has("_g36_e1")) {
                model._g36_e1 = json.getBoolean("_g36_e1");
            }
            // Receive _g37
            if (json.has("_g37")) {
                model._g37 = json.getBoolean("_g37");
            }
            // Receive _g38
            if (json.has("_g38")) {
                model._g38 = json.getBoolean("_g38");
            }
            // Receive _g39
            if (json.has("_g39")) {
                model._g39 = json.getBoolean("_g39");
            }
            // Receive _g4
            if (json.has("_g4")) {
                model._g4 = json.getBoolean("_g4");
            }
            // Receive _g42
            if (json.has("_g42")) {
                model._g42 = json.getBoolean("_g42");
            }
            // Receive _g43
            if (json.has("_g43")) {
                model._g43 = json.getBoolean("_g43");
            }
            // Receive _g44
            if (json.has("_g44")) {
                model._g44 = json.getBoolean("_g44");
            }
            // Receive _g44_e2
            if (json.has("_g44_e2")) {
                model._g44_e2 = json.getBoolean("_g44_e2");
            }
            // Receive _g45
            if (json.has("_g45")) {
                model._g45 = json.getBoolean("_g45");
            }
            // Receive _g46
            if (json.has("_g46")) {
                model._g46 = json.getBoolean("_g46");
            }
            // Receive _g48
            if (json.has("_g48")) {
                model._g48 = json.getBoolean("_g48");
            }
            // Receive _g5
            if (json.has("_g5")) {
                model._g5 = json.getBoolean("_g5");
            }
            // Receive _g50
            if (json.has("_g50")) {
                model._g50 = json.getBoolean("_g50");
            }
            // Receive _g51
            if (json.has("_g51")) {
                model._g51 = json.getBoolean("_g51");
            }
            // Receive _g51_e1
            if (json.has("_g51_e1")) {
                model._g51_e1 = json.getBoolean("_g51_e1");
            }
            // Receive _g52
            if (json.has("_g52")) {
                model._g52 = json.getBoolean("_g52");
            }
            // Receive _g53
            if (json.has("_g53")) {
                model._g53 = json.getBoolean("_g53");
            }
            // Receive _g54
            if (json.has("_g54")) {
                model._g54 = json.getBoolean("_g54");
            }
            // Receive _g56
            if (json.has("_g56")) {
                model._g56 = json.getBoolean("_g56");
            }
            // Receive _g57
            if (json.has("_g57")) {
                model._g57 = json.getBoolean("_g57");
            }
            // Receive _g6
            if (json.has("_g6")) {
                model._g6 = json.getBoolean("_g6");
            }
            // Receive _g60
            if (json.has("_g60")) {
                model._g60 = json.getBoolean("_g60");
            }
            // Receive _g61
            if (json.has("_g61")) {
                model._g61 = json.getBoolean("_g61");
            }
            // Receive _g61_e2
            if (json.has("_g61_e2")) {
                model._g61_e2 = json.getBoolean("_g61_e2");
            }
            // Receive _g62
            if (json.has("_g62")) {
                model._g62 = json.getBoolean("_g62");
            }
            // Receive _g63
            if (json.has("_g63")) {
                model._g63 = json.getBoolean("_g63");
            }
            // Receive _g64
            if (json.has("_g64")) {
                model._g64 = json.getBoolean("_g64");
            }
            // Receive _g65
            if (json.has("_g65")) {
                model._g65 = json.getBoolean("_g65");
            }
            // Receive _g66
            if (json.has("_g66")) {
                model._g66 = json.getBoolean("_g66");
            }
            // Receive _g67
            if (json.has("_g67")) {
                model._g67 = json.getBoolean("_g67");
            }
            // Receive _g68
            if (json.has("_g68")) {
                model._g68 = json.getBoolean("_g68");
            }
            // Receive _g73
            if (json.has("_g73")) {
                model._g73 = json.getBoolean("_g73");
            }
            // Receive _g74
            if (json.has("_g74")) {
                model._g74 = json.getBoolean("_g74");
            }
            // Receive _g8
            if (json.has("_g8")) {
                model._g8 = json.getBoolean("_g8");
            }
            // Receive _g84
            if (json.has("_g84")) {
                model._g84 = json.getBoolean("_g84");
            }
            // Receive _g85
            if (json.has("_g85")) {
                model._g85 = json.getBoolean("_g85");
            }
            // Receive _g9
            if (json.has("_g9")) {
                model._g9 = json.getBoolean("_g9");
            }
            // Receive _g96
            if (json.has("_g96")) {
                model._g96 = json.getBoolean("_g96");
            }
            // Receive _pacemaker_local__Atrig
            if (json.has("_pacemaker_local__Atrig")) {
                model._pacemaker_local__Atrig = json.getBoolean("_pacemaker_local__Atrig");
            }
            // Receive _pacemaker_local__Atrig1
            if (json.has("_pacemaker_local__Atrig1")) {
                model._pacemaker_local__Atrig1 = json.getBoolean("_pacemaker_local__Atrig1");
            }
            // Receive _pacemaker_local__Atrig2
            if (json.has("_pacemaker_local__Atrig2")) {
                model._pacemaker_local__Atrig2 = json.getBoolean("_pacemaker_local__Atrig2");
            }
            // Receive _pacemaker_local__Atrig3
            if (json.has("_pacemaker_local__Atrig3")) {
                model._pacemaker_local__Atrig3 = json.getBoolean("_pacemaker_local__Atrig3");
            }
            // Receive _pacemaker_local__Atrig4
            if (json.has("_pacemaker_local__Atrig4")) {
                model._pacemaker_local__Atrig4 = json.getBoolean("_pacemaker_local__Atrig4");
            }
            // Receive _pacemaker_local__Atrig5
            if (json.has("_pacemaker_local__Atrig5")) {
                model._pacemaker_local__Atrig5 = json.getBoolean("_pacemaker_local__Atrig5");
            }
            // Receive _pacemaker_local__Atrig6
            if (json.has("_pacemaker_local__Atrig6")) {
                model._pacemaker_local__Atrig6 = json.getBoolean("_pacemaker_local__Atrig6");
            }
            // Receive _pacemaker_local__Atrig7
            if (json.has("_pacemaker_local__Atrig7")) {
                model._pacemaker_local__Atrig7 = json.getBoolean("_pacemaker_local__Atrig7");
            }
            // Receive _pacemaker_local__CFSterm
            if (json.has("_pacemaker_local__CFSterm")) {
                model._pacemaker_local__CFSterm = json.getBoolean("_pacemaker_local__CFSterm");
            }
            // Receive _pacemaker_local__CFSterm1
            if (json.has("_pacemaker_local__CFSterm1")) {
                model._pacemaker_local__CFSterm1 = json.getBoolean("_pacemaker_local__CFSterm1");
            }
            // Receive _pacemaker_local__CFSterm2
            if (json.has("_pacemaker_local__CFSterm2")) {
                model._pacemaker_local__CFSterm2 = json.getBoolean("_pacemaker_local__CFSterm2");
            }
            // Receive _pacemaker_local_x
            if (json.has("_pacemaker_local_x")) {
                model._pacemaker_local_x = json.getDouble("_pacemaker_local_x");
            }
            // Receive _pacemaker_local_x1
            if (json.has("_pacemaker_local_x1")) {
                model._pacemaker_local_x1 = json.getDouble("_pacemaker_local_x1");
            }
            // Receive _pacemaker_local_x2
            if (json.has("_pacemaker_local_x2")) {
                model._pacemaker_local_x2 = json.getDouble("_pacemaker_local_x2");
            }
            // Receive _pg103
            if (json.has("_pg103")) {
                model._pg103 = json.getBoolean("_pg103");
            }
            // Receive _pg115
            if (json.has("_pg115")) {
                model._pg115 = json.getBoolean("_pg115");
            }
            // Receive _pg127
            if (json.has("_pg127")) {
                model._pg127 = json.getBoolean("_pg127");
            }
            // Receive _pg134
            if (json.has("_pg134")) {
                model._pg134 = json.getBoolean("_pg134");
            }
            // Receive _pg15
            if (json.has("_pg15")) {
                model._pg15 = json.getBoolean("_pg15");
            }
            // Receive _pg19
            if (json.has("_pg19")) {
                model._pg19 = json.getBoolean("_pg19");
            }
            // Receive _pg3
            if (json.has("_pg3")) {
                model._pg3 = json.getBoolean("_pg3");
            }
            // Receive _pg32
            if (json.has("_pg32")) {
                model._pg32 = json.getBoolean("_pg32");
            }
            // Receive _pg38
            if (json.has("_pg38")) {
                model._pg38 = json.getBoolean("_pg38");
            }
            // Receive _pg42
            if (json.has("_pg42")) {
                model._pg42 = json.getBoolean("_pg42");
            }
            // Receive _pg44
            if (json.has("_pg44")) {
                model._pg44 = json.getBoolean("_pg44");
            }
            // Receive _pg45
            if (json.has("_pg45")) {
                model._pg45 = json.getBoolean("_pg45");
            }
            // Receive _pg46
            if (json.has("_pg46")) {
                model._pg46 = json.getBoolean("_pg46");
            }
            // Receive _pg68
            if (json.has("_pg68")) {
                model._pg68 = json.getBoolean("_pg68");
            }
            // Receive _pg73
            if (json.has("_pg73")) {
                model._pg73 = json.getBoolean("_pg73");
            }
            // Receive _pg84
            if (json.has("_pg84")) {
                model._pg84 = json.getBoolean("_pg84");
            }
            // Receive _pg9
            if (json.has("_pg9")) {
                model._pg9 = json.getBoolean("_pg9");
            }
            // Receive _pg96
            if (json.has("_pg96")) {
                model._pg96 = json.getBoolean("_pg96");
            }
            // Receive _region0_null_x
            if (json.has("_region0_null_x")) {
                model._region0_null_x = json.getDouble("_region0_null_x");
            }
            // Receive _taken_transitions
            if (json.has("_taken_transitions")) {
                JSONArray _array = json.getJSONArray("_taken_transitions");
                for (int i = 0; i < _array.length(); i++) {
                    model._taken_transitions[i] = _array.getInt(i);
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
        json.put("AS", JSONObject.wrap(model.AS));
        // Send VS
        json.put("VS", JSONObject.wrap(model.VS));
        // Send deltaT
        json.put("deltaT", JSONObject.wrap(model.deltaT));
        // Send AP
        json.put("AP", JSONObject.wrap(model.AP));
        // Send VP
        json.put("VP", JSONObject.wrap(model.VP));
        // Send sleepT
        json.put("sleepT", JSONObject.wrap(model.sleepT));
        // Send #ticktime
        json.put("#ticktime", _ticktime);
        // Send LRI_ACTIVE
        json.put("LRI_ACTIVE", JSONObject.wrap(model.LRI_ACTIVE));
        // Send PVARP_ACTIVE
        json.put("PVARP_ACTIVE", JSONObject.wrap(model.PVARP_ACTIVE));
        // Send URI_ACTIVE
        json.put("URI_ACTIVE", JSONObject.wrap(model.URI_ACTIVE));
        // Send VRP_ACTIVE
        json.put("VRP_ACTIVE", JSONObject.wrap(model.VRP_ACTIVE));
        // Send _GO
        json.put("_GO", JSONObject.wrap(model._GO));
        // Send _TERM
        json.put("_TERM", JSONObject.wrap(model._TERM));
        // Send _cg10
        json.put("_cg10", JSONObject.wrap(model._cg10));
        // Send _cg101
        json.put("_cg101", JSONObject.wrap(model._cg101));
        // Send _cg109
        json.put("_cg109", JSONObject.wrap(model._cg109));
        // Send _cg113
        json.put("_cg113", JSONObject.wrap(model._cg113));
        // Send _cg118
        json.put("_cg118", JSONObject.wrap(model._cg118));
        // Send _cg119
        json.put("_cg119", JSONObject.wrap(model._cg119));
        // Send _cg12
        json.put("_cg12", JSONObject.wrap(model._cg12));
        // Send _cg123
        json.put("_cg123", JSONObject.wrap(model._cg123));
        // Send _cg128
        json.put("_cg128", JSONObject.wrap(model._cg128));
        // Send _cg13
        json.put("_cg13", JSONObject.wrap(model._cg13));
        // Send _cg132
        json.put("_cg132", JSONObject.wrap(model._cg132));
        // Send _cg14
        json.put("_cg14", JSONObject.wrap(model._cg14));
        // Send _cg140
        json.put("_cg140", JSONObject.wrap(model._cg140));
        // Send _cg144
        json.put("_cg144", JSONObject.wrap(model._cg144));
        // Send _cg146
        json.put("_cg146", JSONObject.wrap(model._cg146));
        // Send _cg148
        json.put("_cg148", JSONObject.wrap(model._cg148));
        // Send _cg149
        json.put("_cg149", JSONObject.wrap(model._cg149));
        // Send _cg150
        json.put("_cg150", JSONObject.wrap(model._cg150));
        // Send _cg152
        json.put("_cg152", JSONObject.wrap(model._cg152));
        // Send _cg154
        json.put("_cg154", JSONObject.wrap(model._cg154));
        // Send _cg155
        json.put("_cg155", JSONObject.wrap(model._cg155));
        // Send _cg156
        json.put("_cg156", JSONObject.wrap(model._cg156));
        // Send _cg158
        json.put("_cg158", JSONObject.wrap(model._cg158));
        // Send _cg159
        json.put("_cg159", JSONObject.wrap(model._cg159));
        // Send _cg16
        json.put("_cg16", JSONObject.wrap(model._cg16));
        // Send _cg162
        json.put("_cg162", JSONObject.wrap(model._cg162));
        // Send _cg164
        json.put("_cg164", JSONObject.wrap(model._cg164));
        // Send _cg166
        json.put("_cg166", JSONObject.wrap(model._cg166));
        // Send _cg169
        json.put("_cg169", JSONObject.wrap(model._cg169));
        // Send _cg17
        json.put("_cg17", JSONObject.wrap(model._cg17));
        // Send _cg171
        json.put("_cg171", JSONObject.wrap(model._cg171));
        // Send _cg173
        json.put("_cg173", JSONObject.wrap(model._cg173));
        // Send _cg176
        json.put("_cg176", JSONObject.wrap(model._cg176));
        // Send _cg179
        json.put("_cg179", JSONObject.wrap(model._cg179));
        // Send _cg180
        json.put("_cg180", JSONObject.wrap(model._cg180));
        // Send _cg20
        json.put("_cg20", JSONObject.wrap(model._cg20));
        // Send _cg22
        json.put("_cg22", JSONObject.wrap(model._cg22));
        // Send _cg24
        json.put("_cg24", JSONObject.wrap(model._cg24));
        // Send _cg26
        json.put("_cg26", JSONObject.wrap(model._cg26));
        // Send _cg27
        json.put("_cg27", JSONObject.wrap(model._cg27));
        // Send _cg30
        json.put("_cg30", JSONObject.wrap(model._cg30));
        // Send _cg31
        json.put("_cg31", JSONObject.wrap(model._cg31));
        // Send _cg34
        json.put("_cg34", JSONObject.wrap(model._cg34));
        // Send _cg35
        json.put("_cg35", JSONObject.wrap(model._cg35));
        // Send _cg37
        json.put("_cg37", JSONObject.wrap(model._cg37));
        // Send _cg4
        json.put("_cg4", JSONObject.wrap(model._cg4));
        // Send _cg40
        json.put("_cg40", JSONObject.wrap(model._cg40));
        // Send _cg43
        json.put("_cg43", JSONObject.wrap(model._cg43));
        // Send _cg47
        json.put("_cg47", JSONObject.wrap(model._cg47));
        // Send _cg48
        json.put("_cg48", JSONObject.wrap(model._cg48));
        // Send _cg50
        json.put("_cg50", JSONObject.wrap(model._cg50));
        // Send _cg52
        json.put("_cg52", JSONObject.wrap(model._cg52));
        // Send _cg53
        json.put("_cg53", JSONObject.wrap(model._cg53));
        // Send _cg54
        json.put("_cg54", JSONObject.wrap(model._cg54));
        // Send _cg56
        json.put("_cg56", JSONObject.wrap(model._cg56));
        // Send _cg57
        json.put("_cg57", JSONObject.wrap(model._cg57));
        // Send _cg60
        json.put("_cg60", JSONObject.wrap(model._cg60));
        // Send _cg62
        json.put("_cg62", JSONObject.wrap(model._cg62));
        // Send _cg64
        json.put("_cg64", JSONObject.wrap(model._cg64));
        // Send _cg65
        json.put("_cg65", JSONObject.wrap(model._cg65));
        // Send _cg7
        json.put("_cg7", JSONObject.wrap(model._cg7));
        // Send _cg70
        json.put("_cg70", JSONObject.wrap(model._cg70));
        // Send _cg73
        json.put("_cg73", JSONObject.wrap(model._cg73));
        // Send _cg78
        json.put("_cg78", JSONObject.wrap(model._cg78));
        // Send _cg8
        json.put("_cg8", JSONObject.wrap(model._cg8));
        // Send _cg82
        json.put("_cg82", JSONObject.wrap(model._cg82));
        // Send _cg87
        json.put("_cg87", JSONObject.wrap(model._cg87));
        // Send _cg88
        json.put("_cg88", JSONObject.wrap(model._cg88));
        // Send _cg92
        json.put("_cg92", JSONObject.wrap(model._cg92));
        // Send _cg97
        json.put("_cg97", JSONObject.wrap(model._cg97));
        // Send _g10
        json.put("_g10", JSONObject.wrap(model._g10));
        // Send _g103
        json.put("_g103", JSONObject.wrap(model._g103));
        // Send _g115
        json.put("_g115", JSONObject.wrap(model._g115));
        // Send _g116
        json.put("_g116", JSONObject.wrap(model._g116));
        // Send _g12
        json.put("_g12", JSONObject.wrap(model._g12));
        // Send _g127
        json.put("_g127", JSONObject.wrap(model._g127));
        // Send _g13
        json.put("_g13", JSONObject.wrap(model._g13));
        // Send _g134
        json.put("_g134", JSONObject.wrap(model._g134));
        // Send _g15
        json.put("_g15", JSONObject.wrap(model._g15));
        // Send _g16
        json.put("_g16", JSONObject.wrap(model._g16));
        // Send _g19
        json.put("_g19", JSONObject.wrap(model._g19));
        // Send _g190
        json.put("_g190", JSONObject.wrap(model._g190));
        // Send _g198
        json.put("_g198", JSONObject.wrap(model._g198));
        // Send _g20
        json.put("_g20", JSONObject.wrap(model._g20));
        // Send _g22
        json.put("_g22", JSONObject.wrap(model._g22));
        // Send _g23
        json.put("_g23", JSONObject.wrap(model._g23));
        // Send _g3
        json.put("_g3", JSONObject.wrap(model._g3));
        // Send _g32
        json.put("_g32", JSONObject.wrap(model._g32));
        // Send _g33
        json.put("_g33", JSONObject.wrap(model._g33));
        // Send _g34
        json.put("_g34", JSONObject.wrap(model._g34));
        // Send _g35
        json.put("_g35", JSONObject.wrap(model._g35));
        // Send _g36
        json.put("_g36", JSONObject.wrap(model._g36));
        // Send _g36_e1
        json.put("_g36_e1", JSONObject.wrap(model._g36_e1));
        // Send _g37
        json.put("_g37", JSONObject.wrap(model._g37));
        // Send _g38
        json.put("_g38", JSONObject.wrap(model._g38));
        // Send _g39
        json.put("_g39", JSONObject.wrap(model._g39));
        // Send _g4
        json.put("_g4", JSONObject.wrap(model._g4));
        // Send _g42
        json.put("_g42", JSONObject.wrap(model._g42));
        // Send _g43
        json.put("_g43", JSONObject.wrap(model._g43));
        // Send _g44
        json.put("_g44", JSONObject.wrap(model._g44));
        // Send _g44_e2
        json.put("_g44_e2", JSONObject.wrap(model._g44_e2));
        // Send _g45
        json.put("_g45", JSONObject.wrap(model._g45));
        // Send _g46
        json.put("_g46", JSONObject.wrap(model._g46));
        // Send _g48
        json.put("_g48", JSONObject.wrap(model._g48));
        // Send _g5
        json.put("_g5", JSONObject.wrap(model._g5));
        // Send _g50
        json.put("_g50", JSONObject.wrap(model._g50));
        // Send _g51
        json.put("_g51", JSONObject.wrap(model._g51));
        // Send _g51_e1
        json.put("_g51_e1", JSONObject.wrap(model._g51_e1));
        // Send _g52
        json.put("_g52", JSONObject.wrap(model._g52));
        // Send _g53
        json.put("_g53", JSONObject.wrap(model._g53));
        // Send _g54
        json.put("_g54", JSONObject.wrap(model._g54));
        // Send _g56
        json.put("_g56", JSONObject.wrap(model._g56));
        // Send _g57
        json.put("_g57", JSONObject.wrap(model._g57));
        // Send _g6
        json.put("_g6", JSONObject.wrap(model._g6));
        // Send _g60
        json.put("_g60", JSONObject.wrap(model._g60));
        // Send _g61
        json.put("_g61", JSONObject.wrap(model._g61));
        // Send _g61_e2
        json.put("_g61_e2", JSONObject.wrap(model._g61_e2));
        // Send _g62
        json.put("_g62", JSONObject.wrap(model._g62));
        // Send _g63
        json.put("_g63", JSONObject.wrap(model._g63));
        // Send _g64
        json.put("_g64", JSONObject.wrap(model._g64));
        // Send _g65
        json.put("_g65", JSONObject.wrap(model._g65));
        // Send _g66
        json.put("_g66", JSONObject.wrap(model._g66));
        // Send _g67
        json.put("_g67", JSONObject.wrap(model._g67));
        // Send _g68
        json.put("_g68", JSONObject.wrap(model._g68));
        // Send _g73
        json.put("_g73", JSONObject.wrap(model._g73));
        // Send _g74
        json.put("_g74", JSONObject.wrap(model._g74));
        // Send _g8
        json.put("_g8", JSONObject.wrap(model._g8));
        // Send _g84
        json.put("_g84", JSONObject.wrap(model._g84));
        // Send _g85
        json.put("_g85", JSONObject.wrap(model._g85));
        // Send _g9
        json.put("_g9", JSONObject.wrap(model._g9));
        // Send _g96
        json.put("_g96", JSONObject.wrap(model._g96));
        // Send _pacemaker_local__Atrig
        json.put("_pacemaker_local__Atrig", JSONObject.wrap(model._pacemaker_local__Atrig));
        // Send _pacemaker_local__Atrig1
        json.put("_pacemaker_local__Atrig1", JSONObject.wrap(model._pacemaker_local__Atrig1));
        // Send _pacemaker_local__Atrig2
        json.put("_pacemaker_local__Atrig2", JSONObject.wrap(model._pacemaker_local__Atrig2));
        // Send _pacemaker_local__Atrig3
        json.put("_pacemaker_local__Atrig3", JSONObject.wrap(model._pacemaker_local__Atrig3));
        // Send _pacemaker_local__Atrig4
        json.put("_pacemaker_local__Atrig4", JSONObject.wrap(model._pacemaker_local__Atrig4));
        // Send _pacemaker_local__Atrig5
        json.put("_pacemaker_local__Atrig5", JSONObject.wrap(model._pacemaker_local__Atrig5));
        // Send _pacemaker_local__Atrig6
        json.put("_pacemaker_local__Atrig6", JSONObject.wrap(model._pacemaker_local__Atrig6));
        // Send _pacemaker_local__Atrig7
        json.put("_pacemaker_local__Atrig7", JSONObject.wrap(model._pacemaker_local__Atrig7));
        // Send _pacemaker_local__CFSterm
        json.put("_pacemaker_local__CFSterm", JSONObject.wrap(model._pacemaker_local__CFSterm));
        // Send _pacemaker_local__CFSterm1
        json.put("_pacemaker_local__CFSterm1", JSONObject.wrap(model._pacemaker_local__CFSterm1));
        // Send _pacemaker_local__CFSterm2
        json.put("_pacemaker_local__CFSterm2", JSONObject.wrap(model._pacemaker_local__CFSterm2));
        // Send _pacemaker_local_x
        json.put("_pacemaker_local_x", JSONObject.wrap(model._pacemaker_local_x));
        // Send _pacemaker_local_x1
        json.put("_pacemaker_local_x1", JSONObject.wrap(model._pacemaker_local_x1));
        // Send _pacemaker_local_x2
        json.put("_pacemaker_local_x2", JSONObject.wrap(model._pacemaker_local_x2));
        // Send _pg103
        json.put("_pg103", JSONObject.wrap(model._pg103));
        // Send _pg115
        json.put("_pg115", JSONObject.wrap(model._pg115));
        // Send _pg127
        json.put("_pg127", JSONObject.wrap(model._pg127));
        // Send _pg134
        json.put("_pg134", JSONObject.wrap(model._pg134));
        // Send _pg15
        json.put("_pg15", JSONObject.wrap(model._pg15));
        // Send _pg19
        json.put("_pg19", JSONObject.wrap(model._pg19));
        // Send _pg3
        json.put("_pg3", JSONObject.wrap(model._pg3));
        // Send _pg32
        json.put("_pg32", JSONObject.wrap(model._pg32));
        // Send _pg38
        json.put("_pg38", JSONObject.wrap(model._pg38));
        // Send _pg42
        json.put("_pg42", JSONObject.wrap(model._pg42));
        // Send _pg44
        json.put("_pg44", JSONObject.wrap(model._pg44));
        // Send _pg45
        json.put("_pg45", JSONObject.wrap(model._pg45));
        // Send _pg46
        json.put("_pg46", JSONObject.wrap(model._pg46));
        // Send _pg68
        json.put("_pg68", JSONObject.wrap(model._pg68));
        // Send _pg73
        json.put("_pg73", JSONObject.wrap(model._pg73));
        // Send _pg84
        json.put("_pg84", JSONObject.wrap(model._pg84));
        // Send _pg9
        json.put("_pg9", JSONObject.wrap(model._pg9));
        // Send _pg96
        json.put("_pg96", JSONObject.wrap(model._pg96));
        // Send _region0_null_x
        json.put("_region0_null_x", JSONObject.wrap(model._region0_null_x));
        // Send _taken_transitions
        json.put("_taken_transitions", JSONObject.wrap(model._taken_transitions));
        
        System.out.println(json.toString());
    }
    
    public static void main(String[] args) {
        
        
        // Initialize 
        model.reset();
        
        sendVariables();

        
        while (true) {
            
        
           // Read inputs
           receiveVariables();

           
           _tickstart = System.nanoTime();

        
           // Reaction of model
           model.tick();
           
           _ticktime = System.nanoTime() - _tickstart;

           
           // Send outputs
           sendVariables();

           
           
        }
    }
    
}