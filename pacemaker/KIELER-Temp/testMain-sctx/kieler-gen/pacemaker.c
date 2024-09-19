/*
 * Automatically generated C code by
 * KIELER SCCharts - The Key to Efficient Modeling
 *
 * http://rtsys.informatik.uni-kiel.de/kieler
 */

#include "timing.h"
#include <stdio.h>

#include "pacemaker.h"

void logic(TickData* d) {
  d->VRP_ACTIVE = 0;
  d->URI_ACTIVE = 0;
  d->PVARP_ACTIVE = 0;
  d->LRI_ACTIVE = 0;
  d->AP = 0;
  d->VP = 0;
  d->_g85 = d->_pg54;
  if (d->_g85) {
    d->VRP_ACTIVE |= 1;
  }
  d->_g15 = d->_pg12;
  d->_g9 = d->_pg25;
  d->_g10_e1 = !(d->_g15 || d->_g9);
  d->_cg9 = d->VS && !d->VRP_ACTIVE;
  d->_g145 = d->_pg150;
  d->_g146 = d->_g145 && d->VS;
  if (d->_g146) {
    d->_pacemaker_local__Atrig4 = 1;
  }
  d->_g115 = d->_pg136;
  d->_cg115 = d->_pacemaker_local__Atrig4;
  d->_g117 = d->_g115 && !d->_cg115;
  if (d->_g117) {
    d->URI_ACTIVE |= 1;
  }
  d->_g205 = d->_pg197;
  if (d->_g205) {
    d->_region0_null_x += d->deltaT;
  }
  d->_g19 = d->_pg7;
  d->_cg19 = d->VS && !d->VRP_ACTIVE;
  d->_g21 = d->_g19 && !d->_cg19;
  d->_cg21 = d->_region0_null_x >= 300 && !d->URI_ACTIVE;
  d->_g22 = d->_g21 && d->_cg21;
  if (d->_g22) {
    d->_pacemaker_local__Atrig = 1;
  }
  d->sleepT = 1000.0;
  d->_cg15 = d->VS && !d->VRP_ACTIVE;
  d->_g11 = d->_g9 && !d->_cg9 || d->_g15 && !d->_cg15;
  d->_cg11 = d->_region0_null_x < 300.0;
  d->_g12 = d->_g11 && d->_cg11;
  if (d->_g12) {
    d->sleepT = (d->sleepT < (300.0 - d->_region0_null_x)) ? d->sleepT : (300.0 - d->_region0_null_x);
  }
  d->_cg12 = d->_pacemaker_local__Atrig;
  d->_g11 = d->_g11 && !d->_cg11;
  d->_cg13 = d->_pacemaker_local__Atrig;
  d->_g15 = d->_g9 && d->_cg9 || d->_g12 && d->_cg12 || d->_g11 && d->_cg13 || d->_g15 && d->_cg15;
  d->_g9 = !d->_g19;
  d->_g22 = d->_g19 && d->_cg19 || d->_g22;
  d->_g19 = (d->_g10_e1 || d->_g15) && (d->_g9 || d->_g22) && (d->_g15 || d->_g22);
  d->_cg23 = d->VS && !d->VRP_ACTIVE;
  d->_g10_e1 = d->_g19 && d->_cg23;
  if (d->_g10_e1) {
    d->_taken_transitions[1] += 1;
  }
  d->_g20 = d->_g19 && !d->_cg23;
  if (d->_g20) {
    d->VP |= 1;
    d->_taken_transitions[2] += 1;
  }
  d->_g10 = d->_pg193;
  if (d->_g10) {
    d->PVARP_ACTIVE |= 1;
  }
  d->_g20_e2 = d->_pg72;
  d->_g23 = d->_pg49;
  d->_g59_e1 = !(d->_g20_e2 || d->_g23);
  d->_cg58 = d->AS && !d->PVARP_ACTIVE;
  d->_g213 = d->_pg170;
  if (d->_g213) {
    d->_region2_null_x += d->deltaT;
  }
  d->_g68 = d->_pg73;
  d->_cg68 = d->AS && !d->PVARP_ACTIVE;
  d->_g70 = d->_g68 && !d->_cg68;
  d->_cg70 = d->_region2_null_x >= 900;
  d->_g71 = d->_g70 && d->_cg70;
  if (d->_g71) {
    d->_pacemaker_local__Atrig2 = 1;
  }
  d->_cg64 = d->AS && !d->PVARP_ACTIVE;
  d->_g60 = d->_g23 && !d->_cg58 || d->_g20_e2 && !d->_cg64;
  d->_cg60 = d->_region2_null_x < 900.0;
  d->_g61 = d->_g60 && d->_cg60;
  if (d->_g61) {
    d->sleepT = (d->sleepT < (900.0 - d->_region2_null_x)) ? d->sleepT : (900.0 - d->_region2_null_x);
  }
  d->_cg61 = d->_pacemaker_local__Atrig2;
  d->_g60 = d->_g60 && !d->_cg60;
  d->_cg62 = d->_pacemaker_local__Atrig2;
  d->_g64 = d->_g23 && d->_cg58 || d->_g61 && d->_cg61 || d->_g60 && d->_cg62 || d->_g20_e2 && d->_cg64;
  d->_g58 = !d->_g68;
  d->_g68 = d->_g68 && d->_cg68 || d->_g71;
  d->_g71 = (d->_g59_e1 || d->_g64) && (d->_g58 || d->_g68) && (d->_g64 || d->_g68);
  d->_cg72 = d->AS && !d->PVARP_ACTIVE;
  d->_g59 = d->_g71 && !d->_cg72;
  if (d->_g59) {
    d->AP |= 1;
    d->_taken_transitions[7] += 1;
  }
  d->_g59_e1 = d->_pg69_e2;
  d->_cg4 = d->AS || d->AP;
  d->_g69_e2 = d->_GO || d->_g10_e1 || d->_g20 || d->_g59_e1 && !d->_cg4;
  d->_g69 = d->_g59_e1 && d->_cg4;
  if (d->_g69) {
    d->_taken_transitions[0] += 1;
    d->_region0_null_x = 0;
    d->_pacemaker_local__Atrig = 0;
  }
  d->_cg6 = d->_region0_null_x < 300.0;
  d->_g24 = d->_g69 && d->_cg6;
  if (d->_g24) {
    d->sleepT = (d->sleepT < (300.0 - d->_region0_null_x)) ? d->sleepT : (300.0 - d->_region0_null_x);
  }
  d->_cg7 = d->_pacemaker_local__Atrig;
  d->_g25 = d->_g24 && !d->_cg7 || d->_g12 && !d->_cg12;
  d->_g4 = d->_g69 && !d->_cg6;
  d->_cg16 = d->_pacemaker_local__Atrig;
  d->_g12 = d->_g11 && !d->_cg13 || d->_g4 && !d->_cg16;
  d->_g7 = d->_g69 || d->_g21 && !d->_cg21;
  d->_g16 = d->_pg163;
  if (d->_g16) {
    d->_region1_null_x += d->deltaT;
  }
  d->_g13 = d->_pg42;
  d->_cg47 = d->_region1_null_x >= 50;
  d->_g5 = d->_g13 && d->_cg47;
  if (d->_g5) {
    d->_pacemaker_local__Atrig1 = 1;
  }
  d->_g21 = d->_pg195;
  d->_g161 = d->_pg133;
  d->_g173 = d->_pg155;
  d->_g167 = d->_pg111;
  d->_g182_e1 = !(d->_g21 || d->_g161 || d->_g173 || d->_g167);
  d->_g191 = d->_pg196;
  d->_cg191 = d->VP || d->VS;
  d->_g192 = d->_g191 && d->_cg191;
  if (d->_g192) {
    d->_pacemaker_local__Atrig6 = 1;
  }
  d->_g162_e1 = !d->_g161;
  d->_cg161 = d->_pacemaker_local__Atrig6;
  d->_g186 = d->_pg156;
  d->_cg186 = d->_pacemaker_local__Atrig6;
  d->_g188 = d->_g186 && !d->_cg186;
  if (d->_g188) {
    d->_pacemaker_local_x2 += d->deltaT;
  }
  d->_cg177 = d->_pacemaker_local__Atrig6;
  d->_g179 = d->_g21 && !d->_cg177;
  d->_cg179 = d->_pacemaker_local_x2 >= 1100;
  d->_g180 = d->_g179 && d->_cg179;
  if (d->_g180) {
    d->_pacemaker_local__Atrig7 = 1;
  }
  d->_g163 = d->_g161 && !d->_cg161;
  if (d->_g163) {
    d->LRI_ACTIVE |= 1;
  }
  d->_cg163 = d->_pacemaker_local__Atrig7;
  d->_g161 = d->_g161 && d->_cg161 || d->_g163 && d->_cg163;
  d->_g168_e2 = !(d->_g173 || d->_g167);
  d->_cg167 = d->_pacemaker_local__Atrig6;
  d->_cg173 = d->_pacemaker_local__Atrig6;
  d->_g169 = d->_g167 && !d->_cg167 || d->_g173 && !d->_cg173;
  d->_cg169 = d->_pacemaker_local_x2 < 1100.0;
  d->_g170 = d->_g169 && d->_cg169;
  if (d->_g170) {
    d->sleepT = (d->sleepT < (1100.0 - d->_pacemaker_local_x2)) ? d->sleepT : (1100.0 - d->_pacemaker_local_x2);
  }
  d->_cg170 = d->_pacemaker_local__Atrig7;
  d->_g169 = d->_g169 && !d->_cg169;
  d->_cg171 = d->_pacemaker_local__Atrig7;
  d->_g167 = d->_g167 && d->_cg167 || d->_g170 && d->_cg170 || d->_g169 && d->_cg171 || d->_g173 && d->_cg173;
  d->_g173 = !d->_g21;
  d->_g177 = d->_g21 && d->_cg177 || d->_g180;
  d->_g180 = (d->_g162_e1 || d->_g161) && (d->_g168_e2 || d->_g167) && (d->_g173 || d->_g177) && (d->_g161 || d->_g167 || d->_g177);
  d->_cg181 = d->_pacemaker_local__Atrig6;
  d->_g178 = d->_g180 && !d->_cg181;
  if (d->_g178) {
    d->_taken_transitions[18] += 1;
    d->_pacemaker_local__CFSterm2 = 1;
  }
  d->_g168 = d->_g180 && d->_cg181 || d->_g178;
  d->_g168_e2 = !d->_g186;
  d->_cg188 = d->_pacemaker_local__CFSterm2;
  d->_g178_e3 = d->_g186 && d->_cg186 || d->_g188 && d->_cg188;
  d->_g162_e1 = !d->_g191;
  d->_g162 = d->_g191 && !d->_cg191;
  d->_cg194 = d->_pacemaker_local__CFSterm2;
  d->_g181 = d->_g192 || d->_g162 && d->_cg194;
  d->_g183 = (d->_g182_e1 || d->_g168) && (d->_g168_e2 || d->_g178_e3) && (d->_g162_e1 || d->_g181) && (d->_g168 || d->_g178_e3 || d->_g181);
  d->_cg195 = d->_pacemaker_local__Atrig6;
  d->_g186 = d->_g183 && !d->_cg195;
  if (d->_g186) {
    d->VP |= 1;
    d->_taken_transitions[17] += 1;
  }
  d->_g191 = d->_pg48;
  d->_cg29 = d->VS || d->VP;
  d->_g192 = d->_g191 && d->_cg29;
  if (d->_g192) {
    d->_taken_transitions[3] += 1;
    d->_region1_null_x = 0;
    d->_pacemaker_local__Atrig1 = 0;
  }
  d->_g193_e3 = d->_g192 || d->_g10;
  d->_cg32 = d->_pacemaker_local__Atrig1;
  d->_g193 = d->_g193_e3 && !d->_cg32;
  d->_g182 = !d->_g193;
  d->_g187 = d->_g193_e3 && d->_cg32;
  d->_g187_e2 = d->_pg37;
  d->_g182_e1 = d->_pg44;
  d->_g35 = d->_g192 || d->_g187_e2 || d->_g182_e1;
  d->_cg37 = d->_region1_null_x < 50.0;
  d->_g32 = d->_g35 && !d->_cg37;
  d->_cg42 = d->_pacemaker_local__Atrig1;
  d->_g44 = d->_g32 && !d->_cg42;
  d->_g41 = d->_g35 && d->_cg37;
  if (d->_g41) {
    d->sleepT = (d->sleepT < (50.0 - d->_region1_null_x)) ? d->sleepT : (50.0 - d->_region1_null_x);
  }
  d->_cg38 = d->_pacemaker_local__Atrig1;
  d->_g37 = d->_g41 && !d->_cg38;
  d->_g39_e2 = !(d->_g44 || d->_g37);
  d->_g38 = d->_g41 && d->_cg38 || d->_g32 && d->_cg42;
  d->_g42 = d->_g192 || d->_g13 && !d->_cg47;
  d->_g30 = !d->_g42;
  d->_g47 = (d->_g182 || d->_g187) && (d->_g39_e2 || d->_g38) && (d->_g30 || d->_g5) && (d->_g187 || d->_g38 || d->_g5);
  if (d->_g47) {
    d->_taken_transitions[4] += 1;
  }
  d->_g48 = d->_GO || d->_g47 || d->_g191 && !d->_cg29;
  d->_g33_e1 = d->_g71 && d->_cg72;
  if (d->_g33_e1) {
    d->_taken_transitions[6] += 1;
  }
  d->_g39 = d->_pg48_e3;
  d->_cg53 = d->VS || d->VP;
  d->_g48_e3 = d->_GO || d->_g33_e1 || d->_g59 || d->_g39 && !d->_cg53;
  d->_g39_e2 = d->_g39 && d->_cg53;
  if (d->_g39_e2) {
    d->_taken_transitions[5] += 1;
    d->_region2_null_x = 0;
    d->_pacemaker_local__Atrig2 = 0;
  }
  d->_cg55 = d->_region2_null_x < 900.0;
  d->_g33 = d->_g39_e2 && d->_cg55;
  if (d->_g33) {
    d->sleepT = (d->sleepT < (900.0 - d->_region2_null_x)) ? d->sleepT : (900.0 - d->_region2_null_x);
  }
  d->_cg56 = d->_pacemaker_local__Atrig2;
  d->_g49 = d->_g33 && !d->_cg56 || d->_g61 && !d->_cg61;
  d->_g29 = d->_g39_e2 && !d->_cg55;
  d->_cg65 = d->_pacemaker_local__Atrig2;
  d->_g72 = d->_g60 && !d->_cg62 || d->_g29 && !d->_cg65;
  d->_g73 = d->_g39_e2 || d->_g70 && !d->_cg70;
  d->_g74 = d->_pg79;
  d->_cg78 = d->VS || d->VP;
  d->_g53 = d->_g74 && d->_cg78;
  if (d->_g53) {
    d->_taken_transitions[8] += 1;
    d->_pacemaker_local_x = 0;
    d->_pacemaker_local__CFSterm = 0;
    d->_pacemaker_local__Atrig3 = 0;
  }
  d->_g56 = d->_pg98;
  if (d->_g56) {
    d->_pacemaker_local_x += d->deltaT;
  }
  d->_g61 = d->_pg62;
  d->_cg97 = d->_pacemaker_local_x >= 150;
  d->_g62 = d->_g53 || d->_g61 && !d->_cg97;
  d->_g65 = d->_g61 && d->_cg97;
  if (d->_g65) {
    d->_pacemaker_local__Atrig3 = 1;
  }
  d->_g70 = d->_g53 || d->_g85;
  d->_cg82 = d->_pacemaker_local__Atrig3;
  d->_g54 = d->_g70 && !d->_cg82;
  d->_g97 = d->_pg90;
  d->_g85 = d->_pg93;
  d->_g91 = d->_g53 || d->_g97 || d->_g85;
  d->_cg87 = d->_pacemaker_local_x < 150.0;
  d->_g94 = d->_g91 && !d->_cg87;
  d->_cg92 = d->_pacemaker_local__Atrig3;
  d->_g93 = d->_g94 && !d->_cg92;
  d->_g87 = d->_g91 && d->_cg87;
  if (d->_g87) {
    d->sleepT = (d->sleepT < (150.0 - d->_pacemaker_local_x)) ? d->sleepT : (150.0 - d->_pacemaker_local_x);
  }
  d->_cg88 = d->_pacemaker_local__Atrig3;
  d->_g90 = d->_g87 && !d->_cg88;
  d->_g99_e1 = !(d->_g62 || d->_g54 || d->_g93 || d->_g90);
  d->_g83_e1 = !d->_g54;
  d->_g82 = d->_g70 && d->_cg82;
  d->_g89_e2 = !(d->_g93 || d->_g90);
  d->_g88 = d->_g87 && d->_cg88 || d->_g94 && d->_cg92;
  d->_g92 = !d->_g62;
  d->_g83_e1 = (d->_g83_e1 || d->_g82) && (d->_g89_e2 || d->_g88) && (d->_g92 || d->_g65) && (d->_g82 || d->_g88 || d->_g65);
  if (d->_g83_e1) {
    d->_taken_transitions[10] += 1;
    d->_pacemaker_local__CFSterm = 1;
  }
  d->_g89_e2 = d->_g53 || d->_g56;
  d->_cg101 = d->_pacemaker_local__CFSterm;
  d->_g98 = d->_g89_e2 && !d->_cg101;
  d->_g89 = !d->_g98;
  d->_g83 = d->_g89_e2 && d->_cg101;
  d->_g98_e3 = (d->_g99_e1 || d->_g83_e1) && (d->_g89 || d->_g83) && (d->_g83_e1 || d->_g83);
  if (d->_g98_e3) {
    d->_taken_transitions[9] += 1;
  }
  d->_g79 = d->_GO || d->_g98_e3 || d->_g74 && !d->_cg78;
  d->_g104 = d->_pg149;
  d->_g101 = d->_pg109;
  d->_g102 = d->_pg147_e3;
  d->_g99_e1 = !(d->_g104 || d->_g115 || d->_g101 || d->_g102);
  d->_g102_e2 = !d->_g115;
  d->_g99 = d->_pg110;
  d->_cg140 = d->_pacemaker_local__Atrig4;
  d->_g105 = d->_g99 && !d->_cg140;
  if (d->_g105) {
    d->_pacemaker_local_x1 += d->deltaT;
  }
  d->_cg131 = d->_pacemaker_local__Atrig4;
  d->_g78 = d->_g104 && !d->_cg131;
  d->_cg133 = d->_pacemaker_local_x1 >= 600;
  d->_g134 = d->_g78 && d->_cg133;
  if (d->_g134) {
    d->_pacemaker_local__Atrig5 = 1;
  }
  d->_cg117 = d->_pacemaker_local__Atrig5;
  d->_g115 = d->_g115 && d->_cg115 || d->_g117 && d->_cg117;
  d->_g122_e2 = !(d->_g101 || d->_g102);
  d->_cg121 = d->_pacemaker_local__Atrig4;
  d->_cg127 = d->_pacemaker_local__Atrig4;
  d->_g123 = d->_g102 && !d->_cg121 || d->_g101 && !d->_cg127;
  d->_cg123 = d->_pacemaker_local_x1 < 600.0;
  d->_g124 = d->_g123 && d->_cg123;
  if (d->_g124) {
    d->sleepT = (d->sleepT < (600.0 - d->_pacemaker_local_x1)) ? d->sleepT : (600.0 - d->_pacemaker_local_x1);
  }
  d->_cg124 = d->_pacemaker_local__Atrig5;
  d->_g123 = d->_g123 && !d->_cg123;
  d->_cg125 = d->_pacemaker_local__Atrig5;
  d->_g127 = d->_g102 && d->_cg121 || d->_g124 && d->_cg124 || d->_g123 && d->_cg125 || d->_g101 && d->_cg127;
  d->_g121 = !d->_g104;
  d->_g134 = d->_g104 && d->_cg131 || d->_g134;
  d->_g131 = (d->_g102_e2 || d->_g115) && (d->_g122_e2 || d->_g127) && (d->_g121 || d->_g134) && (d->_g115 || d->_g127 || d->_g134);
  d->_cg135 = d->_pacemaker_local__Atrig4;
  d->_g132_e3 = d->_g131 && !d->_cg135;
  if (d->_g132_e3) {
    d->_taken_transitions[14] += 1;
    d->_pacemaker_local__CFSterm1 = 1;
  }
  d->_g132 = d->_g131 && d->_cg135 || d->_g132_e3;
  d->_g122 = !d->_g99;
  d->_cg142 = d->_pacemaker_local__CFSterm1;
  d->_g116 = d->_g99 && d->_cg140 || d->_g105 && d->_cg142;
  d->_g122_e2 = !d->_g145;
  d->_g116_e1 = d->_g145 && !d->VS;
  d->_cg148 = d->_pacemaker_local__CFSterm1;
  d->_g135 = d->_g146 || d->_g116_e1 && d->_cg148;
  d->_g137 = (d->_g99_e1 || d->_g132) && (d->_g122 || d->_g116) && (d->_g122_e2 || d->_g135) && (d->_g132 || d->_g116 || d->_g135);
  d->_cg149 = d->_pacemaker_local__Atrig4;
  d->_g140 = d->_g137 && !d->_cg149;
  if (d->_g140) {
    d->_taken_transitions[13] += 1;
  }
  d->_g145 = d->_pg146;
  d->_cg109 = d->VP || d->VS;
  d->_g146 = d->_GO || d->_g140 || d->_g145 && !d->_cg109;
  d->_g136_e1 = d->_g145 && d->_cg109;
  if (d->_g136_e1) {
    d->_taken_transitions[11] += 1;
  }
  d->_g141 = d->_g137 && d->_cg149;
  if (d->_g141) {
    d->_taken_transitions[12] += 1;
  }
  d->_g141_e2 = d->_g136_e1 || d->_g141;
  if (d->_g141_e2) {
    d->_pacemaker_local_x1 = 0;
    d->_pacemaker_local__CFSterm1 = 0;
    d->_pacemaker_local__Atrig4 = 0;
    d->_pacemaker_local__Atrig5 = 0;
  }
  d->_cg113 = d->_pacemaker_local__Atrig5;
  d->_g136 = d->_g141_e2 && !d->_cg113 || d->_g117 && !d->_cg117;
  d->_cg118 = d->_pacemaker_local_x1 < 600.0;
  d->_g147 = d->_g141_e2 && d->_cg118;
  if (d->_g147) {
    d->sleepT = (d->sleepT < (600.0 - d->_pacemaker_local_x1)) ? d->sleepT : (600.0 - d->_pacemaker_local_x1);
  }
  d->_cg119 = d->_pacemaker_local__Atrig5;
  d->_g147_e3 = d->_g147 && !d->_cg119 || d->_g124 && !d->_cg124;
  d->_g151 = d->_g141_e2 && !d->_cg118;
  d->_cg128 = d->_pacemaker_local__Atrig5;
  d->_g109 = d->_g123 && !d->_cg125 || d->_g151 && !d->_cg128;
  d->_g149 = d->_g141_e2 || d->_g78 && !d->_cg133;
  d->_cg138 = d->_pacemaker_local__CFSterm1;
  d->_g110 = d->_g141_e2 && !d->_cg138 || d->_g105 && !d->_cg142;
  d->_g150 = d->_g141_e2 || d->_g116_e1 && !d->_cg148;
  d->_g117 = d->_pg124;
  d->_cg155 = d->VP || d->VS;
  d->_g124 = d->_GO || d->_g117 && !d->_cg155;
  d->_g119 = d->_g117 && d->_cg155;
  if (d->_g119) {
    d->_taken_transitions[15] += 1;
  }
  d->_g128 = d->_g183 && d->_cg195;
  if (d->_g128) {
    d->_taken_transitions[16] += 1;
  }
  d->_g125 = d->_g119 || d->_g128 || d->_g186;
  if (d->_g125) {
    d->_pacemaker_local_x2 = 0;
    d->_pacemaker_local__CFSterm2 = 0;
    d->_pacemaker_local__Atrig6 = 0;
    d->_pacemaker_local__Atrig7 = 0;
  }
  d->_cg159 = d->_pacemaker_local__Atrig7;
  d->_g133 = d->_g125 && !d->_cg159 || d->_g163 && !d->_cg163;
  d->_cg164 = d->_pacemaker_local_x2 < 1100.0;
  d->_g142 = d->_g125 && d->_cg164;
  if (d->_g142) {
    d->sleepT = (d->sleepT < (1100.0 - d->_pacemaker_local_x2)) ? d->sleepT : (1100.0 - d->_pacemaker_local_x2);
  }
  d->_cg165 = d->_pacemaker_local__Atrig7;
  d->_g111 = d->_g142 && !d->_cg165 || d->_g170 && !d->_cg170;
  d->_g148 = d->_g125 && !d->_cg164;
  d->_cg174 = d->_pacemaker_local__Atrig7;
  d->_g155 = d->_g169 && !d->_cg171 || d->_g148 && !d->_cg174;
  d->_g195 = d->_g125 || d->_g179 && !d->_cg179;
  d->_cg184 = d->_pacemaker_local__CFSterm2;
  d->_g156 = d->_g125 && !d->_cg184 || d->_g188 && !d->_cg188;
  d->_g196 = d->_g125 || d->_g162 && !d->_cg194;
  d->_g197 = d->_GO || d->_g205;
  d->_g163 = d->_GO || d->_g16;
  d->_g170 = d->_GO || d->_g213;
}

void reset(TickData* d) {
  d->_GO = 1;
  d->_TERM = 0;
  d->_region0_null_x = 0;
  d->_region1_null_x = 0;
  d->_region2_null_x = 0;
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
  d->_pg54 = 0;
  d->_pg12 = 0;
  d->_pg25 = 0;
  d->_pg150 = 0;
  d->_pg136 = 0;
  d->_pg197 = 0;
  d->_pg7 = 0;
  d->_pg193 = 0;
  d->_pg72 = 0;
  d->_pg49 = 0;
  d->_pg170 = 0;
  d->_pg73 = 0;
  d->_pg69_e2 = 0;
  d->_pg163 = 0;
  d->_pg42 = 0;
  d->_pg195 = 0;
  d->_pg133 = 0;
  d->_pg155 = 0;
  d->_pg111 = 0;
  d->_pg196 = 0;
  d->_pg156 = 0;
  d->_pg48 = 0;
  d->_pg37 = 0;
  d->_pg44 = 0;
  d->_pg48_e3 = 0;
  d->_pg79 = 0;
  d->_pg98 = 0;
  d->_pg62 = 0;
  d->_pg90 = 0;
  d->_pg93 = 0;
  d->_pg149 = 0;
  d->_pg109 = 0;
  d->_pg147_e3 = 0;
  d->_pg110 = 0;
  d->_pg146 = 0;
  d->_pg124 = 0;
}

void tick(TickData* d) {
  logic(d);

  d->_pg54 = d->_g54;
  d->_pg12 = d->_g12;
  d->_pg25 = d->_g25;
  d->_pg150 = d->_g150;
  d->_pg136 = d->_g136;
  d->_pg197 = d->_g197;
  d->_pg7 = d->_g7;
  d->_pg193 = d->_g193;
  d->_pg72 = d->_g72;
  d->_pg49 = d->_g49;
  d->_pg170 = d->_g170;
  d->_pg73 = d->_g73;
  d->_pg69_e2 = d->_g69_e2;
  d->_pg163 = d->_g163;
  d->_pg42 = d->_g42;
  d->_pg195 = d->_g195;
  d->_pg133 = d->_g133;
  d->_pg155 = d->_g155;
  d->_pg111 = d->_g111;
  d->_pg196 = d->_g196;
  d->_pg156 = d->_g156;
  d->_pg48 = d->_g48;
  d->_pg37 = d->_g37;
  d->_pg44 = d->_g44;
  d->_pg48_e3 = d->_g48_e3;
  d->_pg79 = d->_g79;
  d->_pg98 = d->_g98;
  d->_pg62 = d->_g62;
  d->_pg90 = d->_g90;
  d->_pg93 = d->_g93;
  d->_pg149 = d->_g149;
  d->_pg109 = d->_g109;
  d->_pg147_e3 = d->_g147_e3;
  d->_pg110 = d->_g110;
  d->_pg146 = d->_g146;
  d->_pg124 = d->_g124;
  d->_GO = 0;
}
