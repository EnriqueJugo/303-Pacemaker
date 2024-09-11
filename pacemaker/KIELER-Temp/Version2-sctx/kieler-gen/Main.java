

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

import org.json.*;

public class Main {

    public static pacemaker2 model = new pacemaker2();
    
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
            // Receive AEI_START
            if (json.has("AEI_START")) {
                model.AEI_START = json.getBoolean("AEI_START");
            }
            // Receive AVI_START
            if (json.has("AVI_START")) {
                model.AVI_START = json.getBoolean("AVI_START");
            }
            // Receive A_EVENT
            if (json.has("A_EVENT")) {
                model.A_EVENT = json.getBoolean("A_EVENT");
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
            // Receive V_EVENT
            if (json.has("V_EVENT")) {
                model.V_EVENT = json.getBoolean("V_EVENT");
            }
            // Receive _GO
            if (json.has("_GO")) {
                model._GO = json.getBoolean("_GO");
            }
            // Receive _TERM
            if (json.has("_TERM")) {
                model._TERM = json.getBoolean("_TERM");
            }
            // Receive _cg11
            if (json.has("_cg11")) {
                model._cg11 = json.getBoolean("_cg11");
            }
            // Receive _cg13
            if (json.has("_cg13")) {
                model._cg13 = json.getBoolean("_cg13");
            }
            // Receive _cg14
            if (json.has("_cg14")) {
                model._cg14 = json.getBoolean("_cg14");
            }
            // Receive _cg17
            if (json.has("_cg17")) {
                model._cg17 = json.getBoolean("_cg17");
            }
            // Receive _cg18
            if (json.has("_cg18")) {
                model._cg18 = json.getBoolean("_cg18");
            }
            // Receive _cg20
            if (json.has("_cg20")) {
                model._cg20 = json.getBoolean("_cg20");
            }
            // Receive _cg23
            if (json.has("_cg23")) {
                model._cg23 = json.getBoolean("_cg23");
            }
            // Receive _cg26
            if (json.has("_cg26")) {
                model._cg26 = json.getBoolean("_cg26");
            }
            // Receive _cg32
            if (json.has("_cg32")) {
                model._cg32 = json.getBoolean("_cg32");
            }
            // Receive _cg34
            if (json.has("_cg34")) {
                model._cg34 = json.getBoolean("_cg34");
            }
            // Receive _cg35
            if (json.has("_cg35")) {
                model._cg35 = json.getBoolean("_cg35");
            }
            // Receive _cg38
            if (json.has("_cg38")) {
                model._cg38 = json.getBoolean("_cg38");
            }
            // Receive _cg39
            if (json.has("_cg39")) {
                model._cg39 = json.getBoolean("_cg39");
            }
            // Receive _cg4
            if (json.has("_cg4")) {
                model._cg4 = json.getBoolean("_cg4");
            }
            // Receive _cg41
            if (json.has("_cg41")) {
                model._cg41 = json.getBoolean("_cg41");
            }
            // Receive _cg44
            if (json.has("_cg44")) {
                model._cg44 = json.getBoolean("_cg44");
            }
            // Receive _cg47
            if (json.has("_cg47")) {
                model._cg47 = json.getBoolean("_cg47");
            }
            // Receive _cg6
            if (json.has("_cg6")) {
                model._cg6 = json.getBoolean("_cg6");
            }
            // Receive _g11
            if (json.has("_g11")) {
                model._g11 = json.getBoolean("_g11");
            }
            // Receive _g12
            if (json.has("_g12")) {
                model._g12 = json.getBoolean("_g12");
            }
            // Receive _g14
            if (json.has("_g14")) {
                model._g14 = json.getBoolean("_g14");
            }
            // Receive _g16
            if (json.has("_g16")) {
                model._g16 = json.getBoolean("_g16");
            }
            // Receive _g17
            if (json.has("_g17")) {
                model._g17 = json.getBoolean("_g17");
            }
            // Receive _g18
            if (json.has("_g18")) {
                model._g18 = json.getBoolean("_g18");
            }
            // Receive _g19
            if (json.has("_g19")) {
                model._g19 = json.getBoolean("_g19");
            }
            // Receive _g19_e1
            if (json.has("_g19_e1")) {
                model._g19_e1 = json.getBoolean("_g19_e1");
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
            // Receive _g26
            if (json.has("_g26")) {
                model._g26 = json.getBoolean("_g26");
            }
            // Receive _g27
            if (json.has("_g27")) {
                model._g27 = json.getBoolean("_g27");
            }
            // Receive _g27_e2
            if (json.has("_g27_e2")) {
                model._g27_e2 = json.getBoolean("_g27_e2");
            }
            // Receive _g28
            if (json.has("_g28")) {
                model._g28 = json.getBoolean("_g28");
            }
            // Receive _g32
            if (json.has("_g32")) {
                model._g32 = json.getBoolean("_g32");
            }
            // Receive _g35
            if (json.has("_g35")) {
                model._g35 = json.getBoolean("_g35");
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
            // Receive _g40
            if (json.has("_g40")) {
                model._g40 = json.getBoolean("_g40");
            }
            // Receive _g40_e1
            if (json.has("_g40_e1")) {
                model._g40_e1 = json.getBoolean("_g40_e1");
            }
            // Receive _g41
            if (json.has("_g41")) {
                model._g41 = json.getBoolean("_g41");
            }
            // Receive _g43
            if (json.has("_g43")) {
                model._g43 = json.getBoolean("_g43");
            }
            // Receive _g44
            if (json.has("_g44")) {
                model._g44 = json.getBoolean("_g44");
            }
            // Receive _g47
            if (json.has("_g47")) {
                model._g47 = json.getBoolean("_g47");
            }
            // Receive _g48
            if (json.has("_g48")) {
                model._g48 = json.getBoolean("_g48");
            }
            // Receive _g48_e2
            if (json.has("_g48_e2")) {
                model._g48_e2 = json.getBoolean("_g48_e2");
            }
            // Receive _g49
            if (json.has("_g49")) {
                model._g49 = json.getBoolean("_g49");
            }
            // Receive _g5
            if (json.has("_g5")) {
                model._g5 = json.getBoolean("_g5");
            }
            // Receive _g57
            if (json.has("_g57")) {
                model._g57 = json.getBoolean("_g57");
            }
            // Receive _g6
            if (json.has("_g6")) {
                model._g6 = json.getBoolean("_g6");
            }
            // Receive _g61
            if (json.has("_g61")) {
                model._g61 = json.getBoolean("_g61");
            }
            // Receive _g7
            if (json.has("_g7")) {
                model._g7 = json.getBoolean("_g7");
            }
            // Receive _pacemaker2_local__Atrig
            if (json.has("_pacemaker2_local__Atrig")) {
                model._pacemaker2_local__Atrig = json.getBoolean("_pacemaker2_local__Atrig");
            }
            // Receive _pacemaker2_local__Atrig1
            if (json.has("_pacemaker2_local__Atrig1")) {
                model._pacemaker2_local__Atrig1 = json.getBoolean("_pacemaker2_local__Atrig1");
            }
            // Receive _pg14
            if (json.has("_pg14")) {
                model._pg14 = json.getBoolean("_pg14");
            }
            // Receive _pg18
            if (json.has("_pg18")) {
                model._pg18 = json.getBoolean("_pg18");
            }
            // Receive _pg20
            if (json.has("_pg20")) {
                model._pg20 = json.getBoolean("_pg20");
            }
            // Receive _pg28
            if (json.has("_pg28")) {
                model._pg28 = json.getBoolean("_pg28");
            }
            // Receive _pg35
            if (json.has("_pg35")) {
                model._pg35 = json.getBoolean("_pg35");
            }
            // Receive _pg39
            if (json.has("_pg39")) {
                model._pg39 = json.getBoolean("_pg39");
            }
            // Receive _pg41
            if (json.has("_pg41")) {
                model._pg41 = json.getBoolean("_pg41");
            }
            // Receive _pg44
            if (json.has("_pg44")) {
                model._pg44 = json.getBoolean("_pg44");
            }
            // Receive _pg48_e2
            if (json.has("_pg48_e2")) {
                model._pg48_e2 = json.getBoolean("_pg48_e2");
            }
            // Receive _pg49
            if (json.has("_pg49")) {
                model._pg49 = json.getBoolean("_pg49");
            }
            // Receive _pg5
            if (json.has("_pg5")) {
                model._pg5 = json.getBoolean("_pg5");
            }
            // Receive _region1_null_x
            if (json.has("_region1_null_x")) {
                model._region1_null_x = json.getDouble("_region1_null_x");
            }
            // Receive _region2_null_x
            if (json.has("_region2_null_x")) {
                model._region2_null_x = json.getDouble("_region2_null_x");
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
        // Send AEI_START
        json.put("AEI_START", JSONObject.wrap(model.AEI_START));
        // Send AVI_START
        json.put("AVI_START", JSONObject.wrap(model.AVI_START));
        // Send A_EVENT
        json.put("A_EVENT", JSONObject.wrap(model.A_EVENT));
        // Send LRI_ACTIVE
        json.put("LRI_ACTIVE", JSONObject.wrap(model.LRI_ACTIVE));
        // Send PVARP_ACTIVE
        json.put("PVARP_ACTIVE", JSONObject.wrap(model.PVARP_ACTIVE));
        // Send URI_ACTIVE
        json.put("URI_ACTIVE", JSONObject.wrap(model.URI_ACTIVE));
        // Send VRP_ACTIVE
        json.put("VRP_ACTIVE", JSONObject.wrap(model.VRP_ACTIVE));
        // Send V_EVENT
        json.put("V_EVENT", JSONObject.wrap(model.V_EVENT));
        // Send _GO
        json.put("_GO", JSONObject.wrap(model._GO));
        // Send _TERM
        json.put("_TERM", JSONObject.wrap(model._TERM));
        // Send _cg11
        json.put("_cg11", JSONObject.wrap(model._cg11));
        // Send _cg13
        json.put("_cg13", JSONObject.wrap(model._cg13));
        // Send _cg14
        json.put("_cg14", JSONObject.wrap(model._cg14));
        // Send _cg17
        json.put("_cg17", JSONObject.wrap(model._cg17));
        // Send _cg18
        json.put("_cg18", JSONObject.wrap(model._cg18));
        // Send _cg20
        json.put("_cg20", JSONObject.wrap(model._cg20));
        // Send _cg23
        json.put("_cg23", JSONObject.wrap(model._cg23));
        // Send _cg26
        json.put("_cg26", JSONObject.wrap(model._cg26));
        // Send _cg32
        json.put("_cg32", JSONObject.wrap(model._cg32));
        // Send _cg34
        json.put("_cg34", JSONObject.wrap(model._cg34));
        // Send _cg35
        json.put("_cg35", JSONObject.wrap(model._cg35));
        // Send _cg38
        json.put("_cg38", JSONObject.wrap(model._cg38));
        // Send _cg39
        json.put("_cg39", JSONObject.wrap(model._cg39));
        // Send _cg4
        json.put("_cg4", JSONObject.wrap(model._cg4));
        // Send _cg41
        json.put("_cg41", JSONObject.wrap(model._cg41));
        // Send _cg44
        json.put("_cg44", JSONObject.wrap(model._cg44));
        // Send _cg47
        json.put("_cg47", JSONObject.wrap(model._cg47));
        // Send _cg6
        json.put("_cg6", JSONObject.wrap(model._cg6));
        // Send _g11
        json.put("_g11", JSONObject.wrap(model._g11));
        // Send _g12
        json.put("_g12", JSONObject.wrap(model._g12));
        // Send _g14
        json.put("_g14", JSONObject.wrap(model._g14));
        // Send _g16
        json.put("_g16", JSONObject.wrap(model._g16));
        // Send _g17
        json.put("_g17", JSONObject.wrap(model._g17));
        // Send _g18
        json.put("_g18", JSONObject.wrap(model._g18));
        // Send _g19
        json.put("_g19", JSONObject.wrap(model._g19));
        // Send _g19_e1
        json.put("_g19_e1", JSONObject.wrap(model._g19_e1));
        // Send _g20
        json.put("_g20", JSONObject.wrap(model._g20));
        // Send _g22
        json.put("_g22", JSONObject.wrap(model._g22));
        // Send _g23
        json.put("_g23", JSONObject.wrap(model._g23));
        // Send _g26
        json.put("_g26", JSONObject.wrap(model._g26));
        // Send _g27
        json.put("_g27", JSONObject.wrap(model._g27));
        // Send _g27_e2
        json.put("_g27_e2", JSONObject.wrap(model._g27_e2));
        // Send _g28
        json.put("_g28", JSONObject.wrap(model._g28));
        // Send _g32
        json.put("_g32", JSONObject.wrap(model._g32));
        // Send _g35
        json.put("_g35", JSONObject.wrap(model._g35));
        // Send _g37
        json.put("_g37", JSONObject.wrap(model._g37));
        // Send _g38
        json.put("_g38", JSONObject.wrap(model._g38));
        // Send _g39
        json.put("_g39", JSONObject.wrap(model._g39));
        // Send _g4
        json.put("_g4", JSONObject.wrap(model._g4));
        // Send _g40
        json.put("_g40", JSONObject.wrap(model._g40));
        // Send _g40_e1
        json.put("_g40_e1", JSONObject.wrap(model._g40_e1));
        // Send _g41
        json.put("_g41", JSONObject.wrap(model._g41));
        // Send _g43
        json.put("_g43", JSONObject.wrap(model._g43));
        // Send _g44
        json.put("_g44", JSONObject.wrap(model._g44));
        // Send _g47
        json.put("_g47", JSONObject.wrap(model._g47));
        // Send _g48
        json.put("_g48", JSONObject.wrap(model._g48));
        // Send _g48_e2
        json.put("_g48_e2", JSONObject.wrap(model._g48_e2));
        // Send _g49
        json.put("_g49", JSONObject.wrap(model._g49));
        // Send _g5
        json.put("_g5", JSONObject.wrap(model._g5));
        // Send _g57
        json.put("_g57", JSONObject.wrap(model._g57));
        // Send _g6
        json.put("_g6", JSONObject.wrap(model._g6));
        // Send _g61
        json.put("_g61", JSONObject.wrap(model._g61));
        // Send _g7
        json.put("_g7", JSONObject.wrap(model._g7));
        // Send _pacemaker2_local__Atrig
        json.put("_pacemaker2_local__Atrig", JSONObject.wrap(model._pacemaker2_local__Atrig));
        // Send _pacemaker2_local__Atrig1
        json.put("_pacemaker2_local__Atrig1", JSONObject.wrap(model._pacemaker2_local__Atrig1));
        // Send _pg14
        json.put("_pg14", JSONObject.wrap(model._pg14));
        // Send _pg18
        json.put("_pg18", JSONObject.wrap(model._pg18));
        // Send _pg20
        json.put("_pg20", JSONObject.wrap(model._pg20));
        // Send _pg28
        json.put("_pg28", JSONObject.wrap(model._pg28));
        // Send _pg35
        json.put("_pg35", JSONObject.wrap(model._pg35));
        // Send _pg39
        json.put("_pg39", JSONObject.wrap(model._pg39));
        // Send _pg41
        json.put("_pg41", JSONObject.wrap(model._pg41));
        // Send _pg44
        json.put("_pg44", JSONObject.wrap(model._pg44));
        // Send _pg48_e2
        json.put("_pg48_e2", JSONObject.wrap(model._pg48_e2));
        // Send _pg49
        json.put("_pg49", JSONObject.wrap(model._pg49));
        // Send _pg5
        json.put("_pg5", JSONObject.wrap(model._pg5));
        // Send _region1_null_x
        json.put("_region1_null_x", JSONObject.wrap(model._region1_null_x));
        // Send _region2_null_x
        json.put("_region2_null_x", JSONObject.wrap(model._region2_null_x));
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