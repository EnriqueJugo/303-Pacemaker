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
  d->_g77 = d->_pg77;
  if (d->_g77) {
    d->VRP_ACTIVE |= 1;
  }
  d->_pre_VP = d->_reg_VP;
  d->_g15 = d->_pg12;
  d->_g9 = d->_pg25;
  d->_g10_e1 = !(d->_g15 || d->_g9);
  d->_cg9 = d->VS || d->_pre_VP && !d->VRP_ACTIVE;
  d->_g108 = d->_pg97;
  if (d->_g108) {
    d->URI_ACTIVE |= 1;
  }
  d->_g182 = d->_pg140;
  if (d->_g182) {
    d->_region0_null_x += d->deltaT;
  }
  d->_g19 = d->_pg7;
  d->_cg19 = d->VS || d->_pre_VP && !d->VRP_ACTIVE;
  d->_g21 = d->_g19 && !d->_cg19;
  d->_cg21 = d->_region0_null_x >= AVI_VALUE && !d->URI_ACTIVE;
  d->_g22 = d->_g21 && d->_cg21;
  if (d->_g22) {
    d->_pacemaker_local__Atrig = 1;
  }
  d->sleepT = 1000.0;
  d->_cg15 = d->VS || d->_pre_VP && !d->VRP_ACTIVE;
  d->_g11 = d->_g9 && !d->_cg9 || d->_g15 && !d->_cg15;
  d->_cg11 = d->_region0_null_x < AVI_VALUE;
  d->_g12 = d->_g11 && d->_cg11;
  if (d->_g12) {
    d->sleepT = (d->sleepT < (AVI_VALUE - d->_region0_null_x)) ? d->sleepT : (AVI_VALUE - d->_region0_null_x);
  }
  d->_cg12 = d->_pacemaker_local__Atrig;
  d->_g11 = d->_g11 && !d->_cg11;
  d->_cg13 = d->_pacemaker_local__Atrig;
  d->_g15 = d->_g9 && d->_cg9 || d->_g12 && d->_cg12 || d->_g11 && d->_cg13 || d->_g15 && d->_cg15;
  d->_g9 = !d->_g19;
  d->_g22 = d->_g19 && d->_cg19 || d->_g22;
  d->_g19 = (d->_g10_e1 || d->_g15) && (d->_g9 || d->_g22) && (d->_g15 || d->_g22);
  d->_cg23 = d->VS || d->_pre_VP && !d->VRP_ACTIVE;
  d->_g10_e1 = d->_g19 && d->_cg23;
  if (d->_g10_e1) {
    d->_taken_transitions[1] += 1;
  }
  d->_g20 = d->_g19 && !d->_cg23;
  if (d->_g20) {
    d->VP |= 1;
    d->_taken_transitions[2] += 1;
  }
  d->_g10 = d->_pg37_e1;
  d->_g20_e2 = d->_pg37;
  d->_g23 = !(d->_g10 || d->_g20_e2);
  d->_g186 = d->_pg142;
  if (d->_g186) {
    d->_region1_null_x += d->deltaT;
  }
  d->_g60 = d->_pg45;
  d->_g62 = d->_g60 && !d->AS;
  d->_cg62 = d->_region1_null_x >= AEI_VALUE;
  d->_g63 = d->_g62 && d->_cg62;
  if (d->_g63) {
    d->_pacemaker_local__Atrig2 = 1;
  }
  d->_g52 = d->_g20_e2 && !d->AS || d->_g10 && !d->AS;
  d->_cg52 = d->_region1_null_x < AEI_VALUE;
  d->_g53 = d->_g52 && d->_cg52;
  if (d->_g53) {
    d->sleepT = (d->sleepT < (AEI_VALUE - d->_region1_null_x)) ? d->sleepT : (AEI_VALUE - d->_region1_null_x);
  }
  d->_cg53 = d->_pacemaker_local__Atrig2;
  d->_g52 = d->_g52 && !d->_cg52;
  d->_cg54 = d->_pacemaker_local__Atrig2;
  d->_g56 = d->_g20_e2 && d->AS || d->_g53 && d->_cg53 || d->_g52 && d->_cg54 || d->_g10 && d->AS;
  d->_g50 = !d->_g60;
  d->_g63 = d->_g60 && d->AS || d->_g63;
  d->_g60 = (d->_g23 || d->_g56) && (d->_g50 || d->_g63) && (d->_g56 || d->_g63);
  d->_g51 = d->_g60 && !d->AS;
  if (d->_g51) {
    d->AP |= 1;
    d->_taken_transitions[6] += 1;
  }
  d->_g51_e1 = d->_pg61_e2;
  d->_cg4 = d->AS || d->AP;
  d->_g61_e2 = d->_GO || d->_g10_e1 || d->_g20 || d->_g51_e1 && !d->_cg4;
  d->_g61 = d->_g51_e1 && d->_cg4;
  if (d->_g61) {
    d->_taken_transitions[0] += 1;
    d->_region0_null_x = 0;
    d->_pacemaker_local__Atrig = 0;
  }
  d->_cg6 = d->_region0_null_x < AVI_VALUE;
  d->_g24 = d->_g61 && d->_cg6;
  if (d->_g24) {
    d->sleepT = (d->sleepT < (AVI_VALUE - d->_region0_null_x)) ? d->sleepT : (AVI_VALUE - d->_region0_null_x);
  }
  d->_cg7 = d->_pacemaker_local__Atrig;
  d->_g25 = d->_g24 && !d->_cg7 || d->_g12 && !d->_cg12;
  d->_g4 = d->_g61 && !d->_cg6;
  d->_cg16 = d->_pacemaker_local__Atrig;
  d->_g12 = d->_g11 && !d->_cg13 || d->_g4 && !d->_cg16;
  d->_g7 = d->_g61 || d->_g21 && !d->_cg21;
  d->_g16 = d->_g60 && d->AS;
  if (d->_g16) {
    d->_taken_transitions[5] += 1;
  }
  d->_g13 = d->_pg174;
  d->_g5 = d->_pg125;
  d->_g21 = d->_pg172;
  d->_g64 = d->_pg128;
  d->_g159_e1 = !(d->_g13 || d->_g5 || d->_g21 || d->_g64);
  d->_g168 = d->_pg173;
  d->_cg168 = d->VP || d->VS;
  d->_g169 = d->_g168 && d->_cg168;
  if (d->_g169) {
    d->_pacemaker_local__Atrig5 = 1;
  }
  d->_g139_e1 = !d->_g5;
  d->_cg138 = d->_pacemaker_local__Atrig5;
  d->_g163 = d->_pg133;
  d->_cg163 = d->_pacemaker_local__Atrig5;
  d->_g165 = d->_g163 && !d->_cg163;
  if (d->_g165) {
    d->_pacemaker_local_x2 += d->deltaT;
  }
  d->_cg154 = d->_pacemaker_local__Atrig5;
  d->_g156 = d->_g13 && !d->_cg154;
  d->_cg156 = d->_pacemaker_local_x2 >= LRI_VALUE;
  d->_g157 = d->_g156 && d->_cg156;
  if (d->_g157) {
    d->_pacemaker_local__Atrig6 = 1;
  }
  d->_g140 = d->_g5 && !d->_cg138;
  if (d->_g140) {
    d->LRI_ACTIVE |= 1;
  }
  d->_cg140 = d->_pacemaker_local__Atrig6;
  d->_g138 = d->_g5 && d->_cg138 || d->_g140 && d->_cg140;
  d->_g145_e2 = !(d->_g21 || d->_g64);
  d->_cg144 = d->_pacemaker_local__Atrig5;
  d->_cg150 = d->_pacemaker_local__Atrig5;
  d->_g146 = d->_g64 && !d->_cg144 || d->_g21 && !d->_cg150;
  d->_cg146 = d->_pacemaker_local_x2 < LRI_VALUE;
  d->_g147 = d->_g146 && d->_cg146;
  if (d->_g147) {
    d->sleepT = (d->sleepT < (LRI_VALUE - d->_pacemaker_local_x2)) ? d->sleepT : (LRI_VALUE - d->_pacemaker_local_x2);
  }
  d->_cg147 = d->_pacemaker_local__Atrig6;
  d->_g146 = d->_g146 && !d->_cg146;
  d->_cg148 = d->_pacemaker_local__Atrig6;
  d->_g150 = d->_g64 && d->_cg144 || d->_g147 && d->_cg147 || d->_g146 && d->_cg148 || d->_g21 && d->_cg150;
  d->_g144 = !d->_g13;
  d->_g157 = d->_g13 && d->_cg154 || d->_g157;
  d->_g154 = (d->_g139_e1 || d->_g138) && (d->_g145_e2 || d->_g150) && (d->_g144 || d->_g157) && (d->_g138 || d->_g150 || d->_g157);
  d->_cg158 = d->_pacemaker_local__Atrig5;
  d->_g145 = d->_g154 && !d->_cg158;
  if (d->_g145) {
    d->_taken_transitions[16] += 1;
    d->_pacemaker_local__CFSterm2 = 1;
  }
  d->_g155 = d->_g154 && d->_cg158 || d->_g145;
  d->_g139_e1 = !d->_g163;
  d->_cg165 = d->_pacemaker_local__CFSterm2;
  d->_g139 = d->_g163 && d->_cg163 || d->_g165 && d->_cg165;
  d->_g155_e3 = !d->_g168;
  d->_g145_e2 = d->_g168 && !d->_cg168;
  d->_cg171 = d->_pacemaker_local__CFSterm2;
  d->_g160 = d->_g169 || d->_g145_e2 && d->_cg171;
  d->_g158 = (d->_g159_e1 || d->_g155) && (d->_g139_e1 || d->_g139) && (d->_g155_e3 || d->_g160) && (d->_g155 || d->_g139 || d->_g160);
  d->_cg172 = d->_pacemaker_local__Atrig5;
  d->_g163 = d->_g158 && !d->_cg172;
  if (d->_g163) {
    d->VP |= 1;
    d->_taken_transitions[15] += 1;
  }
  d->_g168 = d->_pg169;
  d->_cg29 = d->VS || d->VP;
  d->_g169 = d->_GO || d->_g16 || d->_g51 || d->_g168 && !d->_cg29;
  d->_g170 = d->_g168 && d->_cg29;
  if (d->_g170) {
    d->_taken_transitions[3] += 1;
    d->_region1_null_x = 0;
    d->_pacemaker_local__Atrig1 = 0;
  }
  d->_cg31 = d->_region1_null_x < PVARP_VALUE;
  d->_g159_e1 = d->_g170 && d->_cg31;
  if (d->_g159_e1) {
    d->sleepT = (d->sleepT < (PVARP_VALUE - d->_region1_null_x)) ? d->sleepT : (PVARP_VALUE - d->_region1_null_x);
  }
  d->_cg32 = d->_pacemaker_local__Atrig1;
  d->_g164_e2 = d->_pg38;
  d->_cg44 = d->_region1_null_x >= PVARP_VALUE;
  d->_g164 = d->_g164_e2 && d->_cg44;
  if (d->_g164) {
    d->_pacemaker_local__Atrig1 = 1;
  }
  d->_g170_e3 = d->_pg29;
  d->_g159 = d->_pg41;
  d->_g66 = d->_g170_e3 || d->_g159;
  d->_cg35 = d->_region1_null_x < PVARP_VALUE;
  d->_g65 = d->_g66 && d->_cg35;
  if (d->_g65) {
    d->sleepT = (d->sleepT < (PVARP_VALUE - d->_region1_null_x)) ? d->sleepT : (PVARP_VALUE - d->_region1_null_x);
  }
  d->_cg36 = d->_pacemaker_local__Atrig1;
  d->_g29 = d->_g159_e1 && !d->_cg32 || d->_g65 && !d->_cg36;
  d->_g32 = d->_g66 && !d->_cg35;
  d->_cg38 = d->_pacemaker_local__Atrig1;
  d->_g35 = d->_g65 && d->_cg36 || d->_g32 && d->_cg38;
  d->_g36 = d->_g170 && !d->_cg31;
  d->_cg41 = d->_pacemaker_local__Atrig1;
  d->_g41 = d->_g32 && !d->_cg38 || d->_g36 && !d->_cg41;
  d->_g38 = d->_g170 || d->_g164_e2 && !d->_cg44;
  d->_g30 = !(d->_g159 || d->_g170_e3);
  d->_g40 = !d->_g164_e2;
  d->_g34 = (d->_g30 || d->_g35) && (d->_g40 || d->_g164) && (d->_g35 || d->_g164);
  if (d->_g34) {
    d->_taken_transitions[4] += 1;
    d->_pacemaker_local__Atrig2 = 0;
  }
  d->_cg47 = d->_region1_null_x < AEI_VALUE;
  d->_g44 = d->_g34 && d->_cg47;
  if (d->_g44) {
    d->sleepT = (d->sleepT < (AEI_VALUE - d->_region1_null_x)) ? d->sleepT : (AEI_VALUE - d->_region1_null_x);
  }
  d->_cg48 = d->_pacemaker_local__Atrig2;
  d->_g37 = d->_g44 && !d->_cg48 || d->_g53 && !d->_cg53;
  d->_g45_e2 = d->_g34 && !d->_cg47;
  d->_cg57 = d->_pacemaker_local__Atrig2;
  d->_g37_e1 = d->_g52 && !d->_cg54 || d->_g45_e2 && !d->_cg57;
  d->_g45 = d->_g34 || d->_g62 && !d->_cg62;
  d->_g48 = d->_pg96;
  d->_cg70 = d->VS || d->VP;
  d->_g53 = d->_g48 && d->_cg70;
  if (d->_g53) {
    d->_taken_transitions[7] += 1;
    d->_pacemaker_local_x = 0;
    d->_pacemaker_local__CFSterm = 0;
    d->_pacemaker_local__Atrig3 = 0;
  }
  d->_g57 = d->_pg90;
  if (d->_g57) {
    d->_pacemaker_local_x += d->deltaT;
  }
  d->_g54 = d->_pg62;
  d->_cg89 = d->_pacemaker_local_x >= VRP_VALUE;
  d->_g62 = d->_g53 || d->_g54 && !d->_cg89;
  d->_g46 = d->_g54 && d->_cg89;
  if (d->_g46) {
    d->_pacemaker_local__Atrig3 = 1;
  }
  d->_g89 = d->_g53 || d->_g77;
  d->_cg74 = d->_pacemaker_local__Atrig3;
  d->_g77 = d->_g89 && !d->_cg74;
  d->_g83 = d->_pg82;
  d->_g86 = d->_pg85;
  d->_g86 = d->_g53 || d->_g83 || d->_g86;
  d->_cg79 = d->_pacemaker_local_x < VRP_VALUE;
  d->_g83 = d->_g86 && !d->_cg79;
  d->_cg84 = d->_pacemaker_local__Atrig3;
  d->_g85 = d->_g83 && !d->_cg84;
  d->_g79 = d->_g86 && d->_cg79;
  if (d->_g79) {
    d->sleepT = (d->sleepT < (VRP_VALUE - d->_pacemaker_local_x)) ? d->sleepT : (VRP_VALUE - d->_pacemaker_local_x);
  }
  d->_cg80 = d->_pacemaker_local__Atrig3;
  d->_g82 = d->_g79 && !d->_cg80;
  d->_g91_e1 = !(d->_g62 || d->_g77 || d->_g85 || d->_g82);
  d->_g75_e1 = !d->_g77;
  d->_g74 = d->_g89 && d->_cg74;
  d->_g81_e2 = !(d->_g85 || d->_g82);
  d->_g84 = d->_g79 && d->_cg80 || d->_g83 && d->_cg84;
  d->_g80 = !d->_g62;
  d->_g75 = (d->_g75_e1 || d->_g74) && (d->_g81_e2 || d->_g84) && (d->_g80 || d->_g46) && (d->_g74 || d->_g84 || d->_g46);
  if (d->_g75) {
    d->_taken_transitions[9] += 1;
    d->_pacemaker_local__CFSterm = 1;
  }
  d->_g90_e3 = d->_g53 || d->_g57;
  d->_cg93 = d->_pacemaker_local__CFSterm;
  d->_g90 = d->_g90_e3 && !d->_cg93;
  d->_g81_e2 = !d->_g90;
  d->_g81 = d->_g90_e3 && d->_cg93;
  d->_g75_e1 = (d->_g91_e1 || d->_g75) && (d->_g81_e2 || d->_g81) && (d->_g75 || d->_g81);
  if (d->_g75_e1) {
    d->_taken_transitions[8] += 1;
  }
  d->_g96 = d->_GO || d->_g75_e1 || d->_g48 && !d->_cg70;
  d->_g71 = d->_pg127;
  d->_cg101 = d->VS || d->VP;
  d->_g93 = d->_g71 && d->_cg101;
  if (d->_g93) {
    d->_taken_transitions[10] += 1;
    d->_pacemaker_local_x1 = 0;
    d->_pacemaker_local__CFSterm1 = 0;
    d->_pacemaker_local__Atrig4 = 0;
  }
  d->_g91 = d->_pg121;
  if (d->_g91) {
    d->_pacemaker_local_x1 += d->deltaT;
  }
  d->_g91_e1 = d->_pg94_e2;
  d->_cg120 = d->_pacemaker_local_x1 >= URI_VALUE;
  d->_g94_e2 = d->_g93 || d->_g91_e1 && !d->_cg120;
  d->_g94 = d->_g91_e1 && d->_cg120;
  if (d->_g94) {
    d->_pacemaker_local__Atrig4 = 1;
  }
  d->_g70 = d->_g93 || d->_g108;
  d->_cg105 = d->_pacemaker_local__Atrig4;
  d->_g97 = d->_g70 && !d->_cg105;
  d->_g120 = d->_pg113;
  d->_g108 = d->_pg116;
  d->_g117 = d->_g93 || d->_g120 || d->_g108;
  d->_cg110 = d->_pacemaker_local_x1 < URI_VALUE;
  d->_g114 = d->_g117 && !d->_cg110;
  d->_cg115 = d->_pacemaker_local__Atrig4;
  d->_g116 = d->_g114 && !d->_cg115;
  d->_g110 = d->_g117 && d->_cg110;
  if (d->_g110) {
    d->sleepT = (d->sleepT < (URI_VALUE - d->_pacemaker_local_x1)) ? d->sleepT : (URI_VALUE - d->_pacemaker_local_x1);
  }
  d->_cg111 = d->_pacemaker_local__Atrig4;
  d->_g113 = d->_g110 && !d->_cg111;
  d->_g122_e1 = !(d->_g94_e2 || d->_g97 || d->_g116 || d->_g113);
  d->_g106_e1 = !d->_g97;
  d->_g105 = d->_g70 && d->_cg105;
  d->_g112_e2 = !(d->_g116 || d->_g113);
  d->_g111 = d->_g110 && d->_cg111 || d->_g114 && d->_cg115;
  d->_g115 = !d->_g94_e2;
  d->_g112 = (d->_g106_e1 || d->_g105) && (d->_g112_e2 || d->_g111) && (d->_g115 || d->_g94) && (d->_g105 || d->_g111 || d->_g94);
  if (d->_g112) {
    d->_taken_transitions[12] += 1;
    d->_pacemaker_local__CFSterm1 = 1;
  }
  d->_g106_e1 = d->_g93 || d->_g91;
  d->_cg124 = d->_pacemaker_local__CFSterm1;
  d->_g121 = d->_g106_e1 && !d->_cg124;
  d->_g121_e3 = !d->_g121;
  d->_g112_e2 = d->_g106_e1 && d->_cg124;
  d->_g106 = (d->_g122_e1 || d->_g112) && (d->_g121_e3 || d->_g112_e2) && (d->_g112 || d->_g112_e2);
  if (d->_g106) {
    d->_taken_transitions[11] += 1;
  }
  d->_g127 = d->_GO || d->_g106 || d->_g71 && !d->_cg101;
  d->_g102 = d->_pg124;
  d->_cg132 = d->VP || d->VS;
  d->_g124 = d->_GO || d->_g102 && !d->_cg132;
  d->_g125_e2 = d->_g102 && d->_cg132;
  if (d->_g125_e2) {
    d->_taken_transitions[13] += 1;
  }
  d->_g122 = d->_g158 && d->_cg172;
  if (d->_g122) {
    d->_taken_transitions[14] += 1;
  }
  d->_g122_e1 = d->_g125_e2 || d->_g122 || d->_g163;
  if (d->_g122_e1) {
    d->_pacemaker_local_x2 = 0;
    d->_pacemaker_local__CFSterm2 = 0;
    d->_pacemaker_local__Atrig5 = 0;
    d->_pacemaker_local__Atrig6 = 0;
  }
  d->_cg136 = d->_pacemaker_local__Atrig6;
  d->_g125 = d->_g122_e1 && !d->_cg136 || d->_g140 && !d->_cg140;
  d->_cg141 = d->_pacemaker_local_x2 < LRI_VALUE;
  d->_g101 = d->_g122_e1 && d->_cg141;
  if (d->_g101) {
    d->sleepT = (d->sleepT < (LRI_VALUE - d->_pacemaker_local_x2)) ? d->sleepT : (LRI_VALUE - d->_pacemaker_local_x2);
  }
  d->_cg142 = d->_pacemaker_local__Atrig6;
  d->_g128 = d->_g101 && !d->_cg142 || d->_g147 && !d->_cg147;
  d->_g132 = d->_g122_e1 && !d->_cg141;
  d->_cg151 = d->_pacemaker_local__Atrig6;
  d->_g172 = d->_g146 && !d->_cg148 || d->_g132 && !d->_cg151;
  d->_g174 = d->_g122_e1 || d->_g156 && !d->_cg156;
  d->_cg161 = d->_pacemaker_local__CFSterm2;
  d->_g133 = d->_g122_e1 && !d->_cg161 || d->_g165 && !d->_cg165;
  d->_g173 = d->_g122_e1 || d->_g145_e2 && !d->_cg171;
  d->_g140 = d->_GO || d->_g182;
  d->_g142 = d->_GO || d->_g186;
  d->_reg_VP = d->VP;
}

void reset(TickData* d) {
  d->_GO = 1;
  d->_TERM = 0;
  d->_region0_null_x = 0;
  d->_region1_null_x = 0;
  d->deltaT = 0.0;
  d->sleepT = 0.0;
  d->_reg_VP = 0;
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
  d->_pg77 = 0;
  d->_pg12 = 0;
  d->_pg25 = 0;
  d->_pg97 = 0;
  d->_pg140 = 0;
  d->_pg7 = 0;
  d->_pg37_e1 = 0;
  d->_pg37 = 0;
  d->_pg142 = 0;
  d->_pg45 = 0;
  d->_pg61_e2 = 0;
  d->_pg174 = 0;
  d->_pg125 = 0;
  d->_pg172 = 0;
  d->_pg128 = 0;
  d->_pg173 = 0;
  d->_pg133 = 0;
  d->_pg169 = 0;
  d->_pg38 = 0;
  d->_pg29 = 0;
  d->_pg41 = 0;
  d->_pg96 = 0;
  d->_pg90 = 0;
  d->_pg62 = 0;
  d->_pg82 = 0;
  d->_pg85 = 0;
  d->_pg127 = 0;
  d->_pg121 = 0;
  d->_pg94_e2 = 0;
  d->_pg113 = 0;
  d->_pg116 = 0;
  d->_pg124 = 0;
}

void tick(TickData* d) {
  logic(d);

  d->_pg77 = d->_g77;
  d->_pg12 = d->_g12;
  d->_pg25 = d->_g25;
  d->_pg97 = d->_g97;
  d->_pg140 = d->_g140;
  d->_pg7 = d->_g7;
  d->_pg37_e1 = d->_g37_e1;
  d->_pg37 = d->_g37;
  d->_pg142 = d->_g142;
  d->_pg45 = d->_g45;
  d->_pg61_e2 = d->_g61_e2;
  d->_pg174 = d->_g174;
  d->_pg125 = d->_g125;
  d->_pg172 = d->_g172;
  d->_pg128 = d->_g128;
  d->_pg173 = d->_g173;
  d->_pg133 = d->_g133;
  d->_pg169 = d->_g169;
  d->_pg38 = d->_g38;
  d->_pg29 = d->_g29;
  d->_pg41 = d->_g41;
  d->_pg96 = d->_g96;
  d->_pg90 = d->_g90;
  d->_pg62 = d->_g62;
  d->_pg82 = d->_g82;
  d->_pg85 = d->_g85;
  d->_pg127 = d->_g127;
  d->_pg121 = d->_g121;
  d->_pg94_e2 = d->_g94_e2;
  d->_pg113 = d->_g113;
  d->_pg116 = d->_g116;
  d->_pg124 = d->_g124;
  d->_GO = 0;
}
