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
  d->_g4 = d->_pg3;
  d->_g89 = d->_g4 && !d->AS;
  d->_g3 = d->_GO || (d->_g89 && !d->VS);
  d->_g4 = d->_g4 && d->AS;
  if (d->_g4) {
    d->_taken_transitions[0] += 1;
  }
  d->_g199 = d->_pg158;
  if (d->_g199) {
    d->_region0_null_x += d->deltaT;
  }
  d->_g70 = d->_pg50;
  d->_g64 = d->_pg50_e1;
  d->_g65_e1 = !(d->_g70 || d->_g64);
  d->_g74 = d->_pg89;
  d->_g76 = d->_g74 && !d->AS;
  d->_cg76 = d->_region0_null_x >= AEI_VALUE;
  d->_g77 = d->_g76 && d->_cg76;
  if (d->_g77) {
    d->_pacemaker_local__Atrig4 = 1;
  }
  d->sleepT = 1000.0;
  d->_g66 = (d->_g64 && !d->AS) || (d->_g70 && !d->AS);
  d->_cg66 = d->_region0_null_x < AEI_VALUE;
  d->_g67 = d->_g66 && d->_cg66;
  if (d->_g67) {
    d->sleepT = (d->sleepT < (AEI_VALUE - d->_region0_null_x)) ? d->sleepT : (AEI_VALUE - d->_region0_null_x);
  }
  d->_cg67 = d->_pacemaker_local__Atrig4;
  d->_g66 = d->_g66 && !d->_cg66;
  d->_cg68 = d->_pacemaker_local__Atrig4;
  d->_g70 = (d->_g64 && d->AS) || (d->_g67 && d->_cg67) || (d->_g66 && d->_cg68) || (d->_g70 && d->AS);
  d->_g64 = !d->_g74;
  d->_g77 = (d->_g74 && d->AS) || d->_g77;
  d->_g74 = (d->_g65_e1 || d->_g70) && (d->_g64 || d->_g77) && (d->_g70 || d->_g77);
  d->_g65_e1 = d->_g74 && !d->AS;
  if (d->_g65_e1) {
    d->_taken_transitions[11] += 1;
  }
  d->_g75 = (d->_g74 && d->AS) || d->_g65_e1;
  d->_g65 = d->_g75 && d->AS;
  if (d->_g65) {
    d->_taken_transitions[9] += 1;
  }
  d->_g75_e2 = d->_pg78;
  d->_g78 = d->_GO || d->_g75_e2;
  if (d->_g78) {
    d->VRP_ACTIVE = 0;
    d->URI_ACTIVE = 0;
    d->PVARP_ACTIVE = 0;
    d->LRI_ACTIVE = 0;
    d->AP = 0;
    d->VP = 0;
  }
  d->_g82 = d->_g75 && !d->AS;
  if (d->_g82) {
    d->AP |= 1;
    d->_taken_transitions[10] += 1;
  }
  d->_g207 = d->_g4 || d->_g65 || d->_g82;
  if (d->_g207) {
    d->_region0_null_x = 0;
  }
  d->_g79 = d->_pg76;
  if (d->_g79) {
    d->VRP_ACTIVE |= 1;
  }
  d->_g80 = d->_pg190;
  d->_g5 = d->_pg115;
  d->_g81 = d->_pg189;
  d->_g137 = d->_pg94;
  d->_g172 = d->_pg144;
  d->_g156 = d->_pg191;
  d->_g168 = d->_pg141;
  d->_g162 = d->_pg135;
  d->_g152_e1 = !(d->_g80 || d->_g5 || d->_g81 || d->_g137 || d->_g172 || d->_g156 || d->_g168 || d->_g162);
  d->_pre_VP = d->_reg_VP;
  d->_pre_VS = d->_reg_VS;
  d->_reg_VS = d->VS;
  d->_g185 = d->_pg151;
  d->_cg185 = d->_pre_VS || d->_pre_VP;
  d->_g186 = d->_g185 && d->_cg185;
  if (d->_g186) {
    d->_pacemaker_local__Atrig6 = 1;
  }
  d->_g132_e1 = !d->_g5;
  d->_cg131 = d->_pacemaker_local__Atrig6;
  d->_g180 = d->_pg149;
  d->_cg180 = d->_pacemaker_local__Atrig6;
  d->_g182 = d->_g180 && !d->_cg180;
  if (d->_g182) {
    d->_pacemaker_local_x1 += d->deltaT;
  }
  d->_cg147 = d->_pacemaker_local__Atrig6;
  d->_g149 = d->_g80 && !d->_cg147;
  d->_cg149 = d->_pacemaker_local_x1 >= URI_VALUE;
  d->_g150 = d->_g149 && d->_cg149;
  if (d->_g150) {
    d->_pacemaker_local__Atrig7 = 1;
  }
  d->_g133 = d->_g5 && !d->_cg131;
  if (d->_g133) {
    d->URI_ACTIVE |= 1;
  }
  d->_cg133 = d->_pacemaker_local__Atrig7;
  d->_g131 = (d->_g5 && d->_cg131) || (d->_g133 && d->_cg133);
  d->_g138_e2 = !(d->_g81 || d->_g137);
  d->_cg137 = d->_pacemaker_local__Atrig6;
  d->_cg143 = d->_pacemaker_local__Atrig6;
  d->_g139 = (d->_g137 && !d->_cg137) || (d->_g81 && !d->_cg143);
  d->_cg139 = d->_pacemaker_local_x1 < URI_VALUE;
  d->_g140 = d->_g139 && d->_cg139;
  if (d->_g140) {
    d->sleepT = (d->sleepT < (URI_VALUE - d->_pacemaker_local_x1)) ? d->sleepT : (URI_VALUE - d->_pacemaker_local_x1);
  }
  d->_cg140 = d->_pacemaker_local__Atrig7;
  d->_g139 = d->_g139 && !d->_cg139;
  d->_cg141 = d->_pacemaker_local__Atrig7;
  d->_g143 = (d->_g137 && d->_cg137) || (d->_g140 && d->_cg140) || (d->_g139 && d->_cg141) || (d->_g81 && d->_cg143);
  d->_g137 = !d->_g80;
  d->_g150 = (d->_g80 && d->_cg147) || d->_g150;
  d->_g147 = (d->_g132_e1 || d->_g131) && (d->_g138_e2 || d->_g143) && (d->_g137 || d->_g150) && (d->_g131 || d->_g143 || d->_g150);
  d->_cg151 = d->_pacemaker_local__Atrig6;
  d->_g132 = !d->_g156;
  d->_cg156 = d->_pacemaker_local__Atrig6;
  d->_cg172 = d->_pacemaker_local__Atrig6;
  d->_g138 = d->_g172 && !d->_cg172;
  d->_cg174 = d->_pacemaker_local_x1 >= LRI_VALUE;
  d->_g132_e1 = d->_g138 && d->_cg174;
  if (d->_g132_e1) {
    d->_pacemaker_local__Atrig8 = 1;
  }
  d->_g138_e2 = d->_g156 && !d->_cg156;
  if (d->_g138_e2) {
    d->LRI_ACTIVE |= 1;
  }
  d->_cg158 = d->_pacemaker_local__Atrig8;
  d->_g148_e3 = (d->_g156 && d->_cg156) || (d->_g138_e2 && d->_cg158);
  d->_g148 = !(d->_g168 || d->_g162);
  d->_cg162 = d->_pacemaker_local__Atrig6;
  d->_cg168 = d->_pacemaker_local__Atrig6;
  d->_g156 = (d->_g162 && !d->_cg162) || (d->_g168 && !d->_cg168);
  d->_cg164 = d->_pacemaker_local_x1 < LRI_VALUE;
  d->_g165 = d->_g156 && d->_cg164;
  if (d->_g165) {
    d->sleepT = (d->sleepT < (LRI_VALUE - d->_pacemaker_local_x1)) ? d->sleepT : (LRI_VALUE - d->_pacemaker_local_x1);
  }
  d->_cg165 = d->_pacemaker_local__Atrig8;
  d->_g164 = d->_g156 && !d->_cg164;
  d->_cg166 = d->_pacemaker_local__Atrig8;
  d->_g168 = (d->_g162 && d->_cg162) || (d->_g165 && d->_cg165) || (d->_g164 && d->_cg166) || (d->_g168 && d->_cg168);
  d->_g162 = !d->_g172;
  d->_g175 = (d->_g172 && d->_cg172) || d->_g132_e1;
  d->_g172 = (d->_g132 || d->_g148_e3) && (d->_g148 || d->_g168) && (d->_g162 || d->_g175) && (d->_g148_e3 || d->_g168 || d->_g175);
  d->_cg176 = d->_pacemaker_local__Atrig6;
  d->_g157 = d->_g172 && !d->_cg176;
  if (d->_g157) {
    d->_taken_transitions[19] += 1;
    d->_pacemaker_local__CFSterm1 = 1;
  }
  d->_g157_e1 = (d->_g147 && d->_cg151) || (d->_g172 && d->_cg176) || d->_g157;
  d->_g163 = !d->_g180;
  d->_cg182 = d->_pacemaker_local__CFSterm1;
  d->_g163_e2 = (d->_g180 && d->_cg180) || (d->_g182 && d->_cg182);
  d->_g173_e3 = !d->_g185;
  d->_g173 = d->_g185 && !d->_cg185;
  d->_cg188 = d->_pacemaker_local__CFSterm1;
  d->_g176 = d->_g186 || (d->_g173 && d->_cg188);
  d->_g177 = (d->_g152_e1 || d->_g157_e1) && (d->_g163 || d->_g163_e2) && (d->_g173_e3 || d->_g176) && (d->_g157_e1 || d->_g163_e2 || d->_g176);
  d->_cg189 = d->_pacemaker_local__Atrig6;
  d->_g180 = d->_g177 && !d->_cg189;
  if (d->_g180) {
    d->VP |= 1;
    d->_taken_transitions[17] += 1;
  }
  d->_g185 = d->_pg12_e1;
  d->_g186 = d->_pg12;
  d->_g181 = !(d->_g185 || d->_g186);
  d->_cg11 = (d->VS || d->VP) && !d->VRP_ACTIVE;
  d->_g181_e2 = d->_pg14;
  d->_cg32 = (d->VS || d->VP) && !d->VRP_ACTIVE;
  d->_g187 = d->_g181_e2 && !d->_cg32;
  d->_cg34 = d->URI_ACTIVE;
  d->_g187_e3 = d->_g187 && d->_cg34;
  if (d->_g187_e3) {
    d->_pacemaker_local__Atrig = 1;
  }
  d->_g152_e1 = d->_g187 && !d->_cg34;
  d->_cg36 = d->_region0_null_x >= AVI_VALUE;
  d->_g152 = d->_g152_e1 && d->_cg36;
  if (d->_g152) {
    d->_pacemaker_local__Atrig1 = 1;
  }
  d->_g34 = d->_g152_e1 && !d->_cg36;
  d->_cg38 = !(d->_region0_null_x >= AVI_VALUE) && !d->LRI_ACTIVE;
  d->_g36 = d->_g34 && d->_cg38;
  if (d->_g36) {
    d->_pacemaker_local__Atrig2 = 1;
  }
  d->_cg17 = (d->VS || d->VP) && !d->VRP_ACTIVE;
  d->_g13 = (d->_g186 && !d->_cg11) || (d->_g185 && !d->_cg17);
  d->_cg13 = d->_region0_null_x < AVI_VALUE;
  d->_g14 = d->_g13 && d->_cg13;
  if (d->_g14) {
    d->sleepT = (d->sleepT < (AVI_VALUE - d->_region0_null_x)) ? d->sleepT : (AVI_VALUE - d->_region0_null_x);
  }
  d->_cg14 = d->_pacemaker_local__Atrig || d->_pacemaker_local__Atrig1 || d->_pacemaker_local__Atrig2;
  d->_g13 = d->_g13 && !d->_cg13;
  d->_cg15 = d->_pacemaker_local__Atrig || d->_pacemaker_local__Atrig1 || d->_pacemaker_local__Atrig2;
  d->_g11 = (d->_g186 && d->_cg11) || (d->_g14 && d->_cg14) || (d->_g13 && d->_cg15) || (d->_g185 && d->_cg17);
  d->_g17 = d->_pg9;
  d->_g22 = d->_pg85;
  d->_g23_e2 = !(d->_g17 || d->_g22);
  d->_cg22 = (d->VS || d->VP) && !d->VRP_ACTIVE;
  d->_cg28 = (d->VS || d->VP) && !d->VRP_ACTIVE;
  d->_g24 = (d->_g22 && !d->_cg22) || (d->_g17 && !d->_cg28);
  d->_cg24 = d->_region0_null_x < AVI_VALUE;
  d->_g25 = d->_g24 && d->_cg24;
  if (d->_g25) {
    d->sleepT = (d->sleepT < (AVI_VALUE - d->_region0_null_x)) ? d->sleepT : (AVI_VALUE - d->_region0_null_x);
  }
  d->_cg25 = d->_pacemaker_local__Atrig || d->_pacemaker_local__Atrig1 || d->_pacemaker_local__Atrig2;
  d->_g24 = d->_g24 && !d->_cg24;
  d->_cg26 = d->_pacemaker_local__Atrig || d->_pacemaker_local__Atrig1 || d->_pacemaker_local__Atrig2;
  d->_g22 = (d->_g22 && d->_cg22) || (d->_g25 && d->_cg25) || (d->_g24 && d->_cg26) || (d->_g17 && d->_cg28);
  d->_g28 = !d->_g181_e2;
  d->_g37 = (d->_g181_e2 && d->_cg32) || d->_g187_e3 || d->_g152 || d->_g36;
  d->_g39 = (d->_g181 || d->_g11) && (d->_g23_e2 || d->_g22) && (d->_g28 || d->_g37) && (d->_g11 || d->_g22 || d->_g37);
  d->_cg40 = (d->VS || d->VP) && !d->VRP_ACTIVE;
  d->_g32 = d->_g39 && !d->_cg40;
  d->_cg84 = d->_pacemaker_local__Atrig;
  d->_g35 = d->_g32 && d->_cg84;
  if (d->_g35) {
    d->_taken_transitions[4] += 1;
  }
  d->_g33 = d->_g207 || d->_g35;
  if (d->_g33) {
    d->_pacemaker_local__Atrig = 0;
    d->_pacemaker_local__Atrig1 = 0;
    d->_pacemaker_local__Atrig2 = 0;
  }
  d->_cg8 = d->_region0_null_x < AVI_VALUE;
  d->_g23 = d->_g33 && d->_cg8;
  if (d->_g23) {
    d->sleepT = (d->sleepT < (AVI_VALUE - d->_region0_null_x)) ? d->sleepT : (AVI_VALUE - d->_region0_null_x);
  }
  d->_cg9 = d->_pacemaker_local__Atrig || d->_pacemaker_local__Atrig1 || d->_pacemaker_local__Atrig2;
  d->_g12 = (d->_g23 && !d->_cg9) || (d->_g14 && !d->_cg14);
  d->_g23_e2 = d->_g33 && !d->_cg8;
  d->_cg18 = d->_pacemaker_local__Atrig || d->_pacemaker_local__Atrig1 || d->_pacemaker_local__Atrig2;
  d->_g12_e1 = (d->_g13 && !d->_cg15) || (d->_g23_e2 && !d->_cg18);
  d->_cg19 = d->_region0_null_x < AVI_VALUE;
  d->_g33_e3 = d->_g33 && d->_cg19;
  if (d->_g33_e3) {
    d->sleepT = (d->sleepT < (AVI_VALUE - d->_region0_null_x)) ? d->sleepT : (AVI_VALUE - d->_region0_null_x);
  }
  d->_cg20 = d->_pacemaker_local__Atrig || d->_pacemaker_local__Atrig1 || d->_pacemaker_local__Atrig2;
  d->_g85 = (d->_g33_e3 && !d->_cg20) || (d->_g25 && !d->_cg25);
  d->_g6 = d->_g33 && !d->_cg19;
  d->_cg29 = d->_pacemaker_local__Atrig || d->_pacemaker_local__Atrig1 || d->_pacemaker_local__Atrig2;
  d->_g9 = (d->_g24 && !d->_cg26) || (d->_g6 && !d->_cg29);
  d->_g14 = d->_g33 || (d->_g34 && !d->_cg38);
  d->_g15 = d->_g32 && !d->_cg84;
  d->_cg86 = d->_pacemaker_local__Atrig1;
  d->_g18 = d->_g15 && d->_cg86;
  if (d->_g18) {
    d->_taken_transitions[5] += 1;
  }
  d->_g20 = d->_g15 && !d->_cg86;
  if (d->_g20) {
    d->_taken_transitions[6] += 1;
  }
  d->_g25 = (d->_g39 && d->_cg40) || d->_g18 || d->_g20;
  d->_cg41 = (d->VS || d->VP) && !d->VRP_ACTIVE;
  d->_g26 = d->_g25 && d->_cg41;
  if (d->_g26) {
    d->_taken_transitions[2] += 1;
  }
  d->_g29 = d->_g25 && !d->_cg41;
  if (d->_g29) {
    d->VP |= 1;
    d->_taken_transitions[3] += 1;
  }
  d->_g38 = d->_g26 || d->_g29;
  if (d->_g38) {
    d->_region0_null_x = 0;
    d->_pacemaker_local__Atrig3 = 0;
  }
  d->_cg44 = d->_region0_null_x < PVARP_VALUE;
  d->_g7 = d->_g38 && d->_cg44;
  if (d->_g7) {
    d->sleepT = (d->sleepT < (PVARP_VALUE - d->_region0_null_x)) ? d->sleepT : (PVARP_VALUE - d->_region0_null_x);
  }
  d->_cg45 = d->_pacemaker_local__Atrig3;
  d->_g84 = d->_pg51;
  d->_cg57 = d->_region0_null_x >= PVARP_VALUE;
  d->_g86 = d->_g84 && d->_cg57;
  if (d->_g86) {
    d->_pacemaker_local__Atrig3 = 1;
  }
  d->_g40 = d->_pg42;
  d->_g88 = d->_pg49;
  d->_g87 = d->_g40 || d->_g88;
  d->_cg48 = d->_region0_null_x < PVARP_VALUE;
  d->_g41 = d->_g87 && d->_cg48;
  if (d->_g41) {
    d->sleepT = (d->sleepT < (PVARP_VALUE - d->_region0_null_x)) ? d->sleepT : (PVARP_VALUE - d->_region0_null_x);
  }
  d->_cg49 = d->_pacemaker_local__Atrig3;
  d->_g42 = (d->_g7 && !d->_cg45) || (d->_g41 && !d->_cg49);
  d->_g83 = d->_g87 && !d->_cg48;
  d->_cg51 = d->_pacemaker_local__Atrig3;
  d->_g45 = (d->_g41 && d->_cg49) || (d->_g83 && d->_cg51);
  d->_g48 = d->_g38 && !d->_cg44;
  d->_cg54 = d->_pacemaker_local__Atrig3;
  d->_g49 = (d->_g83 && !d->_cg51) || (d->_g48 && !d->_cg54);
  d->_g51 = d->_g38 || (d->_g84 && !d->_cg57);
  d->_g54 = !(d->_g88 || d->_g40);
  d->_g43 = !d->_g84;
  d->_g53 = (d->_g54 || d->_g45) && (d->_g43 || d->_g86) && (d->_g45 || d->_g86);
  if (d->_g53) {
    d->_taken_transitions[8] += 1;
    d->_taken_transitions[7] += 1;
  }
  d->_g47 = d->_g89 && d->VS;
  if (d->_g47) {
    d->_taken_transitions[1] += 1;
  }
  d->_g57 = d->_g53 || d->_g47;
  if (d->_g57) {
    d->_pacemaker_local__Atrig4 = 0;
  }
  d->_cg61 = d->_region0_null_x < AEI_VALUE;
  d->_g58_e2 = d->_g57 && d->_cg61;
  if (d->_g58_e2) {
    d->sleepT = (d->sleepT < (AEI_VALUE - d->_region0_null_x)) ? d->sleepT : (AEI_VALUE - d->_region0_null_x);
  }
  d->_cg62 = d->_pacemaker_local__Atrig4;
  d->_g50_e1 = (d->_g58_e2 && !d->_cg62) || (d->_g67 && !d->_cg67);
  d->_g58 = d->_g57 && !d->_cg61;
  d->_cg71 = d->_pacemaker_local__Atrig4;
  d->_g50 = (d->_g66 && !d->_cg68) || (d->_g58 && !d->_cg71);
  d->_g89 = d->_g57 || (d->_g76 && !d->_cg76);
  d->_g59 = d->_pg95;
  d->_cg94 = d->VS || d->VP;
  d->_g90 = d->_g59 && d->_cg94;
  if (d->_g90) {
    d->_taken_transitions[12] += 1;
    d->_pacemaker_local_x = 0;
    d->_pacemaker_local__CFSterm = 0;
    d->_pacemaker_local__Atrig5 = 0;
  }
  d->_g62 = d->_pg114_e3;
  if (d->_g62) {
    d->_pacemaker_local_x += d->deltaT;
  }
  d->_g67 = d->_pg68;
  d->_cg113 = d->_pacemaker_local_x >= VRP_VALUE;
  d->_g68 = d->_g90 || (d->_g67 && !d->_cg113);
  d->_g71 = d->_g67 && d->_cg113;
  if (d->_g71) {
    d->_pacemaker_local__Atrig5 = 1;
  }
  d->_g60 = d->_g90 || d->_g79;
  d->_cg98 = d->_pacemaker_local__Atrig5;
  d->_g76 = d->_g60 && !d->_cg98;
  d->_g113 = d->_pg106;
  d->_g101 = d->_pg109;
  d->_g110 = d->_g90 || d->_g113 || d->_g101;
  d->_cg103 = d->_pacemaker_local_x < VRP_VALUE;
  d->_g107 = d->_g110 && !d->_cg103;
  d->_cg108 = d->_pacemaker_local__Atrig5;
  d->_g109 = d->_g107 && !d->_cg108;
  d->_g103 = d->_g110 && d->_cg103;
  if (d->_g103) {
    d->sleepT = (d->sleepT < (VRP_VALUE - d->_pacemaker_local_x)) ? d->sleepT : (VRP_VALUE - d->_pacemaker_local_x);
  }
  d->_cg104 = d->_pacemaker_local__Atrig5;
  d->_g106 = d->_g103 && !d->_cg104;
  d->_g115_e1 = !(d->_g68 || d->_g76 || d->_g109 || d->_g106);
  d->_g99_e1 = !d->_g76;
  d->_g98 = d->_g60 && d->_cg98;
  d->_g105_e2 = !(d->_g109 || d->_g106);
  d->_g104 = (d->_g103 && d->_cg104) || (d->_g107 && d->_cg108);
  d->_g108 = !d->_g68;
  d->_g105_e2 = (d->_g99_e1 || d->_g98) && (d->_g105_e2 || d->_g104) && (d->_g108 || d->_g71) && (d->_g98 || d->_g104 || d->_g71);
  if (d->_g105_e2) {
    d->_taken_transitions[14] += 1;
    d->_pacemaker_local__CFSterm = 1;
  }
  d->_g99_e1 = d->_g90 || d->_g62;
  d->_cg117 = d->_pacemaker_local__CFSterm;
  d->_g114_e3 = d->_g99_e1 && !d->_cg117;
  d->_g105 = !d->_g114_e3;
  d->_g99 = d->_g99_e1 && d->_cg117;
  d->_g114 = (d->_g115_e1 || d->_g105_e2) && (d->_g105 || d->_g99) && (d->_g105_e2 || d->_g99);
  if (d->_g114) {
    d->_taken_transitions[13] += 1;
  }
  d->_g95 = d->_GO || d->_g114 || (d->_g59 && !d->_cg94);
  d->_g120 = d->_pg117;
  d->_cg125 = d->VS || d->VP;
  d->_g117 = d->_GO || (d->_g120 && !d->_cg125);
  d->_g118_e2 = d->_g120 && d->_cg125;
  if (d->_g118_e2) {
    d->_taken_transitions[15] += 1;
  }
  d->_g118 = d->_g177 && d->_cg189;
  if (d->_g118) {
    d->_taken_transitions[16] += 1;
  }
  d->_g115_e1 = d->_g118_e2 || d->_g118 || d->_g180;
  if (d->_g115_e1) {
    d->_pacemaker_local_x1 = 0;
    d->_pacemaker_local__CFSterm1 = 0;
    d->_pacemaker_local__Atrig6 = 0;
    d->_pacemaker_local__Atrig7 = 0;
  }
  d->_cg129 = d->_pacemaker_local__Atrig7;
  d->_g115 = (d->_g115_e1 && !d->_cg129) || (d->_g133 && !d->_cg133);
  d->_cg134 = d->_pacemaker_local_x1 < URI_VALUE;
  d->_g121 = d->_g115_e1 && d->_cg134;
  if (d->_g121) {
    d->sleepT = (d->sleepT < (URI_VALUE - d->_pacemaker_local_x1)) ? d->sleepT : (URI_VALUE - d->_pacemaker_local_x1);
  }
  d->_cg135 = d->_pacemaker_local__Atrig7;
  d->_g94 = (d->_g121 && !d->_cg135) || (d->_g140 && !d->_cg140);
  d->_g125 = d->_g115_e1 && !d->_cg134;
  d->_cg144 = d->_pacemaker_local__Atrig7;
  d->_g189 = (d->_g139 && !d->_cg141) || (d->_g125 && !d->_cg144);
  d->_g190 = d->_g115_e1 || (d->_g149 && !d->_cg149);
  d->_g126 = d->_g147 && !d->_cg151;
  if (d->_g126) {
    d->_taken_transitions[18] += 1;
    d->_pacemaker_local__Atrig8 = 0;
  }
  d->_cg154 = d->_pacemaker_local__Atrig8;
  d->_g191 = (d->_g126 && !d->_cg154) || (d->_g138_e2 && !d->_cg158);
  d->_cg159 = d->_pacemaker_local_x1 < LRI_VALUE;
  d->_g133 = d->_g126 && d->_cg159;
  if (d->_g133) {
    d->sleepT = (d->sleepT < (LRI_VALUE - d->_pacemaker_local_x1)) ? d->sleepT : (LRI_VALUE - d->_pacemaker_local_x1);
  }
  d->_cg160 = d->_pacemaker_local__Atrig8;
  d->_g135 = (d->_g133 && !d->_cg160) || (d->_g165 && !d->_cg165);
  d->_g140 = d->_g126 && !d->_cg159;
  d->_cg169 = d->_pacemaker_local__Atrig8;
  d->_g141 = (d->_g164 && !d->_cg166) || (d->_g140 && !d->_cg169);
  d->_g144 = d->_g126 || (d->_g138 && !d->_cg174);
  d->_cg178 = d->_pacemaker_local__CFSterm1;
  d->_g149 = (d->_g115_e1 && !d->_cg178) || (d->_g182 && !d->_cg182);
  d->_g151 = d->_g115_e1 || (d->_g173 && !d->_cg188);
  d->_g158 = d->_GO || d->_g199;
  d->_reg_VP = d->VP;
}

void reset(TickData* d) {
  d->_GO = 1;
  d->_TERM = 0;
  d->_region0_null_x = 0;
  d->deltaT = 0.0;
  d->sleepT = 0.0;
  d->VRP_ACTIVE = 0;
  d->URI_ACTIVE = 0;
  d->PVARP_ACTIVE = 0;
  d->LRI_ACTIVE = 0;
  d->AP = 0;
  d->VP = 0;
  d->_reg_VP = 0;
  d->_reg_VS = 0;
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
  d->_pg158 = 0;
  d->_pg50 = 0;
  d->_pg50_e1 = 0;
  d->_pg89 = 0;
  d->_pg78 = 0;
  d->_pg76 = 0;
  d->_pg190 = 0;
  d->_pg115 = 0;
  d->_pg189 = 0;
  d->_pg94 = 0;
  d->_pg144 = 0;
  d->_pg191 = 0;
  d->_pg141 = 0;
  d->_pg135 = 0;
  d->_pg151 = 0;
  d->_pg149 = 0;
  d->_pg12_e1 = 0;
  d->_pg12 = 0;
  d->_pg14 = 0;
  d->_pg9 = 0;
  d->_pg85 = 0;
  d->_pg51 = 0;
  d->_pg42 = 0;
  d->_pg49 = 0;
  d->_pg95 = 0;
  d->_pg114_e3 = 0;
  d->_pg68 = 0;
  d->_pg106 = 0;
  d->_pg109 = 0;
  d->_pg117 = 0;
}

void tick(TickData* d) {
  logic(d);

  d->_pg3 = d->_g3;
  d->_pg158 = d->_g158;
  d->_pg50 = d->_g50;
  d->_pg50_e1 = d->_g50_e1;
  d->_pg89 = d->_g89;
  d->_pg78 = d->_g78;
  d->_pg76 = d->_g76;
  d->_pg190 = d->_g190;
  d->_pg115 = d->_g115;
  d->_pg189 = d->_g189;
  d->_pg94 = d->_g94;
  d->_pg144 = d->_g144;
  d->_pg191 = d->_g191;
  d->_pg141 = d->_g141;
  d->_pg135 = d->_g135;
  d->_pg151 = d->_g151;
  d->_pg149 = d->_g149;
  d->_pg12_e1 = d->_g12_e1;
  d->_pg12 = d->_g12;
  d->_pg14 = d->_g14;
  d->_pg9 = d->_g9;
  d->_pg85 = d->_g85;
  d->_pg51 = d->_g51;
  d->_pg42 = d->_g42;
  d->_pg49 = d->_g49;
  d->_pg95 = d->_g95;
  d->_pg114_e3 = d->_g114_e3;
  d->_pg68 = d->_g68;
  d->_pg106 = d->_g106;
  d->_pg109 = d->_g109;
  d->_pg117 = d->_g117;
  d->_GO = 0;
}
