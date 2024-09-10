#ifndef PACEMAKER_H
#define PACEMAKER_H
/*
 * Automatically generated C code by
 * KIELER SCCharts - The Key to Efficient Modeling
 *
 * http://rtsys.informatik.uni-kiel.de/kieler
 */


typedef struct {
  int _taken_transitions[20];
  double _region0_null_x;
  double deltaT;
  double sleepT;
  char AS;
  char VS;
  char VRP_ACTIVE;
  char URI_ACTIVE;
  char PVARP_ACTIVE;
  char LRI_ACTIVE;
  char AP;
  char VP;
  char _pacemaker_local__CFSterm;
  char _pacemaker_local__CFSterm1;
  char _pacemaker_local__Atrig6;
  char _pacemaker_local__Atrig;
  char _pacemaker_local__Atrig1;
  char _pacemaker_local__Atrig2;
  char _pacemaker_local__Atrig3;
  char _pacemaker_local__Atrig4;
  double _pacemaker_local_x;
  char _pacemaker_local__Atrig5;
  double _pacemaker_local_x1;
  char _pacemaker_local__Atrig7;
  char _pacemaker_local__Atrig8;
  char _g3;
  char _g4;
  char _g5;
  char _g6;
  char _g7;
  char _g9;
  char _g11;
  char _g12;
  char _g13;
  char _g14;
  char _g15;
  char _g17;
  char _g18;
  char _g21;
  char _g22;
  char _g23;
  char _g24;
  char _g25;
  char _g26;
  char _g27;
  char _g28;
  char _g29;
  char _g30;
  char _g31;
  char _g32;
  char _g34;
  char _g36;
  char _g37;
  char _g38;
  char _g39;
  char _g40;
  char _g42;
  char _g43;
  char _g46;
  char _g47;
  char _g48;
  char _g49;
  char _g51;
  char _g53;
  char _g54;
  char _g55;
  char _g56;
  char _g57;
  char _g59;
  char _g60;
  char _g63;
  char _g64;
  char _g65;
  char _g66;
  char _g67;
  char _g68;
  char _g69;
  char _g70;
  char _g71;
  char _g72;
  char _g73;
  char _g74;
  char _g75;
  char _g76;
  char _g77;
  char _g78;
  char _g79;
  char _g83;
  char _g84;
  char _g87;
  char _g88;
  char _g90;
  char _g92;
  char _g93;
  char _g94;
  char _g95;
  char _g96;
  char _g97;
  char _g98;
  char _g99;
  char _g102;
  char _g103;
  char _g104;
  char _g106;
  char _g107;
  char _g109;
  char _g110;
  char _g114;
  char _g115;
  char _g120;
  char _g121;
  char _g125;
  char _g126;
  char _g128;
  char _g131;
  char _g135;
  char _g136;
  char _g137;
  char _g139;
  char _g140;
  char _g142;
  char _g143;
  char _g145;
  char _g147;
  char _g148;
  char _g149;
  char _g151;
  char _g152;
  char _g154;
  char _g156;
  char _g157;
  char _g159;
  char _g160;
  char _g161;
  char _g162;
  char _g163;
  char _g167;
  char _g170;
  char _g171;
  char _g172;
  char _g174;
  char _g175;
  char _g176;
  char _g184;
  char _g192;
  char _GO;
  char _cg78;
  char _cg4;
  char _cg8;
  char _cg9;
  char _cg14;
  char _cg11;
  char _cg15;
  char _cg17;
  char _cg13;
  char _cg18;
  char _cg27;
  char _cg21;
  char _cg23;
  char _cg25;
  char _cg29;
  char _cg30;
  char _cg33;
  char _cg34;
  char _cg38;
  char _cg37;
  char _cg40;
  char _cg43;
  char _cg46;
  char _cg50;
  char _cg51;
  char _cg56;
  char _cg53;
  char _cg57;
  char _cg59;
  char _cg55;
  char _cg60;
  char _cg65;
  char _cg63;
  char _cg67;
  char _cg68;
  char _cg73;
  char _cg75;
  char _cg83;
  char _cg87;
  char _cg92;
  char _cg93;
  char _cg97;
  char _cg102;
  char _cg106;
  char _cg114;
  char _cg118;
  char _cg120;
  char _cg122;
  char _cg123;
  char _cg127;
  char _cg126;
  char _cg129;
  char _cg132;
  char _cg133;
  char _cg138;
  char _cg135;
  char _cg139;
  char _cg142;
  char _cg147;
  char _cg148;
  char _cg152;
  char _cg159;
  char _cg156;
  char _cg161;
  char _cg164;
  char _cg166;
  char _cg173;
  char _cg170;
  char _cg174;
  char _g12_e1;
  char _g22_e2;
  char _g39_e1;
  char _g47_e2;
  char _g54_e1;
  char _g64_e2;
  char _g88_e1;
  char _g94_e2;
  char _g103_e3;
  char _g104_e1;
  char _g107_e2;
  char _g121_e1;
  char _g128_e2;
  char _g137_e3;
  char _g143_e1;
  char _g149_e2;
  char _g157_e3;
  char _g163_e1;
  char _g167_e2;
  char _g172_e3;
  char _TERM;
  char _pg3;
  char _pg120;
  char _pg78;
  char _pg47_e2;
  char _pg48;
  char _pg67;
  char _pg102;
  char _pg74;
  char _pg12_e1;
  char _pg163_e1;
  char _pg6;
  char _pg128;
  char _pg43;
  char _pg34;
  char _pg40;
  char _pg109;
  char _pg88;
  char _pg57;
  char _pg95;
  char _pg98;
  char _pg174;
  char _pg114;
  char _pg172_e3;
  char _pg159;
  char _pg154;
  char _pg147;
  char _pg175;
  char _pg115;
  char _pg171;
} TickData;

void reset(TickData* d);
void logic(TickData* d);
void tick(TickData* d);

#endif /* !PACEMAKER_H */
