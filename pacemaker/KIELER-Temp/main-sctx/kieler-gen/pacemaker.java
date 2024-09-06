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
  public boolean LRI_END;
  public boolean AP;
  public boolean VP;
  public boolean _pacemaker_local__CFSterm;
  public boolean _pacemaker_local__CFSterm1;
  public boolean _pacemaker_local__CFSterm2;
  public boolean _pacemaker_local__Atrig6;
  public boolean _pacemaker_local__Atrig;
  public boolean _pacemaker_local__Atrig1;
  public boolean _pacemaker_local__Atrig2;
  public boolean _pacemaker_local__Atrig3;
  public double _pacemaker_local_x;
  public boolean _pacemaker_local__Atrig4;
  public double _pacemaker_local_x1;
  public boolean _pacemaker_local__Atrig5;
  public double _pacemaker_local_x2;
  public boolean _pacemaker_local__Atrig7;
  public boolean _g3;
  public boolean _g4;
  public boolean _g5;
  public boolean _g6;
  public boolean _g8;
  public boolean _g10;
  public boolean _g11;
  public boolean _g12;
  public boolean _g13;
  public boolean _g14;
  public boolean _g16;
  public boolean _g17;
  public boolean _g20;
  public boolean _g21;
  public boolean _g22;
  public boolean _g23;
  public boolean _g24;
  public boolean _g25;
  public boolean _g26;
  public boolean _g27;
  public boolean _g28;
  public boolean _g29;
  public boolean _g31;
  public boolean _g33;
  public boolean _g34;
  public boolean _g35;
  public boolean _g36;
  public boolean _g37;
  public boolean _g39;
  public boolean _g40;
  public boolean _g43;
  public boolean _g44;
  public boolean _g45;
  public boolean _g46;
  public boolean _g48;
  public boolean _g50;
  public boolean _g51;
  public boolean _g52;
  public boolean _g53;
  public boolean _g54;
  public boolean _g56;
  public boolean _g57;
  public boolean _g60;
  public boolean _g61;
  public boolean _g62;
  public boolean _g63;
  public boolean _g64;
  public boolean _g65;
  public boolean _g66;
  public boolean _g67;
  public boolean _g68;
  public boolean _g69;
  public boolean _g70;
  public boolean _g71;
  public boolean _g72;
  public boolean _g73;
  public boolean _g74;
  public boolean _g78;
  public boolean _g79;
  public boolean _g82;
  public boolean _g83;
  public boolean _g85;
  public boolean _g87;
  public boolean _g88;
  public boolean _g89;
  public boolean _g90;
  public boolean _g91;
  public boolean _g92;
  public boolean _g93;
  public boolean _g94;
  public boolean _g97;
  public boolean _g98;
  public boolean _g99;
  public boolean _g101;
  public boolean _g102;
  public boolean _g104;
  public boolean _g105;
  public boolean _g109;
  public boolean _g110;
  public boolean _g113;
  public boolean _g114;
  public boolean _g116;
  public boolean _g118;
  public boolean _g119;
  public boolean _g120;
  public boolean _g121;
  public boolean _g122;
  public boolean _g123;
  public boolean _g124;
  public boolean _g125;
  public boolean _g128;
  public boolean _g129;
  public boolean _g130;
  public boolean _g132;
  public boolean _g133;
  public boolean _g135;
  public boolean _g136;
  public boolean _g140;
  public boolean _g141;
  public boolean _g145;
  public boolean _g147;
  public boolean _g148;
  public boolean _g149;
  public boolean _g150;
  public boolean _g153;
  public boolean _g157;
  public boolean _g158;
  public boolean _g159;
  public boolean _g160;
  public boolean _g161;
  public boolean _g162;
  public boolean _g163;
  public boolean _g166;
  public boolean _g167;
  public boolean _g168;
  public boolean _g171;
  public boolean _g172;
  public boolean _g173;
  public boolean _g175;
  public boolean _g176;
  public boolean _g177;
  public boolean _g185;
  public boolean _g193;
  public boolean _GO;
  public boolean _cg73;
  public boolean _cg4;
  public boolean _cg7;
  public boolean _cg8;
  public boolean _cg13;
  public boolean _cg10;
  public boolean _cg14;
  public boolean _cg16;
  public boolean _cg12;
  public boolean _cg17;
  public boolean _cg24;
  public boolean _cg20;
  public boolean _cg22;
  public boolean _cg26;
  public boolean _cg27;
  public boolean _cg30;
  public boolean _cg31;
  public boolean _cg35;
  public boolean _cg34;
  public boolean _cg37;
  public boolean _cg40;
  public boolean _cg43;
  public boolean _cg47;
  public boolean _cg48;
  public boolean _cg53;
  public boolean _cg50;
  public boolean _cg54;
  public boolean _cg56;
  public boolean _cg52;
  public boolean _cg57;
  public boolean _cg62;
  public boolean _cg60;
  public boolean _cg64;
  public boolean _cg65;
  public boolean _cg70;
  public boolean _cg78;
  public boolean _cg82;
  public boolean _cg87;
  public boolean _cg88;
  public boolean _cg92;
  public boolean _cg97;
  public boolean _cg101;
  public boolean _cg109;
  public boolean _cg113;
  public boolean _cg118;
  public boolean _cg119;
  public boolean _cg123;
  public boolean _cg128;
  public boolean _cg132;
  public boolean _cg140;
  public boolean _cg144;
  public boolean _cg145;
  public boolean _cg150;
  public boolean _cg147;
  public boolean _cg151;
  public boolean _cg153;
  public boolean _cg149;
  public boolean _cg154;
  public boolean _cg159;
  public boolean _cg157;
  public boolean _cg161;
  public boolean _cg164;
  public boolean _cg168;
  public boolean _cg166;
  public boolean _cg174;
  public boolean _cg171;
  public boolean _cg175;
  public boolean _g11_e1;
  public boolean _g21_e2;
  public boolean _g36_e1;
  public boolean _g44_e2;
  public boolean _g51_e1;
  public boolean _g61_e2;
  public boolean _g83_e1;
  public boolean _g89_e2;
  public boolean _g98_e3;
  public boolean _g99_e1;
  public boolean _g102_e2;
  public boolean _g114_e1;
  public boolean _g120_e2;
  public boolean _g129_e3;
  public boolean _g130_e1;
  public boolean _g133_e2;
  public boolean _g148_e1;
  public boolean _g158_e2;
  public boolean _g162_e1;
  public boolean _g167_e2;
  public boolean _g173_e3;
  public boolean _TERM;

  public pacemaker() {
    _taken_transitions = new int[21];
  }
  public boolean _pg3;
  public boolean _pg150;
  public boolean _pg73;
  public boolean _pg44_e2;
  public boolean _pg45;
  public boolean _pg68;
  public boolean _pg78;
  public boolean _pg97;
  public boolean _pg14;
  public boolean _pg8;
  public boolean _pg17;
  public boolean _pg37;
  public boolean _pg31;
  public boolean _pg40;
  public boolean _pg79;
  public boolean _pg98;
  public boolean _pg54;
  public boolean _pg90;
  public boolean _pg93;
  public boolean _pg135;
  public boolean _pg120;
  public boolean _pg102_e2;
  public boolean _pg121;
  public boolean _pg124;
  public boolean _pg141;
  public boolean _pg175;
  public boolean _pg177;
  public boolean _pg145;
  public boolean _pg176;
  public boolean _pg167_e2;

  public void reset() {
    _GO = true;
    _TERM = false;
    _region0_null_x = 0;
    deltaT = 0.0;
    sleepT = 0.0;
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
    _taken_transitions[20] = 0;
    _pg3 = false;
    _pg150 = false;
    _pg73 = false;
    _pg44_e2 = false;
    _pg45 = false;
    _pg68 = false;
    _pg78 = false;
    _pg97 = false;
    _pg14 = false;
    _pg8 = false;
    _pg17 = false;
    _pg37 = false;
    _pg31 = false;
    _pg40 = false;
    _pg79 = false;
    _pg98 = false;
    _pg54 = false;
    _pg90 = false;
    _pg93 = false;
    _pg135 = false;
    _pg120 = false;
    _pg102_e2 = false;
    _pg121 = false;
    _pg124 = false;
    _pg141 = false;
    _pg175 = false;
    _pg177 = false;
    _pg145 = false;
    _pg176 = false;
    _pg167_e2 = false;
  }

  public void logic() {
    _g4 = _pg3;
    _g73 = _g4 && !AS;
    _g3 = _GO || _g73 && !VS;
    _g4 = _g4 && AS;
    if (_g4) {
      _taken_transitions[0] += 1;
    }
    _g185 = _pg150;
    if (_g185) {
      _region0_null_x += deltaT;
    }
    _g56 = _pg73;
    _g50 = _pg44_e2;
    _g51_e1 = !(_g56 || _g50);
    _g60 = _pg45;
    _g62 = _g60 && !AS;
    _cg62 = _region0_null_x >= 8;
    _g63 = _g62 && _cg62;
    if (_g63) {
      _pacemaker_local__Atrig3 = true;
    }
    sleepT = 1000.0;
    _g52 = _g50 && !AS || _g56 && !AS;
    _cg52 = _region0_null_x < 8.0;
    _g53 = _g52 && _cg52;
    if (_g53) {
      sleepT = (sleepT < (8.0 - _region0_null_x)) ? sleepT : (8.0 - _region0_null_x);
    }
    _cg53 = _pacemaker_local__Atrig3;
    _g52 = _g52 && !_cg52;
    _cg54 = _pacemaker_local__Atrig3;
    _g56 = _g50 && AS || _g53 && _cg53 || _g52 && _cg54 || _g56 && AS;
    _g50 = !_g60;
    _g63 = _g60 && AS || _g63;
    _g60 = (_g51_e1 || _g56) && (_g50 || _g63) && (_g56 || _g63);
    _g51 = _g60 && !AS;
    if (_g51) {
      _taken_transitions[10] += 1;
    }
    _g51_e1 = _g60 && AS || _g51;
    _g61_e2 = _g51_e1 && AS;
    if (_g61_e2) {
      _taken_transitions[8] += 1;
    }
    _g61 = _pg68;
    _g68 = _GO || _g61;
    if (_g68) {
      VRP_ACTIVE = false;
      URI_ACTIVE = false;
      PVARP_ACTIVE = false;
      LRI_ACTIVE = false;
      LRI_END = false;
      AP = false;
      VP = false;
    }
    _g64 = _g51_e1 && !AS;
    if (_g64) {
      AP |= true;
      _taken_transitions[9] += 1;
    }
    _g193 = _g4 || _g61_e2 || _g64;
    if (_g193) {
      _region0_null_x = 0;
      _pacemaker_local__Atrig = false;
      _pacemaker_local__Atrig1 = false;
    }
    _cg7 = _region0_null_x < 3.0;
    _g65 = _g193 && _cg7;
    if (_g65) {
      sleepT = (sleepT < (3.0 - _region0_null_x)) ? sleepT : (3.0 - _region0_null_x);
    }
    _cg8 = _pacemaker_local__Atrig || _pacemaker_local__Atrig1;
    _g5 = _pg78;
    if (_g5) {
      URI_ACTIVE |= true;
    }
    _g66 = _pg97;
    if (_g66) {
      VRP_ACTIVE |= true;
    }
    _g67 = _pg14;
    _cg20 = (VS || VP) && !VRP_ACTIVE;
    _g22 = _g67 && !_cg20;
    _cg22 = _region0_null_x >= 3 && !URI_ACTIVE;
    _g23 = _g22 && _cg22;
    if (_g23) {
      _pacemaker_local__Atrig = true;
    }
    _g22 = _g22 && !_cg22;
    _cg24 = _region0_null_x <= 3 && LRI_END;
    _g25 = _g22 && _cg24;
    if (_g25) {
      _pacemaker_local__Atrig1 = true;
    }
    _g10 = _pg8;
    _cg10 = (VS || VP) && !VRP_ACTIVE;
    _g16 = _pg17;
    _cg16 = (VS || VP) && !VRP_ACTIVE;
    _g12 = _g10 && !_cg10 || _g16 && !_cg16;
    _cg12 = _region0_null_x < 3.0;
    _g13 = _g12 && _cg12;
    if (_g13) {
      sleepT = (sleepT < (3.0 - _region0_null_x)) ? sleepT : (3.0 - _region0_null_x);
    }
    _cg13 = _pacemaker_local__Atrig || _pacemaker_local__Atrig1;
    _g8 = _g65 && !_cg8 || _g13 && !_cg13;
    _g12 = _g12 && !_cg12;
    _cg14 = _pacemaker_local__Atrig || _pacemaker_local__Atrig1;
    _g13 = _g10 && _cg10 || _g13 && _cg13 || _g12 && _cg14 || _g16 && _cg16;
    _g17 = _g193 && !_cg7;
    _cg17 = _pacemaker_local__Atrig || _pacemaker_local__Atrig1;
    _g17 = _g12 && !_cg14 || _g17 && !_cg17;
    _g14 = _g193 || _g22 && !_cg24;
    _g24 = _g67 && _cg20 || _g23 || _g25;
    _g6 = !(_g16 || _g10);
    _g23 = !_g67;
    _g25 = (_g6 || _g13) && (_g23 || _g24) && (_g13 || _g24);
    _cg26 = (VS || VP) && !VRP_ACTIVE;
    _g16 = _g25 && !_cg26;
    _cg70 = _pacemaker_local__Atrig;
    _g10 = _g16 && _cg70;
    if (_g10) {
      _taken_transitions[4] += 1;
    }
    _g20 = _g16 && !_cg70;
    if (_g20) {
      _taken_transitions[5] += 1;
    }
    _g21 = _g25 && _cg26 || _g10 || _g20;
    _cg27 = (VS || VP) && !VRP_ACTIVE;
    _g11 = _g21 && _cg27;
    if (_g11) {
      _taken_transitions[2] += 1;
    }
    _g21_e2 = _g21 && !_cg27;
    if (_g21_e2) {
      VP |= true;
      _taken_transitions[3] += 1;
    }
    _g11_e1 = _g11 || _g21_e2;
    if (_g11_e1) {
      _region0_null_x = 0;
      _pacemaker_local__Atrig2 = false;
    }
    _cg30 = _region0_null_x < 5.0;
    _g70 = _g11_e1 && _cg30;
    if (_g70) {
      sleepT = (sleepT < (5.0 - _region0_null_x)) ? sleepT : (5.0 - _region0_null_x);
    }
    _cg31 = _pacemaker_local__Atrig2;
    _g26 = _pg37;
    _cg43 = _region0_null_x >= 5;
    _g71 = _g26 && _cg43;
    if (_g71) {
      _pacemaker_local__Atrig2 = true;
    }
    _g72 = _pg31;
    _g27 = _pg40;
    _g28 = _g72 || _g27;
    _cg34 = _region0_null_x < 5.0;
    _g69 = _g28 && _cg34;
    if (_g69) {
      sleepT = (sleepT < (5.0 - _region0_null_x)) ? sleepT : (5.0 - _region0_null_x);
    }
    _cg35 = _pacemaker_local__Atrig2;
    _g31 = _g70 && !_cg31 || _g69 && !_cg35;
    _g34 = _g28 && !_cg34;
    _cg37 = _pacemaker_local__Atrig2;
    _g35 = _g69 && _cg35 || _g34 && _cg37;
    _g40 = _g11_e1 && !_cg30;
    _cg40 = _pacemaker_local__Atrig2;
    _g40 = _g34 && !_cg37 || _g40 && !_cg40;
    _g37 = _g11_e1 || _g26 && !_cg43;
    _g29 = !(_g27 || _g72);
    _g33 = !_g26;
    _g39 = (_g29 || _g35) && (_g33 || _g71) && (_g35 || _g71);
    if (_g39) {
      _taken_transitions[7] += 1;
      _taken_transitions[6] += 1;
    }
    _g43 = _g73 && VS;
    if (_g43) {
      _taken_transitions[1] += 1;
    }
    _g36_e1 = _g39 || _g43;
    if (_g36_e1) {
      _pacemaker_local__Atrig3 = false;
    }
    _cg47 = _region0_null_x < 8.0;
    _g44 = _g36_e1 && _cg47;
    if (_g44) {
      sleepT = (sleepT < (8.0 - _region0_null_x)) ? sleepT : (8.0 - _region0_null_x);
    }
    _cg48 = _pacemaker_local__Atrig3;
    _g44_e2 = _g44 && !_cg48 || _g53 && !_cg53;
    _g36 = _g36_e1 && !_cg47;
    _cg57 = _pacemaker_local__Atrig3;
    _g73 = _g52 && !_cg54 || _g36 && !_cg57;
    _g45 = _g36_e1 || _g62 && !_cg62;
    _g74 = _pg79;
    _g48 = _g74 && VS;
    if (_g48) {
      _taken_transitions[11] += 1;
      _pacemaker_local_x = 0;
      _pacemaker_local__CFSterm = false;
      _pacemaker_local__Atrig4 = false;
    }
    _g53 = _pg98;
    if (_g53) {
      _pacemaker_local_x += deltaT;
    }
    _g57 = _pg54;
    _cg97 = _pacemaker_local_x >= 15;
    _g54 = _g48 || _g57 && !_cg97;
    _g62 = _g57 && _cg97;
    if (_g62) {
      _pacemaker_local__Atrig4 = true;
    }
    _g46 = _g48 || _g66;
    _cg82 = _pacemaker_local__Atrig4;
    _g97 = _g46 && !_cg82;
    _g85 = _pg90;
    _g94 = _pg93;
    _g91 = _g48 || _g85 || _g94;
    _cg87 = _pacemaker_local_x < 15.0;
    _g94 = _g91 && !_cg87;
    _cg92 = _pacemaker_local__Atrig4;
    _g93 = _g94 && !_cg92;
    _g87 = _g91 && _cg87;
    if (_g87) {
      sleepT = (sleepT < (15.0 - _pacemaker_local_x)) ? sleepT : (15.0 - _pacemaker_local_x);
    }
    _cg88 = _pacemaker_local__Atrig4;
    _g90 = _g87 && !_cg88;
    _g99_e1 = !(_g54 || _g97 || _g93 || _g90);
    _g83_e1 = !_g97;
    _g82 = _g46 && _cg82;
    _g89_e2 = !(_g93 || _g90);
    _g88 = _g87 && _cg88 || _g94 && _cg92;
    _g92 = !_g54;
    _g83_e1 = (_g83_e1 || _g82) && (_g89_e2 || _g88) && (_g92 || _g62) && (_g82 || _g88 || _g62);
    if (_g83_e1) {
      _taken_transitions[13] += 1;
      _pacemaker_local__CFSterm = true;
    }
    _g89_e2 = _g48 || _g53;
    _cg101 = _pacemaker_local__CFSterm;
    _g98 = _g89_e2 && !_cg101;
    _g89 = !_g98;
    _g83 = _g89_e2 && _cg101;
    _g98_e3 = (_g99_e1 || _g83_e1) && (_g89 || _g83) && (_g83_e1 || _g83);
    if (_g98_e3) {
      _taken_transitions[12] += 1;
    }
    _g79 = _GO || _g98_e3 || _g74 && !VS;
    _g104 = _pg135;
    _cg109 = VS || VP;
    _g101 = _g104 && _cg109;
    if (_g101) {
      _taken_transitions[14] += 1;
      _pacemaker_local_x1 = 0;
      _pacemaker_local__CFSterm1 = false;
      _pacemaker_local__Atrig5 = false;
    }
    _g102 = _pg120;
    if (_g102) {
      _pacemaker_local_x1 += deltaT;
    }
    _g99_e1 = _pg102_e2;
    _cg128 = _pacemaker_local_x1 >= 9;
    _g102_e2 = _g101 || _g99_e1 && !_cg128;
    _g99 = _g99_e1 && _cg128;
    if (_g99) {
      _pacemaker_local__Atrig5 = true;
    }
    _g105 = _g101 || _g5;
    _cg113 = _pacemaker_local__Atrig5;
    _g78 = _g105 && !_cg113;
    _g128 = _pg121;
    _g116 = _pg124;
    _g125 = _g101 || _g128 || _g116;
    _cg118 = _pacemaker_local_x1 < 9.0;
    _g122 = _g125 && !_cg118;
    _cg123 = _pacemaker_local__Atrig5;
    _g124 = _g122 && !_cg123;
    _g118 = _g125 && _cg118;
    if (_g118) {
      sleepT = (sleepT < (9.0 - _pacemaker_local_x1)) ? sleepT : (9.0 - _pacemaker_local_x1);
    }
    _cg119 = _pacemaker_local__Atrig5;
    _g121 = _g118 && !_cg119;
    _g130_e1 = !(_g102_e2 || _g78 || _g124 || _g121);
    _g114_e1 = !_g78;
    _g113 = _g105 && _cg113;
    _g120_e2 = !(_g124 || _g121);
    _g123 = _g118 && _cg119 || _g122 && _cg123;
    _g119 = !_g102_e2;
    _g129 = (_g114_e1 || _g113) && (_g120_e2 || _g123) && (_g119 || _g99) && (_g113 || _g123 || _g99);
    if (_g129) {
      _taken_transitions[16] += 1;
      _pacemaker_local__CFSterm1 = true;
    }
    _g120_e2 = _g101 || _g102;
    _cg132 = _pacemaker_local__CFSterm1;
    _g120 = _g120_e2 && !_cg132;
    _g114_e1 = !_g120;
    _g114 = _g120_e2 && _cg132;
    _g129_e3 = (_g130_e1 || _g129) && (_g114_e1 || _g114) && (_g129 || _g114);
    if (_g129_e3) {
      _taken_transitions[15] += 1;
    }
    _g135 = _GO || _g129_e3 || _g104 && !_cg109;
    _g110 = _pg141;
    _g132 = _pg175;
    _g130_e1 = _pg177;
    _g133 = !(_g110 || _g132 || _g130_e1);
    _g130 = _pg145;
    _cg171 = VS || VP;
    _g133_e2 = _g130 && _cg171;
    if (_g133_e2) {
      _pacemaker_local__Atrig6 = true;
    }
    _g109 = !(_g132 || _g130_e1);
    _cg147 = _pacemaker_local__Atrig6;
    _g136 = _pg176;
    _cg166 = _pacemaker_local__Atrig6;
    _g168 = _g136 && !_cg166;
    if (_g168) {
      _pacemaker_local_x2 += deltaT;
    }
    _cg157 = _pacemaker_local__Atrig6;
    _g159 = _g110 && !_cg157;
    _cg159 = _pacemaker_local_x2 >= 10;
    _g160 = _g159 && _cg159;
    if (_g160) {
      _pacemaker_local__Atrig7 = true;
    }
    _cg153 = _pacemaker_local__Atrig6;
    _g149 = _g130_e1 && !_cg147 || _g132 && !_cg153;
    _cg149 = _pacemaker_local_x2 < 10.0;
    _g150 = _g149 && _cg149;
    if (_g150) {
      sleepT = (sleepT < (10.0 - _pacemaker_local_x2)) ? sleepT : (10.0 - _pacemaker_local_x2);
    }
    _cg150 = _pacemaker_local__Atrig7;
    _g149 = _g149 && !_cg149;
    _cg151 = _pacemaker_local__Atrig7;
    _g153 = _g130_e1 && _cg147 || _g150 && _cg150 || _g149 && _cg151 || _g132 && _cg153;
    _g147 = !_g110;
    _g160 = _g110 && _cg157 || _g160;
    _g157 = (_g109 || _g153) && (_g147 || _g160) && (_g153 || _g160);
    _cg161 = _pacemaker_local__Atrig6;
    _g148_e1 = _g157 && !_cg161;
    if (_g148_e1) {
      _taken_transitions[20] += 1;
      _pacemaker_local__CFSterm2 = true;
    }
    _g158_e2 = _g157 && _cg161 || _g148_e1;
    _g158 = !_g136;
    _cg168 = _pacemaker_local__CFSterm2;
    _g148 = _g136 && _cg166 || _g168 && _cg168;
    _g163 = !_g130;
    _g161 = _g130 && !_cg171;
    _cg174 = _pacemaker_local__CFSterm2;
    _g166 = _g133_e2 || _g161 && _cg174;
    _g171 = (_g133 || _g158_e2) && (_g158 || _g148) && (_g163 || _g166) && (_g158_e2 || _g148 || _g166);
    _cg175 = _pacemaker_local__Atrig6;
    _g172 = _g171 && !_cg175;
    if (_g172) {
      _taken_transitions[19] += 1;
    }
    _g167 = _pg167_e2;
    _cg140 = VS || VP;
    _g167_e2 = _GO || _g172 || _g167 && !_cg140;
    _g162_e1 = _g167 && _cg140;
    if (_g162_e1) {
      _taken_transitions[17] += 1;
    }
    _g173_e3 = _g171 && _cg175;
    if (_g173_e3) {
      _taken_transitions[18] += 1;
    }
    _g173 = _g162_e1 || _g173_e3;
    if (_g173) {
      _pacemaker_local_x2 = 0;
      _pacemaker_local__CFSterm2 = false;
      _pacemaker_local__Atrig6 = false;
      _pacemaker_local__Atrig7 = false;
    }
    _cg144 = _pacemaker_local_x2 < 10.0;
    _g162 = _g173 && _cg144;
    if (_g162) {
      sleepT = (sleepT < (10.0 - _pacemaker_local_x2)) ? sleepT : (10.0 - _pacemaker_local_x2);
    }
    _cg145 = _pacemaker_local__Atrig7;
    _g177 = _g162 && !_cg145 || _g150 && !_cg150;
    _g140 = _g173 && !_cg144;
    _cg154 = _pacemaker_local__Atrig7;
    _g175 = _g149 && !_cg151 || _g140 && !_cg154;
    _g141 = _g173 || _g159 && !_cg159;
    _cg164 = _pacemaker_local__CFSterm2;
    _g176 = _g173 && !_cg164 || _g168 && !_cg168;
    _g145 = _g173 || _g161 && !_cg174;
    _g150 = _GO || _g185;
  }

  public void tick() {
    logic();

    _pg3 = _g3;
    _pg150 = _g150;
    _pg73 = _g73;
    _pg44_e2 = _g44_e2;
    _pg45 = _g45;
    _pg68 = _g68;
    _pg78 = _g78;
    _pg97 = _g97;
    _pg14 = _g14;
    _pg8 = _g8;
    _pg17 = _g17;
    _pg37 = _g37;
    _pg31 = _g31;
    _pg40 = _g40;
    _pg79 = _g79;
    _pg98 = _g98;
    _pg54 = _g54;
    _pg90 = _g90;
    _pg93 = _g93;
    _pg135 = _g135;
    _pg120 = _g120;
    _pg102_e2 = _g102_e2;
    _pg121 = _g121;
    _pg124 = _g124;
    _pg141 = _g141;
    _pg175 = _g175;
    _pg177 = _g177;
    _pg145 = _g145;
    _pg176 = _g176;
    _pg167_e2 = _g167_e2;
    _GO = false;
  }
}
