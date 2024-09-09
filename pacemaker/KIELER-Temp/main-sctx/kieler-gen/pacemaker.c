/*
 * Automatically generated C code by
 * KIELER SCCharts - The Key to Efficient Modeling
 *
 * http://rtsys.informatik.uni-kiel.de/kieler
 */

#include "pacemaker.h"

void logic(TickData* d) {
  d->_g4 = d->_pg3;
  d->_g78 = d->_g4 && !d->AS;
  d->_g3 = d->_GO || d->_g78 && !d->VS;
  d->_g4 = d->_g4 && d->AS;
  if (d->_g4) {
    d->_taken_transitions[0] += 1;
  }
  d->_g184 = d->_pg120;
  if (d->_g184) {
    d->_region0_null_x += d->deltaT;
  }
  d->_g59 = d->_pg78;
  d->_g53 = d->_pg47_e2;
  d->_g54_e1 = !(d->_g59 || d->_g53);
  d->_g63 = d->_pg48;
  d->_g65 = d->_g63 && !d->AS;
  d->_cg65 = d->_region0_null_x >= 8;
  d->_g66 = d->_g65 && d->_cg65;
  if (d->_g66) {
    d->_pacemaker_local__Atrig4 = 1;
  }
  d->sleepT = 1000.0;
  d->_g55 = d->_g53 && !d->AS || d->_g59 && !d->AS;
  d->_cg55 = d->_region0_null_x < 8.0;
  d->_g56 = d->_g55 && d->_cg55;
  if (d->_g56) {
    d->sleepT = (d->sleepT < (8.0 - d->_region0_null_x)) ? d->sleepT : (8.0 - d->_region0_null_x);
  }
  d->_cg56 = d->_pacemaker_local__Atrig4;
  d->_g55 = d->_g55 && !d->_cg55;
  d->_cg57 = d->_pacemaker_local__Atrig4;
  d->_g59 = d->_g53 && d->AS || d->_g56 && d->_cg56 || d->_g55 && d->_cg57 || d->_g59 && d->AS;
  d->_g53 = !d->_g63;
  d->_g66 = d->_g63 && d->AS || d->_g66;
  d->_g63 = (d->_g54_e1 || d->_g59) && (d->_g53 || d->_g66) && (d->_g59 || d->_g66);
  d->_g64 = d->_g63 && !d->AS;
  if (d->_g64) {
    d->_taken_transitions[11] += 1;
  }
  d->_g54_e1 = d->_g63 && d->AS || d->_g64;
  d->_g54 = d->_g54_e1 && d->AS;
  if (d->_g54) {
    d->_taken_transitions[9] += 1;
  }
  d->_g64_e2 = d->_pg67;
  d->_g67 = d->_GO || d->_g64_e2;
  if (d->_g67) {
    d->VRP_ACTIVE = 0;
    d->URI_ACTIVE = 0;
    d->PVARP_ACTIVE = 0;
    d->LRI_ACTIVE = 0;
    d->AP = 0;
    d->VP = 0;
  }
  d->_g71 = d->_g54_e1 && !d->AS;
  if (d->_g71) {
    d->AP |= 1;
    d->_taken_transitions[10] += 1;
  }
  d->_g192 = d->_g4 || d->_g54 || d->_g71;
  if (d->_g192) {
    d->_region0_null_x = 0;
  }
  d->_g68 = d->_pg102;
  if (d->_g68) {
    d->VRP_ACTIVE |= 1;
  }
  d->_g5 = d->_pg74;
  d->_g70 = d->_pg12_e1;
  d->_g69 = !(d->_g5 || d->_g70);
  d->_cg11 = (d->VS || d->VP) && !d->VRP_ACTIVE;
  d->_g120 = d->_pg163_e1;
  if (d->_g120) {
    d->URI_ACTIVE |= 1;
  }
  d->_g21 = d->_pg6;
  d->_cg21 = (d->VS || d->VP) && !d->VRP_ACTIVE;
  d->_g23 = d->_g21 && !d->_cg21;
  d->_cg23 = d->URI_ACTIVE;
  d->_g24 = d->_g23 && d->_cg23;
  if (d->_g24) {
    d->_pacemaker_local__Atrig = 1;
  }
  d->_g23 = d->_g23 && !d->_cg23;
  d->_cg25 = d->_region0_null_x >= 3;
  d->_g26 = d->_g23 && d->_cg25;
  if (d->_g26) {
    d->_pacemaker_local__Atrig1 = 1;
  }
  d->_g145 = d->_pg128;
  if (d->_g145) {
    d->LRI_ACTIVE |= 1;
  }
  d->_g25 = d->_g23 && !d->_cg25;
  d->_cg27 = d->_region0_null_x < 3 && !d->LRI_ACTIVE;
  d->_g28 = d->_g25 && d->_cg27;
  if (d->_g28) {
    d->_pacemaker_local__Atrig2 = 1;
  }
  d->_cg17 = (d->VS || d->VP) && !d->VRP_ACTIVE;
  d->_g13 = d->_g70 && !d->_cg11 || d->_g5 && !d->_cg17;
  d->_cg13 = d->_region0_null_x < 3.0;
  d->_g14 = d->_g13 && d->_cg13;
  if (d->_g14) {
    d->sleepT = (d->sleepT < (3.0 - d->_region0_null_x)) ? d->sleepT : (3.0 - d->_region0_null_x);
  }
  d->_cg14 = d->_pacemaker_local__Atrig || d->_pacemaker_local__Atrig1 || d->_pacemaker_local__Atrig2;
  d->_g13 = d->_g13 && !d->_cg13;
  d->_cg15 = d->_pacemaker_local__Atrig || d->_pacemaker_local__Atrig1 || d->_pacemaker_local__Atrig2;
  d->_g11 = d->_g70 && d->_cg11 || d->_g14 && d->_cg14 || d->_g13 && d->_cg15 || d->_g5 && d->_cg17;
  d->_g17 = !d->_g21;
  d->_g26 = d->_g21 && d->_cg21 || d->_g24 || d->_g26 || d->_g28;
  d->_g28 = (d->_g69 || d->_g11) && (d->_g17 || d->_g26) && (d->_g11 || d->_g26);
  d->_cg29 = (d->VS || d->VP) && !d->VRP_ACTIVE;
  d->_g21 = d->_g28 && !d->_cg29;
  d->_cg73 = d->_pacemaker_local__Atrig;
  d->_g24 = d->_g21 && d->_cg73;
  if (d->_g24) {
    d->_taken_transitions[4] += 1;
  }
  d->_g22 = d->_g192 || d->_g24;
  if (d->_g22) {
    d->_pacemaker_local__Atrig = 0;
    d->_pacemaker_local__Atrig1 = 0;
    d->_pacemaker_local__Atrig2 = 0;
  }
  d->_cg8 = d->_region0_null_x < 3.0;
  d->_g12 = d->_g22 && d->_cg8;
  if (d->_g12) {
    d->sleepT = (d->sleepT < (3.0 - d->_region0_null_x)) ? d->sleepT : (3.0 - d->_region0_null_x);
  }
  d->_cg9 = d->_pacemaker_local__Atrig || d->_pacemaker_local__Atrig1 || d->_pacemaker_local__Atrig2;
  d->_g12_e1 = d->_g12 && !d->_cg9 || d->_g14 && !d->_cg14;
  d->_g22_e2 = d->_g22 && !d->_cg8;
  d->_cg18 = d->_pacemaker_local__Atrig || d->_pacemaker_local__Atrig1 || d->_pacemaker_local__Atrig2;
  d->_g74 = d->_g13 && !d->_cg15 || d->_g22_e2 && !d->_cg18;
  d->_g6 = d->_g22 || d->_g25 && !d->_cg27;
  d->_g9 = d->_g21 && !d->_cg73;
  d->_cg75 = d->_pacemaker_local__Atrig1;
  d->_g14 = d->_g9 && d->_cg75;
  if (d->_g14) {
    d->_taken_transitions[5] += 1;
  }
  d->_g15 = d->_g9 && !d->_cg75;
  if (d->_g15) {
    d->_taken_transitions[6] += 1;
  }
  d->_g18 = d->_g28 && d->_cg29 || d->_g14 || d->_g15;
  d->_cg30 = (d->VS || d->VP) && !d->VRP_ACTIVE;
  d->_g27 = d->_g18 && d->_cg30;
  if (d->_g27) {
    d->_taken_transitions[2] += 1;
  }
  d->_g7 = d->_g18 && !d->_cg30;
  if (d->_g7) {
    d->VP |= 1;
    d->_taken_transitions[3] += 1;
  }
  d->_g73 = d->_g27 || d->_g7;
  if (d->_g73) {
    d->_region0_null_x = 0;
    d->_pacemaker_local__Atrig3 = 0;
  }
  d->_cg33 = d->_region0_null_x < 5.0;
  d->_g75 = d->_g73 && d->_cg33;
  if (d->_g75) {
    d->sleepT = (d->sleepT < (5.0 - d->_region0_null_x)) ? d->sleepT : (5.0 - d->_region0_null_x);
  }
  d->_cg34 = d->_pacemaker_local__Atrig3;
  d->_g77 = d->_pg43;
  d->_cg46 = d->_region0_null_x >= 5;
  d->_g29 = d->_g77 && d->_cg46;
  if (d->_g29) {
    d->_pacemaker_local__Atrig3 = 1;
  }
  d->_g76 = d->_pg34;
  d->_g30 = d->_pg40;
  d->_g31 = d->_g76 || d->_g30;
  d->_cg37 = d->_region0_null_x < 5.0;
  d->_g72 = d->_g31 && d->_cg37;
  if (d->_g72) {
    d->sleepT = (d->sleepT < (5.0 - d->_region0_null_x)) ? d->sleepT : (5.0 - d->_region0_null_x);
  }
  d->_cg38 = d->_pacemaker_local__Atrig3;
  d->_g34 = d->_g75 && !d->_cg34 || d->_g72 && !d->_cg38;
  d->_g37 = d->_g31 && !d->_cg37;
  d->_cg40 = d->_pacemaker_local__Atrig3;
  d->_g38 = d->_g72 && d->_cg38 || d->_g37 && d->_cg40;
  d->_g43 = d->_g73 && !d->_cg33;
  d->_cg43 = d->_pacemaker_local__Atrig3;
  d->_g40 = d->_g37 && !d->_cg40 || d->_g43 && !d->_cg43;
  d->_g43 = d->_g73 || d->_g77 && !d->_cg46;
  d->_g32 = !(d->_g30 || d->_g76);
  d->_g42 = !d->_g77;
  d->_g36 = (d->_g32 || d->_g38) && (d->_g42 || d->_g29) && (d->_g38 || d->_g29);
  if (d->_g36) {
    d->_taken_transitions[8] += 1;
    d->_taken_transitions[7] += 1;
  }
  d->_g46 = d->_g78 && d->VS;
  if (d->_g46) {
    d->_taken_transitions[1] += 1;
  }
  d->_g39_e1 = d->_g36 || d->_g46;
  if (d->_g39_e1) {
    d->_pacemaker_local__Atrig4 = 0;
  }
  d->_cg50 = d->_region0_null_x < 8.0;
  d->_g39 = d->_g39_e1 && d->_cg50;
  if (d->_g39) {
    d->sleepT = (d->sleepT < (8.0 - d->_region0_null_x)) ? d->sleepT : (8.0 - d->_region0_null_x);
  }
  d->_cg51 = d->_pacemaker_local__Atrig4;
  d->_g47_e2 = d->_g39 && !d->_cg51 || d->_g56 && !d->_cg56;
  d->_g47 = d->_g39_e1 && !d->_cg50;
  d->_cg60 = d->_pacemaker_local__Atrig4;
  d->_g78 = d->_g55 && !d->_cg57 || d->_g47 && !d->_cg60;
  d->_g48 = d->_g39_e1 || d->_g65 && !d->_cg65;
  d->_g79 = d->_pg109;
  d->_cg83 = d->VS || d->VP;
  d->_g51 = d->_g79 && d->_cg83;
  if (d->_g51) {
    d->_taken_transitions[12] += 1;
    d->_pacemaker_local_x = 0;
    d->_pacemaker_local__CFSterm = 0;
    d->_pacemaker_local__Atrig5 = 0;
  }
  d->_g56 = d->_pg88;
  if (d->_g56) {
    d->_pacemaker_local_x += d->deltaT;
  }
  d->_g60 = d->_pg57;
  d->_cg102 = d->_pacemaker_local_x >= 15;
  d->_g57 = d->_g51 || d->_g60 && !d->_cg102;
  d->_g49 = d->_g60 && d->_cg102;
  if (d->_g49) {
    d->_pacemaker_local__Atrig5 = 1;
  }
  d->_g65 = d->_g51 || d->_g68;
  d->_cg87 = d->_pacemaker_local__Atrig5;
  d->_g102 = d->_g65 && !d->_cg87;
  d->_g90 = d->_pg95;
  d->_g99 = d->_pg98;
  d->_g99 = d->_g51 || d->_g90 || d->_g99;
  d->_cg92 = d->_pacemaker_local_x < 15.0;
  d->_g96 = d->_g99 && !d->_cg92;
  d->_cg97 = d->_pacemaker_local__Atrig5;
  d->_g98 = d->_g96 && !d->_cg97;
  d->_g92 = d->_g99 && d->_cg92;
  if (d->_g92) {
    d->sleepT = (d->sleepT < (15.0 - d->_pacemaker_local_x)) ? d->sleepT : (15.0 - d->_pacemaker_local_x);
  }
  d->_cg93 = d->_pacemaker_local__Atrig5;
  d->_g95 = d->_g92 && !d->_cg93;
  d->_g104_e1 = !(d->_g57 || d->_g102 || d->_g98 || d->_g95);
  d->_g88_e1 = !d->_g102;
  d->_g87 = d->_g65 && d->_cg87;
  d->_g94_e2 = !(d->_g98 || d->_g95);
  d->_g97 = d->_g92 && d->_cg93 || d->_g96 && d->_cg97;
  d->_g93 = !d->_g57;
  d->_g88_e1 = (d->_g88_e1 || d->_g87) && (d->_g94_e2 || d->_g97) && (d->_g93 || d->_g49) && (d->_g87 || d->_g97 || d->_g49);
  if (d->_g88_e1) {
    d->_taken_transitions[14] += 1;
    d->_pacemaker_local__CFSterm = 1;
  }
  d->_g103_e3 = d->_g51 || d->_g56;
  d->_cg106 = d->_pacemaker_local__CFSterm;
  d->_g88 = d->_g103_e3 && !d->_cg106;
  d->_g94_e2 = !d->_g88;
  d->_g103 = d->_g103_e3 && d->_cg106;
  d->_g94 = (d->_g104_e1 || d->_g88_e1) && (d->_g94_e2 || d->_g103) && (d->_g88_e1 || d->_g103);
  if (d->_g94) {
    d->_taken_transitions[13] += 1;
  }
  d->_g109 = d->_GO || d->_g94 || d->_g79 && !d->_cg83;
  d->_g84 = d->_pg174;
  d->_g106 = d->_pg114;
  d->_g107_e2 = d->_pg172_e3;
  d->_g104_e1 = d->_pg159;
  d->_g107 = d->_pg154;
  d->_g104 = d->_pg147;
  d->_g110 = !(d->_g120 || d->_g84 || d->_g106 || d->_g107_e2 || d->_g145 || d->_g104_e1 || d->_g107 || d->_g104);
  d->_g83 = d->_pg175;
  if (d->_g83) {
    d->_pacemaker_local_x1 += d->deltaT;
  }
  d->_cg159 = d->_pacemaker_local_x1 >= 10;
  d->_g160 = d->_g104_e1 && d->_cg159;
  if (d->_g160) {
    d->_pacemaker_local__Atrig8 = 1;
  }
  d->_g170 = d->_pg115;
  d->_cg170 = d->VS || d->VP;
  d->_g171 = d->_g170 && d->_cg170;
  if (d->_g171) {
    d->_pacemaker_local__Atrig6 = 1;
  }
  d->_g121_e1 = !d->_g120;
  d->_cg135 = d->_pacemaker_local_x1 >= 9;
  d->_g136 = d->_g84 && d->_cg135;
  if (d->_g136) {
    d->_pacemaker_local__Atrig7 = 1;
  }
  d->_cg120 = d->_pacemaker_local__Atrig7 || d->_pacemaker_local__Atrig6;
  d->_g121 = d->_g120 && d->_cg120;
  d->_g128_e2 = !(d->_g106 || d->_g107_e2);
  d->_g131 = d->_g107_e2 || d->_g106;
  d->_cg126 = d->_pacemaker_local_x1 < 9.0;
  d->_g125 = d->_g131 && d->_cg126;
  if (d->_g125) {
    d->sleepT = (d->sleepT < (9.0 - d->_pacemaker_local_x1)) ? d->sleepT : (9.0 - d->_pacemaker_local_x1);
  }
  d->_cg127 = d->_pacemaker_local__Atrig7 || d->_pacemaker_local__Atrig6;
  d->_g126 = d->_g131 && !d->_cg126;
  d->_cg129 = d->_pacemaker_local__Atrig7 || d->_pacemaker_local__Atrig6;
  d->_g128 = d->_g125 && d->_cg127 || d->_g126 && d->_cg129;
  d->_g137_e3 = !d->_g84;
  d->_g135 = d->_g84 && !d->_cg135;
  d->_cg138 = d->_pacemaker_local__Atrig6;
  d->_g136 = d->_g136 || d->_g135 && d->_cg138;
  d->_g137_e3 = (d->_g121_e1 || d->_g121) && (d->_g128_e2 || d->_g128) && (d->_g137_e3 || d->_g136) && (d->_g121 || d->_g128 || d->_g136);
  d->_cg139 = d->_pacemaker_local__Atrig7;
  d->_g121 = d->_g137_e3 && d->_cg139;
  if (d->_g121) {
    d->_taken_transitions[18] += 1;
    d->_pacemaker_local__Atrig8 = 0;
  }
  d->_g121_e1 = d->_g121 || d->_g145;
  d->_cg142 = d->_pacemaker_local__Atrig8 || d->_pacemaker_local__Atrig6;
  d->_g128 = d->_g121_e1 && !d->_cg142;
  d->_g137 = !d->_g128;
  d->_g128_e2 = d->_g121_e1 && d->_cg142;
  d->_g145 = d->_g121 || d->_g104 || d->_g107;
  d->_cg147 = d->_pacemaker_local_x1 < 10.0;
  d->_g142 = d->_g145 && !d->_cg147;
  d->_cg152 = d->_pacemaker_local__Atrig8 || d->_pacemaker_local__Atrig6;
  d->_g154 = d->_g142 && !d->_cg152;
  d->_g151 = d->_g145 && d->_cg147;
  if (d->_g151) {
    d->sleepT = (d->sleepT < (10.0 - d->_pacemaker_local_x1)) ? d->sleepT : (10.0 - d->_pacemaker_local_x1);
  }
  d->_cg148 = d->_pacemaker_local__Atrig8 || d->_pacemaker_local__Atrig6;
  d->_g147 = d->_g151 && !d->_cg148;
  d->_g149_e2 = !(d->_g154 || d->_g147);
  d->_g152 = d->_g151 && d->_cg148 || d->_g142 && d->_cg152;
  d->_g148 = d->_g121 || d->_g104_e1 && !d->_cg159;
  d->_cg156 = d->_pacemaker_local__Atrig6;
  d->_g159 = d->_g148 && !d->_cg156;
  d->_g140 = !d->_g159;
  d->_g156 = d->_g148 && d->_cg156 || d->_g160;
  d->_g160 = (d->_g137 || d->_g128_e2) && (d->_g149_e2 || d->_g152) && (d->_g140 || d->_g156) && (d->_g128_e2 || d->_g152 || d->_g156);
  d->_cg161 = d->_pacemaker_local__Atrig8;
  d->_g149_e2 = d->_g160 && d->_cg161;
  if (d->_g149_e2) {
    d->_taken_transitions[19] += 1;
    d->_pacemaker_local__CFSterm1 = 1;
  }
  d->_g157 = d->_g149_e2 || d->_g160 && !d->_cg161 || d->_g137_e3 && !d->_cg139;
  d->_g143 = !d->_g83;
  d->_cg166 = d->_pacemaker_local__Atrig6 || d->_pacemaker_local__CFSterm1;
  d->_g149 = d->_g83 && d->_cg166;
  d->_g157_e3 = !d->_g170;
  d->_g143_e1 = d->_g170 && !d->_cg170;
  d->_cg173 = d->_pacemaker_local__CFSterm1;
  d->_g139 = d->_g171 || d->_g143_e1 && d->_cg173;
  d->_g161 = (d->_g110 || d->_g157) && (d->_g143 || d->_g149) && (d->_g157_e3 || d->_g139) && (d->_g157 || d->_g149 || d->_g139);
  d->_cg174 = d->_pacemaker_local__Atrig6;
  d->_g162 = d->_g161 && !d->_cg174;
  if (d->_g162) {
    d->_taken_transitions[17] += 1;
  }
  d->_g170 = d->_pg171;
  d->_cg114 = d->VS || d->VP;
  d->_g171 = d->_GO || d->_g162 || d->_g170 && !d->_cg114;
  d->_g167 = d->_g170 && d->_cg114;
  if (d->_g167) {
    d->_taken_transitions[15] += 1;
  }
  d->_g167_e2 = d->_g161 && d->_cg174;
  if (d->_g167_e2) {
    d->_taken_transitions[16] += 1;
  }
  d->_g163 = d->_g167 || d->_g167_e2;
  if (d->_g163) {
    d->_pacemaker_local_x1 = 0;
    d->_pacemaker_local__CFSterm1 = 0;
    d->_pacemaker_local__Atrig6 = 0;
    d->_pacemaker_local__Atrig7 = 0;
  }
  d->_cg118 = d->_pacemaker_local__Atrig7 || d->_pacemaker_local__Atrig6;
  d->_g163_e1 = d->_g163 && !d->_cg118 || d->_g120 && !d->_cg120;
  d->_cg122 = d->_pacemaker_local_x1 < 9.0;
  d->_g172 = d->_g163 && d->_cg122;
  if (d->_g172) {
    d->sleepT = (d->sleepT < (9.0 - d->_pacemaker_local_x1)) ? d->sleepT : (9.0 - d->_pacemaker_local_x1);
  }
  d->_cg123 = d->_pacemaker_local__Atrig7 || d->_pacemaker_local__Atrig6;
  d->_g172_e3 = d->_g172 && !d->_cg123 || d->_g125 && !d->_cg127;
  d->_g176 = d->_g163 && !d->_cg122;
  d->_cg132 = d->_pacemaker_local__Atrig7 || d->_pacemaker_local__Atrig6;
  d->_g114 = d->_g126 && !d->_cg129 || d->_g176 && !d->_cg132;
  d->_cg133 = d->_pacemaker_local__Atrig6;
  d->_g174 = d->_g163 && !d->_cg133 || d->_g135 && !d->_cg138;
  d->_cg164 = d->_pacemaker_local__Atrig6 || d->_pacemaker_local__CFSterm1;
  d->_g175 = d->_g163 && !d->_cg164 || d->_g83 && !d->_cg166;
  d->_g115 = d->_g163 || d->_g143_e1 && !d->_cg173;
  d->_g120 = d->_GO || d->_g184;
}

void reset(TickData* d) {
  d->_GO = 1;
  d->_TERM = 0;
  d->_region0_null_x = 0;
  d->deltaT = 0.0;
  d->sleepT = 0.0;
  d->_taken_transitions[0] = 0;
  d->_taken_transitions[1] = 0;
  d->_taken_transitions[2] = 0;
  d->_taken_transitions[3] = 0;
  d->_taken_transitions[4] = 0;
  d->_taken_transitions[5] = 0;
  d->_taken_transitions[6] = 0;
  d->_taken_transitions[7] = 0;
  d->_taken_transitions[8] = 0;
  d->_taken_transitions[9] = 0;
  d->_taken_transitions[10] = 0;
  d->_taken_transitions[11] = 0;
  d->_taken_transitions[12] = 0;
  d->_taken_transitions[13] = 0;
  d->_taken_transitions[14] = 0;
  d->_taken_transitions[15] = 0;
  d->_taken_transitions[16] = 0;
  d->_taken_transitions[17] = 0;
  d->_taken_transitions[18] = 0;
  d->_taken_transitions[19] = 0;
  d->_pg3 = 0;
  d->_pg120 = 0;
  d->_pg78 = 0;
  d->_pg47_e2 = 0;
  d->_pg48 = 0;
  d->_pg67 = 0;
  d->_pg102 = 0;
  d->_pg74 = 0;
  d->_pg12_e1 = 0;
  d->_pg163_e1 = 0;
  d->_pg6 = 0;
  d->_pg128 = 0;
  d->_pg43 = 0;
  d->_pg34 = 0;
  d->_pg40 = 0;
  d->_pg109 = 0;
  d->_pg88 = 0;
  d->_pg57 = 0;
  d->_pg95 = 0;
  d->_pg98 = 0;
  d->_pg174 = 0;
  d->_pg114 = 0;
  d->_pg172_e3 = 0;
  d->_pg159 = 0;
  d->_pg154 = 0;
  d->_pg147 = 0;
  d->_pg175 = 0;
  d->_pg115 = 0;
  d->_pg171 = 0;
}

void tick(TickData* d) {
  logic(d);

  d->_pg3 = d->_g3;
  d->_pg120 = d->_g120;
  d->_pg78 = d->_g78;
  d->_pg47_e2 = d->_g47_e2;
  d->_pg48 = d->_g48;
  d->_pg67 = d->_g67;
  d->_pg102 = d->_g102;
  d->_pg74 = d->_g74;
  d->_pg12_e1 = d->_g12_e1;
  d->_pg163_e1 = d->_g163_e1;
  d->_pg6 = d->_g6;
  d->_pg128 = d->_g128;
  d->_pg43 = d->_g43;
  d->_pg34 = d->_g34;
  d->_pg40 = d->_g40;
  d->_pg109 = d->_g109;
  d->_pg88 = d->_g88;
  d->_pg57 = d->_g57;
  d->_pg95 = d->_g95;
  d->_pg98 = d->_g98;
  d->_pg174 = d->_g174;
  d->_pg114 = d->_g114;
  d->_pg172_e3 = d->_g172_e3;
  d->_pg159 = d->_g159;
  d->_pg154 = d->_g154;
  d->_pg147 = d->_g147;
  d->_pg175 = d->_g175;
  d->_pg115 = d->_g115;
  d->_pg171 = d->_g171;
  d->_GO = 0;
}
