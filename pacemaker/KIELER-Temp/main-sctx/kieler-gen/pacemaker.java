/*
 * Automatically generated Java code by
 * KIELER SCCharts - The Key to Efficient Modeling
 *
 * http://rtsys.informatik.uni-kiel.de/kieler
 */

public class pacemaker {

  public int[] _taken_transitions;
  public double _region0_null_x;
  public double deltaT;
  public double sleepT;
  public boolean AS;
  public boolean VS;
  public boolean VRP_ACTIVE;
  public boolean URI_ACTIVE;
  public boolean PVARP_ACTIVE;
  public boolean LRI_ACTIVE;
  public boolean AP;
  public boolean VP;
  public boolean _reg_VP;
  public boolean _pre_VP;
  public boolean _reg_VS;
  public boolean _pre_VS;
  public boolean _pacemaker_local__CFSterm;
  public boolean _pacemaker_local__CFSterm1;
  public boolean _pacemaker_local__Atrig6;
  public boolean _pacemaker_local__Atrig;
  public boolean _pacemaker_local__Atrig1;
  public boolean _pacemaker_local__Atrig2;
  public boolean _pacemaker_local__Atrig3;
  public boolean _pacemaker_local__Atrig4;
  public double _pacemaker_local_x;
  public boolean _pacemaker_local__Atrig5;
  public double _pacemaker_local_x1;
  public boolean _pacemaker_local__Atrig7;
  public boolean _pacemaker_local__Atrig8;
  public boolean _g4;
  public boolean _g5;
  public boolean _g6;
  public boolean _g7;
  public boolean _g9;
  public boolean _g11;
  public boolean _g12;
  public boolean _g13;
  public boolean _g14;
  public boolean _g15;
  public boolean _g17;
  public boolean _g18;
  public boolean _g20;
  public boolean _g22;
  public boolean _g23;
  public boolean _g24;
  public boolean _g25;
  public boolean _g26;
  public boolean _g28;
  public boolean _g29;
  public boolean _g32;
  public boolean _g33;
  public boolean _g34;
  public boolean _g35;
  public boolean _g36;
  public boolean _g37;
  public boolean _g38;
  public boolean _g39;
  public boolean _g40;
  public boolean _g41;
  public boolean _g42;
  public boolean _g43;
  public boolean _g45;
  public boolean _g47;
  public boolean _g48;
  public boolean _g49;
  public boolean _g50;
  public boolean _g51;
  public boolean _g53;
  public boolean _g54;
  public boolean _g57;
  public boolean _g58;
  public boolean _g59;
  public boolean _g60;
  public boolean _g62;
  public boolean _g64;
  public boolean _g65;
  public boolean _g66;
  public boolean _g67;
  public boolean _g68;
  public boolean _g70;
  public boolean _g71;
  public boolean _g74;
  public boolean _g75;
  public boolean _g76;
  public boolean _g77;
  public boolean _g78;
  public boolean _g79;
  public boolean _g80;
  public boolean _g81;
  public boolean _g82;
  public boolean _g83;
  public boolean _g84;
  public boolean _g85;
  public boolean _g86;
  public boolean _g87;
  public boolean _g88;
  public boolean _g89;
  public boolean _g90;
  public boolean _g94;
  public boolean _g95;
  public boolean _g98;
  public boolean _g99;
  public boolean _g101;
  public boolean _g103;
  public boolean _g104;
  public boolean _g105;
  public boolean _g106;
  public boolean _g107;
  public boolean _g108;
  public boolean _g109;
  public boolean _g110;
  public boolean _g113;
  public boolean _g114;
  public boolean _g115;
  public boolean _g117;
  public boolean _g118;
  public boolean _g120;
  public boolean _g121;
  public boolean _g125;
  public boolean _g126;
  public boolean _g131;
  public boolean _g132;
  public boolean _g133;
  public boolean _g135;
  public boolean _g137;
  public boolean _g138;
  public boolean _g139;
  public boolean _g140;
  public boolean _g141;
  public boolean _g143;
  public boolean _g144;
  public boolean _g147;
  public boolean _g148;
  public boolean _g149;
  public boolean _g150;
  public boolean _g151;
  public boolean _g152;
  public boolean _g156;
  public boolean _g157;
  public boolean _g158;
  public boolean _g162;
  public boolean _g163;
  public boolean _g164;
  public boolean _g165;
  public boolean _g168;
  public boolean _g172;
  public boolean _g173;
  public boolean _g175;
  public boolean _g176;
  public boolean _g177;
  public boolean _g180;
  public boolean _g181;
  public boolean _g182;
  public boolean _g185;
  public boolean _g186;
  public boolean _g187;
  public boolean _g189;
  public boolean _g190;
  public boolean _g191;
  public boolean _GO;
  public boolean _cg89;
  public boolean _cg4;
  public boolean _cg8;
  public boolean _cg9;
  public boolean _cg14;
  public boolean _cg11;
  public boolean _cg15;
  public boolean _cg17;
  public boolean _cg13;
  public boolean _cg18;
  public boolean _cg19;
  public boolean _cg20;
  public boolean _cg25;
  public boolean _cg22;
  public boolean _cg26;
  public boolean _cg28;
  public boolean _cg24;
  public boolean _cg29;
  public boolean _cg38;
  public boolean _cg32;
  public boolean _cg34;
  public boolean _cg36;
  public boolean _cg40;
  public boolean _cg41;
  public boolean _cg44;
  public boolean _cg45;
  public boolean _cg49;
  public boolean _cg48;
  public boolean _cg51;
  public boolean _cg54;
  public boolean _cg57;
  public boolean _cg61;
  public boolean _cg62;
  public boolean _cg67;
  public boolean _cg64;
  public boolean _cg68;
  public boolean _cg70;
  public boolean _cg66;
  public boolean _cg71;
  public boolean _cg76;
  public boolean _cg74;
  public boolean _cg78;
  public boolean _cg79;
  public boolean _cg84;
  public boolean _cg86;
  public boolean _cg94;
  public boolean _cg98;
  public boolean _cg103;
  public boolean _cg104;
  public boolean _cg108;
  public boolean _cg113;
  public boolean _cg117;
  public boolean _cg125;
  public boolean _cg129;
  public boolean _cg133;
  public boolean _cg131;
  public boolean _cg134;
  public boolean _cg135;
  public boolean _cg140;
  public boolean _cg137;
  public boolean _cg141;
  public boolean _cg143;
  public boolean _cg139;
  public boolean _cg144;
  public boolean _cg149;
  public boolean _cg147;
  public boolean _cg151;
  public boolean _cg176;
  public boolean _cg154;
  public boolean _cg158;
  public boolean _cg156;
  public boolean _cg159;
  public boolean _cg160;
  public boolean _cg165;
  public boolean _cg162;
  public boolean _cg166;
  public boolean _cg168;
  public boolean _cg164;
  public boolean _cg169;
  public boolean _cg174;
  public boolean _cg172;
  public boolean _cg178;
  public boolean _cg182;
  public boolean _cg180;
  public boolean _cg188;
  public boolean _cg185;
  public boolean _cg189;
  public boolean _g12_e1;
  public boolean _g23_e2;
  public boolean _g33_e3;
  public boolean _g50_e1;
  public boolean _g58_e2;
  public boolean _g65_e1;
  public boolean _g75_e2;
  public boolean _g99_e1;
  public boolean _g105_e2;
  public boolean _g114_e3;
  public boolean _g115_e1;
  public boolean _g118_e2;
  public boolean _g132_e1;
  public boolean _g138_e2;
  public boolean _g148_e3;
  public boolean _g157_e1;
  public boolean _g163_e2;
  public boolean _g173_e3;
  public boolean _g152_e1;
  public boolean _g181_e2;
  public boolean _g187_e3;
  public boolean _TERM;

  public pacemaker() {
    _taken_transitions = new int[20];
  }
  public boolean _pg190;
  public boolean _pg115;
  public boolean _pg189;
  public boolean _pg94;
  public boolean _pg144;
  public boolean _pg191;
  public boolean _pg141;
  public boolean _pg135;
  public boolean _pg151;
  public boolean _pg149;
  public boolean _pg181;
  public boolean _pg158;
  public boolean _pg50;
  public boolean _pg50_e1;
  public boolean _pg89;
  public boolean _pg76;
  public boolean _pg12_e1;
  public boolean _pg12;
  public boolean _pg14;
  public boolean _pg9;
  public boolean _pg85;
  public boolean _pg51;
  public boolean _pg42;
  public boolean _pg49;
  public boolean _pg95;
  public boolean _pg114_e3;
  public boolean _pg68;
  public boolean _pg106;
  public boolean _pg109;
  public boolean _pg117;

  public void reset() {
    _GO = true;
    _TERM = false;
    _region0_null_x = 0;
    deltaT = 0.0;
    sleepT = 0.0;
    _reg_VP = false;
    _reg_VS = false;
    _taken_transitions[0] = 0;
    _taken_transitions[1] = 0;
    _taken_transitions[2] = 0;
    _taken_transitions[3] = 0;
    _taken_transitions[4] = 0;
    _taken_transitions[5] = 0;
    _taken_transitions[6] = 0;
    _taken_transitions[7] = 0;
    _taken_transitions[8] = 0;
    _taken_transitions[9] = 0;
    _taken_transitions[10] = 0;
    _taken_transitions[11] = 0;
    _taken_transitions[12] = 0;
    _taken_transitions[13] = 0;
    _taken_transitions[14] = 0;
    _taken_transitions[15] = 0;
    _taken_transitions[16] = 0;
    _taken_transitions[17] = 0;
    _taken_transitions[18] = 0;
    _taken_transitions[19] = 0;
    _pg190 = false;
    _pg115 = false;
    _pg189 = false;
    _pg94 = false;
    _pg144 = false;
    _pg191 = false;
    _pg141 = false;
    _pg135 = false;
    _pg151 = false;
    _pg149 = false;
    _pg181 = false;
    _pg158 = false;
    _pg50 = false;
    _pg50_e1 = false;
    _pg89 = false;
    _pg76 = false;
    _pg12_e1 = false;
    _pg12 = false;
    _pg14 = false;
    _pg9 = false;
    _pg85 = false;
    _pg51 = false;
    _pg42 = false;
    _pg49 = false;
    _pg95 = false;
    _pg114_e3 = false;
    _pg68 = false;
    _pg106 = false;
    _pg109 = false;
    _pg117 = false;
  }

  public void logic() {
    VRP_ACTIVE = false;
    URI_ACTIVE = false;
    PVARP_ACTIVE = false;
    LRI_ACTIVE = false;
    AP = false;
    VP = false;
    _g147 = _pg190;
    _g131 = _pg115;
    _g143 = _pg189;
    _g137 = _pg94;
    _g172 = _pg144;
    _g156 = _pg191;
    _g168 = _pg141;
    _g162 = _pg135;
    _g152_e1 = !(_g147 || _g131 || _g143 || _g137 || _g172 || _g156 || _g168 || _g162);
    _pre_VP = _reg_VP;
    _pre_VS = _reg_VS;
    _reg_VS = VS;
    _g185 = _pg151;
    _cg185 = _pre_VS || _pre_VP;
    _g186 = _g185 && _cg185;
    if (_g186) {
      _pacemaker_local__Atrig6 = true;
    }
    _g132_e1 = !_g131;
    _cg131 = _pacemaker_local__Atrig6;
    _g180 = _pg149;
    _cg180 = _pacemaker_local__Atrig6;
    _g182 = _g180 && !_cg180;
    if (_g182) {
      _pacemaker_local_x1 += deltaT;
    }
    _cg147 = _pacemaker_local__Atrig6;
    _g149 = _g147 && !_cg147;
    _cg149 = _pacemaker_local_x1 >= 9;
    _g150 = _g149 && _cg149;
    if (_g150) {
      _pacemaker_local__Atrig7 = true;
    }
    _g133 = _g131 && !_cg131;
    if (_g133) {
      URI_ACTIVE |= true;
    }
    _cg133 = _pacemaker_local__Atrig7;
    _g131 = _g131 && _cg131 || _g133 && _cg133;
    _g138_e2 = !(_g143 || _g137);
    _cg137 = _pacemaker_local__Atrig6;
    sleepT = 1000.0;
    _cg143 = _pacemaker_local__Atrig6;
    _g139 = _g137 && !_cg137 || _g143 && !_cg143;
    _cg139 = _pacemaker_local_x1 < 9.0;
    _g140 = _g139 && _cg139;
    if (_g140) {
      sleepT = (sleepT < (9.0 - _pacemaker_local_x1)) ? sleepT : (9.0 - _pacemaker_local_x1);
    }
    _cg140 = _pacemaker_local__Atrig7;
    _g139 = _g139 && !_cg139;
    _cg141 = _pacemaker_local__Atrig7;
    _g143 = _g137 && _cg137 || _g140 && _cg140 || _g139 && _cg141 || _g143 && _cg143;
    _g137 = !_g147;
    _g150 = _g147 && _cg147 || _g150;
    _g147 = (_g132_e1 || _g131) && (_g138_e2 || _g143) && (_g137 || _g150) && (_g131 || _g143 || _g150);
    _cg151 = _pacemaker_local__Atrig6;
    _g132 = !_g156;
    _cg156 = _pacemaker_local__Atrig6;
    _cg172 = _pacemaker_local__Atrig6;
    _g138 = _g172 && !_cg172;
    _cg174 = _pacemaker_local_x1 >= 10;
    _g132_e1 = _g138 && _cg174;
    if (_g132_e1) {
      _pacemaker_local__Atrig8 = true;
    }
    _g138_e2 = _g156 && !_cg156;
    if (_g138_e2) {
      LRI_ACTIVE |= true;
    }
    _cg158 = _pacemaker_local__Atrig8;
    _g148_e3 = _g156 && _cg156 || _g138_e2 && _cg158;
    _g148 = !(_g168 || _g162);
    _cg162 = _pacemaker_local__Atrig6;
    _cg168 = _pacemaker_local__Atrig6;
    _g156 = _g162 && !_cg162 || _g168 && !_cg168;
    _cg164 = _pacemaker_local_x1 < 10.0;
    _g165 = _g156 && _cg164;
    if (_g165) {
      sleepT = (sleepT < (10.0 - _pacemaker_local_x1)) ? sleepT : (10.0 - _pacemaker_local_x1);
    }
    _cg165 = _pacemaker_local__Atrig8;
    _g164 = _g156 && !_cg164;
    _cg166 = _pacemaker_local__Atrig8;
    _g168 = _g162 && _cg162 || _g165 && _cg165 || _g164 && _cg166 || _g168 && _cg168;
    _g162 = !_g172;
    _g175 = _g172 && _cg172 || _g132_e1;
    _g172 = (_g132 || _g148_e3) && (_g148 || _g168) && (_g162 || _g175) && (_g148_e3 || _g168 || _g175);
    _cg176 = _pacemaker_local__Atrig6;
    _g157 = _g172 && !_cg176;
    if (_g157) {
      _taken_transitions[19] += 1;
      _pacemaker_local__CFSterm1 = true;
    }
    _g157_e1 = _g147 && _cg151 || _g172 && _cg176 || _g157;
    _g163 = !_g180;
    _cg182 = _pacemaker_local__CFSterm1;
    _g163_e2 = _g180 && _cg180 || _g182 && _cg182;
    _g173_e3 = !_g185;
    _g173 = _g185 && !_cg185;
    _cg188 = _pacemaker_local__CFSterm1;
    _g176 = _g186 || _g173 && _cg188;
    _g177 = (_g152_e1 || _g157_e1) && (_g163 || _g163_e2) && (_g173_e3 || _g176) && (_g157_e1 || _g163_e2 || _g176);
    _cg189 = _pacemaker_local__Atrig6;
    _g180 = _g177 && !_cg189;
    if (_g180) {
      VP |= true;
      _taken_transitions[17] += 1;
    }
    _g185 = _pg181;
    _cg4 = AS || AP;
    _g186 = _g185 && !_cg4;
    _cg89 = VS || VP;
    _g181 = _GO || _g186 && !_cg89;
    _g181_e2 = _g185 && _cg4;
    if (_g181_e2) {
      _taken_transitions[0] += 1;
    }
    _g187 = _pg158;
    if (_g187) {
      _region0_null_x += deltaT;
    }
    _g187_e3 = _pg50;
    _g152_e1 = _pg50_e1;
    _g152 = !(_g187_e3 || _g152_e1);
    _g4 = _pg89;
    _g76 = _g4 && !AS;
    _cg76 = _region0_null_x >= 8 - 5;
    _g77 = _g76 && _cg76;
    if (_g77) {
      _pacemaker_local__Atrig4 = true;
    }
    _g66 = _g152_e1 && !AS || _g187_e3 && !AS;
    _cg66 = _region0_null_x < 8 - 5;
    _g67 = _g66 && _cg66;
    if (_g67) {
      sleepT = (sleepT < (8 - 5 - _region0_null_x)) ? sleepT : (8 - 5 - _region0_null_x);
    }
    _cg67 = _pacemaker_local__Atrig4;
    _g66 = _g66 && !_cg66;
    _cg68 = _pacemaker_local__Atrig4;
    _g70 = _g152_e1 && AS || _g67 && _cg67 || _g66 && _cg68 || _g187_e3 && AS;
    _g64 = !_g4;
    _g77 = _g4 && AS || _g77;
    _g74 = (_g152 || _g70) && (_g64 || _g77) && (_g70 || _g77);
    _g65_e1 = _g74 && !AS;
    if (_g65_e1) {
      _taken_transitions[11] += 1;
    }
    _g75 = _g74 && AS || _g65_e1;
    _g65 = _g75 && AS;
    if (_g65) {
      _taken_transitions[9] += 1;
    }
    _g75_e2 = _g75 && !AS;
    if (_g75_e2) {
      AP |= true;
      _taken_transitions[10] += 1;
    }
    _g78 = _g181_e2 || _g65 || _g75_e2;
    if (_g78) {
      _region0_null_x = 0;
    }
    _g82 = _pg76;
    if (_g82) {
      VRP_ACTIVE |= true;
    }
    _g79 = _pg12_e1;
    _g80 = _pg12;
    _g5 = !(_g79 || _g80);
    _cg11 = (VS || VP) && !VRP_ACTIVE;
    _g81 = _pg14;
    _cg32 = (VS || VP) && !VRP_ACTIVE;
    _g34 = _g81 && !_cg32;
    _cg34 = URI_ACTIVE;
    _g35 = _g34 && _cg34;
    if (_g35) {
      _pacemaker_local__Atrig = true;
    }
    _g34 = _g34 && !_cg34;
    _cg36 = _region0_null_x >= 3;
    _g37 = _g34 && _cg36;
    if (_g37) {
      _pacemaker_local__Atrig1 = true;
    }
    _g36 = _g34 && !_cg36;
    _cg38 = !(_region0_null_x >= 3) && !LRI_ACTIVE;
    _g39 = _g36 && _cg38;
    if (_g39) {
      _pacemaker_local__Atrig2 = true;
    }
    _cg17 = (VS || VP) && !VRP_ACTIVE;
    _g13 = _g80 && !_cg11 || _g79 && !_cg17;
    _cg13 = _region0_null_x < 3.0;
    _g14 = _g13 && _cg13;
    if (_g14) {
      sleepT = (sleepT < (3.0 - _region0_null_x)) ? sleepT : (3.0 - _region0_null_x);
    }
    _cg14 = _pacemaker_local__Atrig || _pacemaker_local__Atrig1 || _pacemaker_local__Atrig2;
    _g13 = _g13 && !_cg13;
    _cg15 = _pacemaker_local__Atrig || _pacemaker_local__Atrig1 || _pacemaker_local__Atrig2;
    _g11 = _g80 && _cg11 || _g14 && _cg14 || _g13 && _cg15 || _g79 && _cg17;
    _g17 = _pg9;
    _g22 = _pg85;
    _g23_e2 = !(_g17 || _g22);
    _cg22 = (VS || VP) && !VRP_ACTIVE;
    _cg28 = (VS || VP) && !VRP_ACTIVE;
    _g24 = _g22 && !_cg22 || _g17 && !_cg28;
    _cg24 = _region0_null_x < 3.0;
    _g25 = _g24 && _cg24;
    if (_g25) {
      sleepT = (sleepT < (3.0 - _region0_null_x)) ? sleepT : (3.0 - _region0_null_x);
    }
    _cg25 = _pacemaker_local__Atrig || _pacemaker_local__Atrig1 || _pacemaker_local__Atrig2;
    _g24 = _g24 && !_cg24;
    _cg26 = _pacemaker_local__Atrig || _pacemaker_local__Atrig1 || _pacemaker_local__Atrig2;
    _g22 = _g22 && _cg22 || _g25 && _cg25 || _g24 && _cg26 || _g17 && _cg28;
    _g28 = !_g81;
    _g37 = _g81 && _cg32 || _g35 || _g37 || _g39;
    _g39 = (_g5 || _g11) && (_g23_e2 || _g22) && (_g28 || _g37) && (_g11 || _g22 || _g37);
    _cg40 = (VS || VP) && !VRP_ACTIVE;
    _g32 = _g39 && !_cg40;
    _cg84 = _pacemaker_local__Atrig;
    _g35 = _g32 && _cg84;
    if (_g35) {
      _taken_transitions[4] += 1;
    }
    _g33 = _g78 || _g35;
    if (_g33) {
      _pacemaker_local__Atrig = false;
      _pacemaker_local__Atrig1 = false;
      _pacemaker_local__Atrig2 = false;
    }
    _cg8 = _region0_null_x < 3.0;
    _g23 = _g33 && _cg8;
    if (_g23) {
      sleepT = (sleepT < (3.0 - _region0_null_x)) ? sleepT : (3.0 - _region0_null_x);
    }
    _cg9 = _pacemaker_local__Atrig || _pacemaker_local__Atrig1 || _pacemaker_local__Atrig2;
    _g12 = _g23 && !_cg9 || _g14 && !_cg14;
    _g23_e2 = _g33 && !_cg8;
    _cg18 = _pacemaker_local__Atrig || _pacemaker_local__Atrig1 || _pacemaker_local__Atrig2;
    _g12_e1 = _g13 && !_cg15 || _g23_e2 && !_cg18;
    _cg19 = _region0_null_x < 3.0;
    _g33_e3 = _g33 && _cg19;
    if (_g33_e3) {
      sleepT = (sleepT < (3.0 - _region0_null_x)) ? sleepT : (3.0 - _region0_null_x);
    }
    _cg20 = _pacemaker_local__Atrig || _pacemaker_local__Atrig1 || _pacemaker_local__Atrig2;
    _g85 = _g33_e3 && !_cg20 || _g25 && !_cg25;
    _g6 = _g33 && !_cg19;
    _cg29 = _pacemaker_local__Atrig || _pacemaker_local__Atrig1 || _pacemaker_local__Atrig2;
    _g9 = _g24 && !_cg26 || _g6 && !_cg29;
    _g14 = _g33 || _g36 && !_cg38;
    _g15 = _g32 && !_cg84;
    _cg86 = _pacemaker_local__Atrig1;
    _g18 = _g15 && _cg86;
    if (_g18) {
      _taken_transitions[5] += 1;
    }
    _g20 = _g15 && !_cg86;
    if (_g20) {
      _taken_transitions[6] += 1;
    }
    _g25 = _g39 && _cg40 || _g18 || _g20;
    _cg41 = (VS || VP) && !VRP_ACTIVE;
    _g26 = _g25 && _cg41;
    if (_g26) {
      _taken_transitions[2] += 1;
    }
    _g29 = _g25 && !_cg41;
    if (_g29) {
      VP |= true;
      _taken_transitions[3] += 1;
    }
    _g38 = _g26 || _g29;
    if (_g38) {
      _region0_null_x = 0;
      _pacemaker_local__Atrig3 = false;
    }
    _cg44 = _region0_null_x < 5.0;
    _g7 = _g38 && _cg44;
    if (_g7) {
      sleepT = (sleepT < (5.0 - _region0_null_x)) ? sleepT : (5.0 - _region0_null_x);
    }
    _cg45 = _pacemaker_local__Atrig3;
    _g84 = _pg51;
    _cg57 = _region0_null_x >= 5;
    _g86 = _g84 && _cg57;
    if (_g86) {
      _pacemaker_local__Atrig3 = true;
    }
    _g40 = _pg42;
    _g88 = _pg49;
    _g87 = _g40 || _g88;
    _cg48 = _region0_null_x < 5.0;
    _g41 = _g87 && _cg48;
    if (_g41) {
      sleepT = (sleepT < (5.0 - _region0_null_x)) ? sleepT : (5.0 - _region0_null_x);
    }
    _cg49 = _pacemaker_local__Atrig3;
    _g42 = _g7 && !_cg45 || _g41 && !_cg49;
    _g83 = _g87 && !_cg48;
    _cg51 = _pacemaker_local__Atrig3;
    _g45 = _g41 && _cg49 || _g83 && _cg51;
    _g48 = _g38 && !_cg44;
    _cg54 = _pacemaker_local__Atrig3;
    _g49 = _g83 && !_cg51 || _g48 && !_cg54;
    _g51 = _g38 || _g84 && !_cg57;
    _g54 = !(_g88 || _g40);
    _g43 = !_g84;
    _g53 = (_g54 || _g45) && (_g43 || _g86) && (_g45 || _g86);
    if (_g53) {
      _taken_transitions[8] += 1;
      _taken_transitions[7] += 1;
    }
    _g47 = _g186 && _cg89;
    if (_g47) {
      _taken_transitions[1] += 1;
    }
    _g57 = _g53 || _g47;
    if (_g57) {
      _region0_null_x = 0;
      _pacemaker_local__Atrig4 = false;
    }
    _cg61 = _region0_null_x < 8 - 5;
    _g58_e2 = _g57 && _cg61;
    if (_g58_e2) {
      sleepT = (sleepT < (8 - 5 - _region0_null_x)) ? sleepT : (8 - 5 - _region0_null_x);
    }
    _cg62 = _pacemaker_local__Atrig4;
    _g50_e1 = _g58_e2 && !_cg62 || _g67 && !_cg67;
    _g58 = _g57 && !_cg61;
    _cg71 = _pacemaker_local__Atrig4;
    _g50 = _g66 && !_cg68 || _g58 && !_cg71;
    _g89 = _g57 || _g76 && !_cg76;
    _g59 = _pg95;
    _cg94 = VS || VP;
    _g90 = _g59 && _cg94;
    if (_g90) {
      _taken_transitions[12] += 1;
      _pacemaker_local_x = 0;
      _pacemaker_local__CFSterm = false;
      _pacemaker_local__Atrig5 = false;
    }
    _g62 = _pg114_e3;
    if (_g62) {
      _pacemaker_local_x += deltaT;
    }
    _g67 = _pg68;
    _cg113 = _pacemaker_local_x >= 15;
    _g68 = _g90 || _g67 && !_cg113;
    _g71 = _g67 && _cg113;
    if (_g71) {
      _pacemaker_local__Atrig5 = true;
    }
    _g60 = _g90 || _g82;
    _cg98 = _pacemaker_local__Atrig5;
    _g76 = _g60 && !_cg98;
    _g113 = _pg106;
    _g101 = _pg109;
    _g110 = _g90 || _g113 || _g101;
    _cg103 = _pacemaker_local_x < 15.0;
    _g107 = _g110 && !_cg103;
    _cg108 = _pacemaker_local__Atrig5;
    _g109 = _g107 && !_cg108;
    _g103 = _g110 && _cg103;
    if (_g103) {
      sleepT = (sleepT < (15.0 - _pacemaker_local_x)) ? sleepT : (15.0 - _pacemaker_local_x);
    }
    _cg104 = _pacemaker_local__Atrig5;
    _g106 = _g103 && !_cg104;
    _g115_e1 = !(_g68 || _g76 || _g109 || _g106);
    _g99_e1 = !_g76;
    _g98 = _g60 && _cg98;
    _g105_e2 = !(_g109 || _g106);
    _g104 = _g103 && _cg104 || _g107 && _cg108;
    _g108 = !_g68;
    _g105_e2 = (_g99_e1 || _g98) && (_g105_e2 || _g104) && (_g108 || _g71) && (_g98 || _g104 || _g71);
    if (_g105_e2) {
      _taken_transitions[14] += 1;
      _pacemaker_local__CFSterm = true;
    }
    _g99_e1 = _g90 || _g62;
    _cg117 = _pacemaker_local__CFSterm;
    _g114_e3 = _g99_e1 && !_cg117;
    _g105 = !_g114_e3;
    _g99 = _g99_e1 && _cg117;
    _g114 = (_g115_e1 || _g105_e2) && (_g105 || _g99) && (_g105_e2 || _g99);
    if (_g114) {
      _taken_transitions[13] += 1;
    }
    _g95 = _GO || _g114 || _g59 && !_cg94;
    _g120 = _pg117;
    _cg125 = VS || VP;
    _g117 = _GO || _g120 && !_cg125;
    _g118_e2 = _g120 && _cg125;
    if (_g118_e2) {
      _taken_transitions[15] += 1;
    }
    _g118 = _g177 && _cg189;
    if (_g118) {
      _taken_transitions[16] += 1;
    }
    _g115_e1 = _g118_e2 || _g118 || _g180;
    if (_g115_e1) {
      _pacemaker_local_x1 = 0;
      _pacemaker_local__CFSterm1 = false;
      _pacemaker_local__Atrig6 = false;
      _pacemaker_local__Atrig7 = false;
    }
    _cg129 = _pacemaker_local__Atrig7;
    _g115 = _g115_e1 && !_cg129 || _g133 && !_cg133;
    _cg134 = _pacemaker_local_x1 < 9.0;
    _g121 = _g115_e1 && _cg134;
    if (_g121) {
      sleepT = (sleepT < (9.0 - _pacemaker_local_x1)) ? sleepT : (9.0 - _pacemaker_local_x1);
    }
    _cg135 = _pacemaker_local__Atrig7;
    _g94 = _g121 && !_cg135 || _g140 && !_cg140;
    _g125 = _g115_e1 && !_cg134;
    _cg144 = _pacemaker_local__Atrig7;
    _g189 = _g139 && !_cg141 || _g125 && !_cg144;
    _g190 = _g115_e1 || _g149 && !_cg149;
    _g126 = _g147 && !_cg151;
    if (_g126) {
      _taken_transitions[18] += 1;
      _pacemaker_local__Atrig8 = false;
    }
    _cg154 = _pacemaker_local__Atrig8;
    _g191 = _g126 && !_cg154 || _g138_e2 && !_cg158;
    _cg159 = _pacemaker_local_x1 < 10.0;
    _g133 = _g126 && _cg159;
    if (_g133) {
      sleepT = (sleepT < (10.0 - _pacemaker_local_x1)) ? sleepT : (10.0 - _pacemaker_local_x1);
    }
    _cg160 = _pacemaker_local__Atrig8;
    _g135 = _g133 && !_cg160 || _g165 && !_cg165;
    _g140 = _g126 && !_cg159;
    _cg169 = _pacemaker_local__Atrig8;
    _g141 = _g164 && !_cg166 || _g140 && !_cg169;
    _g144 = _g126 || _g138 && !_cg174;
    _cg178 = _pacemaker_local__CFSterm1;
    _g149 = _g115_e1 && !_cg178 || _g182 && !_cg182;
    _g151 = _g115_e1 || _g173 && !_cg188;
    _g158 = _GO || _g187;
    _reg_VP = VP;
  }

  public void tick() {
    logic();

    _pg190 = _g190;
    _pg115 = _g115;
    _pg189 = _g189;
    _pg94 = _g94;
    _pg144 = _g144;
    _pg191 = _g191;
    _pg141 = _g141;
    _pg135 = _g135;
    _pg151 = _g151;
    _pg149 = _g149;
    _pg181 = _g181;
    _pg158 = _g158;
    _pg50 = _g50;
    _pg50_e1 = _g50_e1;
    _pg89 = _g89;
    _pg76 = _g76;
    _pg12_e1 = _g12_e1;
    _pg12 = _g12;
    _pg14 = _g14;
    _pg9 = _g9;
    _pg85 = _g85;
    _pg51 = _g51;
    _pg42 = _g42;
    _pg49 = _g49;
    _pg95 = _g95;
    _pg114_e3 = _g114_e3;
    _pg68 = _g68;
    _pg106 = _g106;
    _pg109 = _g109;
    _pg117 = _g117;
    _GO = false;
  }
}
