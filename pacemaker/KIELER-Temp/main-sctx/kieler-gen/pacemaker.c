/*
 * Automatically generated C code by
 * KIELER SCCharts - The Key to Efficient Modeling
 *
 * http://rtsys.informatik.uni-kiel.de/kieler
 */

#include "pacemaker.h"

void logic(TickData* d) {
  d->_g4 = d->_pg3;
  d->_g73 = d->_g4 && !d->AS;
  d->_g3 = d->_GO || d->_g73 && !d->VS;
  d->_g4 = d->_g4 && d->AS;
  if (d->_g4) {
    d->_taken_transitions[0] += 1;
  }
  d->_g180 = d->_pg145;
  if (d->_g180) {
    d->_region0_null_x += d->deltaT;
  }
  d->_g56 = d->_pg73;
  d->_g50 = d->_pg44_e2;
  d->_g51_e1 = !(d->_g56 || d->_g50);
  d->_g60 = d->_pg45;
  d->_g62 = d->_g60 && !d->AS;
  d->_cg62 = d->_region0_null_x >= 8;
  d->_g63 = d->_g62 && d->_cg62;
  if (d->_g63) {
    d->_pacemaker_local__Atrig3 = 1;
  }
  d->sleepT = 1000.0;
  d->_g52 = d->_g50 && !d->AS || d->_g56 && !d->AS;
  d->_cg52 = d->_region0_null_x < 8.0;
  d->_g53 = d->_g52 && d->_cg52;
  if (d->_g53) {
    d->sleepT = (d->sleepT < (8.0 - d->_region0_null_x)) ? d->sleepT : (8.0 - d->_region0_null_x);
  }
  d->_cg53 = d->_pacemaker_local__Atrig3;
  d->_g52 = d->_g52 && !d->_cg52;
  d->_cg54 = d->_pacemaker_local__Atrig3;
  d->_g56 = d->_g50 && d->AS || d->_g53 && d->_cg53 || d->_g52 && d->_cg54 || d->_g56 && d->AS;
  d->_g50 = !d->_g60;
  d->_g63 = d->_g60 && d->AS || d->_g63;
  d->_g60 = (d->_g51_e1 || d->_g56) && (d->_g50 || d->_g63) && (d->_g56 || d->_g63);
  d->_g51 = d->_g60 && !d->AS;
  if (d->_g51) {
    d->_taken_transitions[10] += 1;
  }
  d->_g51_e1 = d->_g60 && d->AS || d->_g51;
  d->_g61_e2 = d->_g51_e1 && d->AS;
  if (d->_g61_e2) {
    d->_taken_transitions[8] += 1;
  }
  d->_g61 = d->_pg68;
  d->_g68 = d->_GO || d->_g61;
  if (d->_g68) {
    d->VRP_ACTIVE = 0;
    d->URI_ACTIVE = 0;
    d->PVARP_ACTIVE = 0;
    d->LRI_ACTIVE = 0;
    d->AP = 0;
    d->VP = 0;
  }
  d->_g64 = d->_g51_e1 && !d->AS;
  if (d->_g64) {
    d->AP |= 1;
    d->_taken_transitions[9] += 1;
  }
  d->_g188 = d->_g4 || d->_g61_e2 || d->_g64;
  if (d->_g188) {
    d->_region0_null_x = 0;
    d->_pacemaker_local__Atrig = 0;
    d->_pacemaker_local__Atrig1 = 0;
  }
  d->_cg7 = d->_region0_null_x < 3.0;
  d->_g65 = d->_g188 && d->_cg7;
  if (d->_g65) {
    d->sleepT = (d->sleepT < (3.0 - d->_region0_null_x)) ? d->sleepT : (3.0 - d->_region0_null_x);
  }
  d->_cg8 = d->_pacemaker_local__Atrig || d->_pacemaker_local__Atrig1;
  d->_g5 = d->_pg163_e2;
  if (d->_g5) {
    d->URI_ACTIVE |= 1;
  }
  d->_g66 = d->_pg97;
  if (d->_g66) {
    d->VRP_ACTIVE |= 1;
  }
  d->_g67 = d->_pg14;
  d->_cg20 = (d->VS || d->VP) && !d->VRP_ACTIVE;
  d->_g22 = d->_g67 && !d->_cg20;
  d->_cg22 = d->_region0_null_x >= 3 && !d->URI_ACTIVE;
  d->_g23 = d->_g22 && d->_cg22;
  if (d->_g23) {
    d->_pacemaker_local__Atrig = 1;
  }
  d->_g138 = d->_pg115;
  if (d->_g138) {
    d->LRI_ACTIVE |= 1;
  }
  d->_g22 = d->_g22 && !d->_cg22;
  d->_cg24 = d->_region0_null_x < 3 && !d->LRI_ACTIVE;
  d->_g25 = d->_g22 && d->_cg24;
  if (d->_g25) {
    d->_pacemaker_local__Atrig1 = 1;
  }
  d->_g10 = d->_pg8;
  d->_cg10 = (d->VS || d->VP) && !d->VRP_ACTIVE;
  d->_g16 = d->_pg17;
  d->_cg16 = (d->VS || d->VP) && !d->VRP_ACTIVE;
  d->_g12 = d->_g10 && !d->_cg10 || d->_g16 && !d->_cg16;
  d->_cg12 = d->_region0_null_x < 3.0;
  d->_g13 = d->_g12 && d->_cg12;
  if (d->_g13) {
    d->sleepT = (d->sleepT < (3.0 - d->_region0_null_x)) ? d->sleepT : (3.0 - d->_region0_null_x);
  }
  d->_cg13 = d->_pacemaker_local__Atrig || d->_pacemaker_local__Atrig1;
  d->_g8 = d->_g65 && !d->_cg8 || d->_g13 && !d->_cg13;
  d->_g12 = d->_g12 && !d->_cg12;
  d->_cg14 = d->_pacemaker_local__Atrig || d->_pacemaker_local__Atrig1;
  d->_g13 = d->_g10 && d->_cg10 || d->_g13 && d->_cg13 || d->_g12 && d->_cg14 || d->_g16 && d->_cg16;
  d->_g17 = d->_g188 && !d->_cg7;
  d->_cg17 = d->_pacemaker_local__Atrig || d->_pacemaker_local__Atrig1;
  d->_g17 = d->_g12 && !d->_cg14 || d->_g17 && !d->_cg17;
  d->_g14 = d->_g188 || d->_g22 && !d->_cg24;
  d->_g24 = d->_g67 && d->_cg20 || d->_g23 || d->_g25;
  d->_g6 = !(d->_g16 || d->_g10);
  d->_g23 = !d->_g67;
  d->_g25 = (d->_g6 || d->_g13) && (d->_g23 || d->_g24) && (d->_g13 || d->_g24);
  d->_cg26 = (d->VS || d->VP) && !d->VRP_ACTIVE;
  d->_g16 = d->_g25 && !d->_cg26;
  d->_cg70 = d->_pacemaker_local__Atrig;
  d->_g10 = d->_g16 && d->_cg70;
  if (d->_g10) {
    d->_taken_transitions[4] += 1;
  }
  d->_g20 = d->_g16 && !d->_cg70;
  if (d->_g20) {
    d->_taken_transitions[5] += 1;
  }
  d->_g21 = d->_g25 && d->_cg26 || d->_g10 || d->_g20;
  d->_cg27 = (d->VS || d->VP) && !d->VRP_ACTIVE;
  d->_g11 = d->_g21 && d->_cg27;
  if (d->_g11) {
    d->_taken_transitions[2] += 1;
  }
  d->_g21_e2 = d->_g21 && !d->_cg27;
  if (d->_g21_e2) {
    d->VP |= 1;
    d->_taken_transitions[3] += 1;
  }
  d->_g11_e1 = d->_g11 || d->_g21_e2;
  if (d->_g11_e1) {
    d->_region0_null_x = 0;
    d->_pacemaker_local__Atrig2 = 0;
  }
  d->_cg30 = d->_region0_null_x < 5.0;
  d->_g70 = d->_g11_e1 && d->_cg30;
  if (d->_g70) {
    d->sleepT = (d->sleepT < (5.0 - d->_region0_null_x)) ? d->sleepT : (5.0 - d->_region0_null_x);
  }
  d->_cg31 = d->_pacemaker_local__Atrig2;
  d->_g26 = d->_pg37;
  d->_cg43 = d->_region0_null_x >= 5;
  d->_g71 = d->_g26 && d->_cg43;
  if (d->_g71) {
    d->_pacemaker_local__Atrig2 = 1;
  }
  d->_g72 = d->_pg31;
  d->_g27 = d->_pg40;
  d->_g28 = d->_g72 || d->_g27;
  d->_cg34 = d->_region0_null_x < 5.0;
  d->_g69 = d->_g28 && d->_cg34;
  if (d->_g69) {
    d->sleepT = (d->sleepT < (5.0 - d->_region0_null_x)) ? d->sleepT : (5.0 - d->_region0_null_x);
  }
  d->_cg35 = d->_pacemaker_local__Atrig2;
  d->_g31 = d->_g70 && !d->_cg31 || d->_g69 && !d->_cg35;
  d->_g34 = d->_g28 && !d->_cg34;
  d->_cg37 = d->_pacemaker_local__Atrig2;
  d->_g35 = d->_g69 && d->_cg35 || d->_g34 && d->_cg37;
  d->_g40 = d->_g11_e1 && !d->_cg30;
  d->_cg40 = d->_pacemaker_local__Atrig2;
  d->_g40 = d->_g34 && !d->_cg37 || d->_g40 && !d->_cg40;
  d->_g37 = d->_g11_e1 || d->_g26 && !d->_cg43;
  d->_g29 = !(d->_g27 || d->_g72);
  d->_g33 = !d->_g26;
  d->_g39 = (d->_g29 || d->_g35) && (d->_g33 || d->_g71) && (d->_g35 || d->_g71);
  if (d->_g39) {
    d->_taken_transitions[7] += 1;
    d->_taken_transitions[6] += 1;
  }
  d->_g43 = d->_g73 && d->VS;
  if (d->_g43) {
    d->_taken_transitions[1] += 1;
  }
  d->_g36_e1 = d->_g39 || d->_g43;
  if (d->_g36_e1) {
    d->_pacemaker_local__Atrig3 = 0;
  }
  d->_cg47 = d->_region0_null_x < 8.0;
  d->_g44 = d->_g36_e1 && d->_cg47;
  if (d->_g44) {
    d->sleepT = (d->sleepT < (8.0 - d->_region0_null_x)) ? d->sleepT : (8.0 - d->_region0_null_x);
  }
  d->_cg48 = d->_pacemaker_local__Atrig3;
  d->_g44_e2 = d->_g44 && !d->_cg48 || d->_g53 && !d->_cg53;
  d->_g36 = d->_g36_e1 && !d->_cg47;
  d->_cg57 = d->_pacemaker_local__Atrig3;
  d->_g73 = d->_g52 && !d->_cg54 || d->_g36 && !d->_cg57;
  d->_g45 = d->_g36_e1 || d->_g62 && !d->_cg62;
  d->_g74 = d->_pg79;
  d->_cg78 = d->VS || d->VP;
  d->_g48 = d->_g74 && d->_cg78;
  if (d->_g48) {
    d->_taken_transitions[11] += 1;
    d->_pacemaker_local_x = 0;
    d->_pacemaker_local__CFSterm = 0;
    d->_pacemaker_local__Atrig4 = 0;
  }
  d->_g53 = d->_pg98;
  if (d->_g53) {
    d->_pacemaker_local_x += d->deltaT;
  }
  d->_g57 = d->_pg54;
  d->_cg97 = d->_pacemaker_local_x >= 15;
  d->_g54 = d->_g48 || d->_g57 && !d->_cg97;
  d->_g62 = d->_g57 && d->_cg97;
  if (d->_g62) {
    d->_pacemaker_local__Atrig4 = 1;
  }
  d->_g46 = d->_g48 || d->_g66;
  d->_cg82 = d->_pacemaker_local__Atrig4;
  d->_g97 = d->_g46 && !d->_cg82;
  d->_g85 = d->_pg90;
  d->_g94 = d->_pg93;
  d->_g91 = d->_g48 || d->_g85 || d->_g94;
  d->_cg87 = d->_pacemaker_local_x < 15.0;
  d->_g94 = d->_g91 && !d->_cg87;
  d->_cg92 = d->_pacemaker_local__Atrig4;
  d->_g93 = d->_g94 && !d->_cg92;
  d->_g87 = d->_g91 && d->_cg87;
  if (d->_g87) {
    d->sleepT = (d->sleepT < (15.0 - d->_pacemaker_local_x)) ? d->sleepT : (15.0 - d->_pacemaker_local_x);
  }
  d->_cg88 = d->_pacemaker_local__Atrig4;
  d->_g90 = d->_g87 && !d->_cg88;
  d->_g99_e1 = !(d->_g54 || d->_g97 || d->_g93 || d->_g90);
  d->_g83_e1 = !d->_g97;
  d->_g82 = d->_g46 && d->_cg82;
  d->_g89_e2 = !(d->_g93 || d->_g90);
  d->_g88 = d->_g87 && d->_cg88 || d->_g94 && d->_cg92;
  d->_g92 = !d->_g54;
  d->_g83_e1 = (d->_g83_e1 || d->_g82) && (d->_g89_e2 || d->_g88) && (d->_g92 || d->_g62) && (d->_g82 || d->_g88 || d->_g62);
  if (d->_g83_e1) {
    d->_taken_transitions[13] += 1;
    d->_pacemaker_local__CFSterm = 1;
  }
  d->_g89_e2 = d->_g48 || d->_g53;
  d->_cg101 = d->_pacemaker_local__CFSterm;
  d->_g98 = d->_g89_e2 && !d->_cg101;
  d->_g89 = !d->_g98;
  d->_g83 = d->_g89_e2 && d->_cg101;
  d->_g98_e3 = (d->_g99_e1 || d->_g83_e1) && (d->_g89 || d->_g83) && (d->_g83_e1 || d->_g83);
  if (d->_g98_e3) {
    d->_taken_transitions[12] += 1;
  }
  d->_g79 = d->_GO || d->_g98_e3 || d->_g74 && !d->_cg78;
  d->_g104 = d->_pg171;
  d->_g101 = d->_pg170;
  d->_g102 = d->_pg172;
  d->_g99_e1 = d->_pg133;
  d->_g102_e2 = d->_pg124;
  d->_g99 = d->_pg122;
  d->_g105 = !(d->_g5 || d->_g104 || d->_g101 || d->_g102 || d->_g138 || d->_g99_e1 || d->_g102_e2 || d->_g99);
  d->_g78 = !d->_g138;
  d->_g162 = d->_pg134;
  if (d->_g162) {
    d->_pacemaker_local_x1 += d->deltaT;
  }
  d->_cg153 = d->_pacemaker_local_x1 >= 10;
  d->_g154 = d->_g99_e1 && d->_cg153;
  if (d->_g154) {
    d->_pacemaker_local__Atrig7 = 1;
  }
  d->_g166 = d->_pg138;
  d->_cg166 = d->VS || d->VP;
  d->_g167 = d->_g166 && d->_cg166;
  if (d->_g167) {
    d->_pacemaker_local__Atrig5 = 1;
  }
  d->_cg138 = d->_pacemaker_local__Atrig7 || d->_pacemaker_local__Atrig5;
  d->_g139 = d->_g138 && d->_cg138;
  d->_g146_e2 = !(d->_g102_e2 || d->_g99);
  d->_g149 = d->_g99 || d->_g102_e2;
  d->_cg144 = d->_pacemaker_local_x1 < 10.0;
  d->_g143 = d->_g149 && d->_cg144;
  if (d->_g143) {
    d->sleepT = (d->sleepT < (10.0 - d->_pacemaker_local_x1)) ? d->sleepT : (10.0 - d->_pacemaker_local_x1);
  }
  d->_cg145 = d->_pacemaker_local__Atrig7 || d->_pacemaker_local__Atrig5;
  d->_g144 = d->_g149 && !d->_cg144;
  d->_cg147 = d->_pacemaker_local__Atrig7 || d->_pacemaker_local__Atrig5;
  d->_g146 = d->_g143 && d->_cg145 || d->_g144 && d->_cg147;
  d->_g155_e3 = !d->_g99_e1;
  d->_g153 = d->_g99_e1 && !d->_cg153;
  d->_cg156 = d->_pacemaker_local__Atrig5;
  d->_g154 = d->_g154 || d->_g153 && d->_cg156;
  d->_g146 = (d->_g78 || d->_g139) && (d->_g146_e2 || d->_g146) && (d->_g155_e3 || d->_g154) && (d->_g139 || d->_g146 || d->_g154);
  d->_cg157 = d->_pacemaker_local__Atrig7;
  d->_g155 = d->_g146 && d->_cg157;
  if (d->_g155) {
    d->_taken_transitions[18] += 1;
    d->_pacemaker_local__CFSterm1 = 1;
  }
  d->_g146_e2 = !d->_g5;
  d->_cg130 = d->_pacemaker_local_x1 >= 9;
  d->_g139_e1 = d->_g104 && d->_cg130;
  if (d->_g139_e1) {
    d->_pacemaker_local__Atrig6 = 1;
  }
  d->_cg115 = d->_pacemaker_local__Atrig6 || d->_pacemaker_local__Atrig5;
  d->_g139 = d->_g5 && d->_cg115;
  d->_g155_e3 = !(d->_g101 || d->_g102);
  d->_g120 = d->_g102 || d->_g101;
  d->_cg121 = d->_pacemaker_local_x1 < 9.0;
  d->_g126 = d->_g120 && d->_cg121;
  if (d->_g126) {
    d->sleepT = (d->sleepT < (9.0 - d->_pacemaker_local_x1)) ? d->sleepT : (9.0 - d->_pacemaker_local_x1);
  }
  d->_cg122 = d->_pacemaker_local__Atrig6 || d->_pacemaker_local__Atrig5;
  d->_g121 = d->_g120 && !d->_cg121;
  d->_cg124 = d->_pacemaker_local__Atrig6 || d->_pacemaker_local__Atrig5;
  d->_g123 = d->_g126 && d->_cg122 || d->_g121 && d->_cg124;
  d->_g132_e3 = !d->_g104;
  d->_g130 = d->_g104 && !d->_cg130;
  d->_cg133 = d->_pacemaker_local__Atrig5;
  d->_g131 = d->_g139_e1 || d->_g130 && d->_cg133;
  d->_g132_e3 = (d->_g146_e2 || d->_g139) && (d->_g155_e3 || d->_g123) && (d->_g132_e3 || d->_g131) && (d->_g139 || d->_g123 || d->_g131);
  d->_cg134 = d->_pacemaker_local__Atrig6;
  d->_g123 = d->_g155 || d->_g146 && !d->_cg157 || d->_g132_e3 && !d->_cg134;
  d->_g132 = !d->_g162;
  d->_cg162 = d->_pacemaker_local__Atrig5 || d->_pacemaker_local__CFSterm1;
  d->_g123_e2 = d->_g162 && d->_cg162;
  d->_g116 = !d->_g166;
  d->_g116_e1 = d->_g166 && !d->_cg166;
  d->_cg169 = d->_pacemaker_local__CFSterm1;
  d->_g157 = d->_g167 || d->_g116_e1 && d->_cg169;
  d->_g158 = (d->_g105 || d->_g123) && (d->_g132 || d->_g123_e2) && (d->_g116 || d->_g157) && (d->_g123 || d->_g123_e2 || d->_g157);
  d->_cg170 = d->_pacemaker_local__Atrig5;
  d->_g166 = d->_g158 && !d->_cg170;
  if (d->_g166) {
    d->_taken_transitions[16] += 1;
  }
  d->_g167 = d->_pg168_e3;
  d->_cg109 = d->VS || d->VP;
  d->_g168_e3 = d->_GO || d->_g166 || d->_g167 && !d->_cg109;
  d->_g168 = d->_g167 && d->_cg109;
  if (d->_g168) {
    d->_taken_transitions[14] += 1;
  }
  d->_g159_e1 = d->_g158 && d->_cg170;
  if (d->_g159_e1) {
    d->_taken_transitions[15] += 1;
  }
  d->_g163 = d->_g168 || d->_g159_e1;
  if (d->_g163) {
    d->_pacemaker_local_x1 = 0;
    d->_pacemaker_local__CFSterm1 = 0;
    d->_pacemaker_local__Atrig5 = 0;
    d->_pacemaker_local__Atrig6 = 0;
  }
  d->_cg113 = d->_pacemaker_local__Atrig6 || d->_pacemaker_local__Atrig5;
  d->_g163_e2 = d->_g163 && !d->_cg113 || d->_g5 && !d->_cg115;
  d->_cg117 = d->_pacemaker_local_x1 < 9.0;
  d->_g159 = d->_g163 && d->_cg117;
  if (d->_g159) {
    d->sleepT = (d->sleepT < (9.0 - d->_pacemaker_local_x1)) ? d->sleepT : (9.0 - d->_pacemaker_local_x1);
  }
  d->_cg118 = d->_pacemaker_local__Atrig6 || d->_pacemaker_local__Atrig5;
  d->_g172 = d->_g159 && !d->_cg118 || d->_g126 && !d->_cg122;
  d->_g109 = d->_g163 && !d->_cg117;
  d->_cg127 = d->_pacemaker_local__Atrig6 || d->_pacemaker_local__Atrig5;
  d->_g170 = d->_g121 && !d->_cg124 || d->_g109 && !d->_cg127;
  d->_cg128 = d->_pacemaker_local__Atrig5;
  d->_g171 = d->_g163 && !d->_cg128 || d->_g130 && !d->_cg133;
  d->_g110 = d->_g132_e3 && d->_cg134;
  if (d->_g110) {
    d->_taken_transitions[17] += 1;
    d->_pacemaker_local__Atrig7 = 0;
  }
  d->_cg136 = d->_pacemaker_local__Atrig7 || d->_pacemaker_local__Atrig5;
  d->_g115 = d->_g110 && !d->_cg136 || d->_g138 && !d->_cg138;
  d->_cg140 = d->_pacemaker_local_x1 < 10.0;
  d->_g118 = d->_g110 && d->_cg140;
  if (d->_g118) {
    d->sleepT = (d->sleepT < (10.0 - d->_pacemaker_local_x1)) ? d->sleepT : (10.0 - d->_pacemaker_local_x1);
  }
  d->_cg141 = d->_pacemaker_local__Atrig7 || d->_pacemaker_local__Atrig5;
  d->_g122 = d->_g118 && !d->_cg141 || d->_g143 && !d->_cg145;
  d->_g127 = d->_g110 && !d->_cg140;
  d->_cg150 = d->_pacemaker_local__Atrig7 || d->_pacemaker_local__Atrig5;
  d->_g124 = d->_g144 && !d->_cg147 || d->_g127 && !d->_cg150;
  d->_cg151 = d->_pacemaker_local__Atrig5;
  d->_g133 = d->_g110 && !d->_cg151 || d->_g153 && !d->_cg156;
  d->_cg160 = d->_pacemaker_local__Atrig5 || d->_pacemaker_local__CFSterm1;
  d->_g134 = d->_g163 && !d->_cg160 || d->_g162 && !d->_cg162;
  d->_g138 = d->_g163 || d->_g116_e1 && !d->_cg169;
  d->_g145 = d->_GO || d->_g180;
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
  d->_pg3 = 0;
  d->_pg145 = 0;
  d->_pg73 = 0;
  d->_pg44_e2 = 0;
  d->_pg45 = 0;
  d->_pg68 = 0;
  d->_pg163_e2 = 0;
  d->_pg97 = 0;
  d->_pg14 = 0;
  d->_pg115 = 0;
  d->_pg8 = 0;
  d->_pg17 = 0;
  d->_pg37 = 0;
  d->_pg31 = 0;
  d->_pg40 = 0;
  d->_pg79 = 0;
  d->_pg98 = 0;
  d->_pg54 = 0;
  d->_pg90 = 0;
  d->_pg93 = 0;
  d->_pg171 = 0;
  d->_pg170 = 0;
  d->_pg172 = 0;
  d->_pg133 = 0;
  d->_pg124 = 0;
  d->_pg122 = 0;
  d->_pg134 = 0;
  d->_pg138 = 0;
  d->_pg168_e3 = 0;
}

void tick(TickData* d) {
  logic(d);

  d->_pg3 = d->_g3;
  d->_pg145 = d->_g145;
  d->_pg73 = d->_g73;
  d->_pg44_e2 = d->_g44_e2;
  d->_pg45 = d->_g45;
  d->_pg68 = d->_g68;
  d->_pg163_e2 = d->_g163_e2;
  d->_pg97 = d->_g97;
  d->_pg14 = d->_g14;
  d->_pg115 = d->_g115;
  d->_pg8 = d->_g8;
  d->_pg17 = d->_g17;
  d->_pg37 = d->_g37;
  d->_pg31 = d->_g31;
  d->_pg40 = d->_g40;
  d->_pg79 = d->_g79;
  d->_pg98 = d->_g98;
  d->_pg54 = d->_g54;
  d->_pg90 = d->_g90;
  d->_pg93 = d->_g93;
  d->_pg171 = d->_g171;
  d->_pg170 = d->_g170;
  d->_pg172 = d->_g172;
  d->_pg133 = d->_g133;
  d->_pg124 = d->_g124;
  d->_pg122 = d->_g122;
  d->_pg134 = d->_g134;
  d->_pg138 = d->_g138;
  d->_pg168_e3 = d->_g168_e3;
  d->_GO = 0;
}
