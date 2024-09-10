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
  public boolean _g3;
  public boolean _g4;
  public boolean _g5;
  public boolean _g6;
  public boolean _g10;
  public boolean _g11;
  public boolean _g13;
  public boolean _g14;
  public boolean _g16;
  public boolean _g17;
  public boolean _g21;
  public boolean _g22;
  public boolean _g24;
  public boolean _g25;
  public boolean _g27;
  public boolean _g28;
  public boolean _g46;
  public boolean _g47;
  public boolean _g48;
  public boolean _g49;
  public boolean _g50;
  public boolean _g51;
  public boolean _g52;
  public boolean _g53;
  public boolean _g56;
  public boolean _g57;
  public boolean _g58;
  public boolean _g59;
  public boolean _g62;
  public boolean _g64;
  public boolean _g65;
  public boolean _g66;
  public boolean _g67;
  public boolean _g68;
  public boolean _g70;
  public boolean _g74;
  public boolean _g75;
  public boolean _g76;
  public boolean _g77;
  public boolean _g78;
  public boolean _g79;
  public boolean _g80;
  public boolean _g81;
  public boolean _g82;
  public boolean _g89;
  public boolean _g90;
  public boolean _g100;
  public boolean _g101;
  public boolean _g112;
  public boolean _g119;
  public boolean _g199;
  public boolean _g207;
  public boolean _g211;
  public boolean _g215;
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
  public boolean _g50_e1;
  public boolean _g58_e2;
  public boolean _g65_e1;
  public boolean _g75_e2;
  public boolean _TERM;

  public pacemaker() {
    _taken_transitions = new int[20];
  }
  public boolean _pg3;
  public boolean _pg68;
  public boolean _pg89;
  public boolean _pg58;
  public boolean _pg59;
  public boolean _pg78;
  public boolean _pg100;
  public boolean _pg16;
  public boolean _pg10;
  public boolean _pg6;
  public boolean _pg211;
  public boolean _pg27;
  public boolean _pg21;
  public boolean _pg56;
  public boolean _pg46;
  public boolean _pg52;
  public boolean _pg119;
  public boolean _pg112;

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
    _pg3 = false;
    _pg68 = false;
    _pg89 = false;
    _pg58 = false;
    _pg59 = false;
    _pg78 = false;
    _pg100 = false;
    _pg16 = false;
    _pg10 = false;
    _pg6 = false;
    _pg211 = false;
    _pg27 = false;
    _pg21 = false;
    _pg56 = false;
    _pg46 = false;
    _pg52 = false;
    _pg119 = false;
    _pg112 = false;
  }

  public void logic() {
    _g4 = _pg3;
    _g89 = _g4 && !AS;
    _g3 = _GO || _g89 && !VS;
    _g4 = _g4 && AS;
    if (_g4) {
      _taken_transitions[0] += 1;
    }
    _g199 = _pg68;
    if (_g199) {
      _region0_null_x += deltaT;
    }
    _g70 = _pg89;
    _g64 = _pg58;
    _g65_e1 = !(_g70 || _g64);
    _g74 = _pg59;
    _g76 = _g74 && !AS;
    _cg76 = _region0_null_x >= 8;
    _g77 = _g76 && _cg76;
    if (_g77) {
      _pacemaker_local__Atrig4 = true;
    }
    sleepT = 1000.0;
    _g66 = _g64 && !AS || _g70 && !AS;
    _cg66 = _region0_null_x < 8.0;
    _g67 = _g66 && _cg66;
    if (_g67) {
      sleepT = (sleepT < (8.0 - _region0_null_x)) ? sleepT : (8.0 - _region0_null_x);
    }
    _cg67 = _pacemaker_local__Atrig4;
    _g66 = _g66 && !_cg66;
    _cg68 = _pacemaker_local__Atrig4;
    _g70 = _g64 && AS || _g67 && _cg67 || _g66 && _cg68 || _g70 && AS;
    _g64 = !_g74;
    _g77 = _g74 && AS || _g77;
    _g74 = (_g65_e1 || _g70) && (_g64 || _g77) && (_g70 || _g77);
    _g65_e1 = _g74 && !AS;
    if (_g65_e1) {
      _taken_transitions[11] += 1;
    }
    _g75 = _g74 && AS || _g65_e1;
    _g65 = _g75 && AS;
    if (_g65) {
      _taken_transitions[9] += 1;
    }
    _g75_e2 = _pg78;
    _g78 = _GO || _g75_e2;
    if (_g78) {
      VRP_ACTIVE = false;
      URI_ACTIVE = false;
      PVARP_ACTIVE = false;
      LRI_ACTIVE = false;
      AP = false;
      VP = false;
    }
    _g82 = _g75 && !AS;
    if (_g82) {
      AP |= true;
      _taken_transitions[10] += 1;
    }
    _g207 = _g4 || _g65 || _g82;
    if (_g207) {
      _region0_null_x = 0;
    }
    _g79 = _pg100;
    if (_g79) {
      VRP_ACTIVE |= true;
    }
    _g5 = _pg16;
    _g80 = _pg10;
    _cg11 = (VS || VP) && !VRP_ACTIVE;
    _g81 = _pg6;
    _g6 = _GO || _g81;
    if (_g6) {
      _pre_VP = _reg_VP;
    }
    _g101 = _pg211;
    _g211 = _GO || _g101;
    if (_g211) {
      _pre_VS = _reg_VS;
      _reg_VS = VS;
    }
    _cg32 = (VS || VP) && !VRP_ACTIVE;
    _cg17 = (VS || VP) && !VRP_ACTIVE;
    _g215 = _g80 && !_cg11 || _g5 && !_cg17;
    _cg13 = _region0_null_x < 3.0;
    _g11 = _g215 && _cg13;
    if (_g11) {
      sleepT = (sleepT < (3.0 - _region0_null_x)) ? sleepT : (3.0 - _region0_null_x);
    }
    _g17 = _pg27;
    _g13 = _pg21;
    _cg22 = (VS || VP) && !VRP_ACTIVE;
    _cg28 = (VS || VP) && !VRP_ACTIVE;
    _g14 = _g13 && !_cg22 || _g17 && !_cg28;
    _cg24 = _region0_null_x < 3.0;
    _g22 = _g14 && _cg24;
    if (_g22) {
      sleepT = (sleepT < (3.0 - _region0_null_x)) ? sleepT : (3.0 - _region0_null_x);
    }
    _g28 = _pg56;
    _cg57 = _region0_null_x >= 5;
    _g24 = _g28 && _cg57;
    if (_g24) {
      _pacemaker_local__Atrig3 = true;
    }
    _g25 = _pg46;
    _g53 = _pg52;
    _g48 = _g25 || _g53;
    _cg48 = _region0_null_x < 5.0;
    _g49 = _g48 && _cg48;
    if (_g49) {
      sleepT = (sleepT < (5.0 - _region0_null_x)) ? sleepT : (5.0 - _region0_null_x);
    }
    _cg49 = _pacemaker_local__Atrig3;
    _g48 = _g48 && !_cg48;
    _cg51 = _pacemaker_local__Atrig3;
    _g51 = _g49 && _cg49 || _g48 && _cg51;
    _g49 = !(_g53 || _g25);
    _g53 = !_g28;
    _g47 = (_g49 || _g51) && (_g53 || _g24) && (_g51 || _g24);
    if (_g47) {
      _taken_transitions[8] += 1;
      _taken_transitions[7] += 1;
    }
    _g57 = _g89 && VS;
    if (_g57) {
      _taken_transitions[1] += 1;
    }
    _g58_e2 = _g47 || _g57;
    if (_g58_e2) {
      _pacemaker_local__Atrig4 = false;
    }
    _cg61 = _region0_null_x < 8.0;
    _g50_e1 = _g58_e2 && _cg61;
    if (_g50_e1) {
      sleepT = (sleepT < (8.0 - _region0_null_x)) ? sleepT : (8.0 - _region0_null_x);
    }
    _cg62 = _pacemaker_local__Atrig4;
    _g58 = _g50_e1 && !_cg62 || _g67 && !_cg67;
    _g50 = _g58_e2 && !_cg61;
    _cg71 = _pacemaker_local__Atrig4;
    _g89 = _g66 && !_cg68 || _g50 && !_cg71;
    _g59 = _g58_e2 || _g76 && !_cg76;
    _g90 = _pg119;
    if (_g90) {
      _pacemaker_local_x += deltaT;
    }
    _g62 = _pg112;
    _cg113 = _pacemaker_local_x >= 15;
    _g67 = _g62 && _cg113;
    if (_g67) {
      _pacemaker_local__Atrig5 = true;
    }
    _g68 = _GO || _g199;
  }

  public void tick() {
    logic();

    _pg3 = _g3;
    _pg68 = _g68;
    _pg89 = _g89;
    _pg58 = _g58;
    _pg59 = _g59;
    _pg78 = _g78;
    _pg100 = _g100;
    _pg16 = _g16;
    _pg10 = _g10;
    _pg6 = _g6;
    _pg211 = _g211;
    _pg27 = _g27;
    _pg21 = _g21;
    _pg56 = _g56;
    _pg46 = _g46;
    _pg52 = _g52;
    _pg119 = _g119;
    _pg112 = _g112;
    _GO = false;
  }
}
