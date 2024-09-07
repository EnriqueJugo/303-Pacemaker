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
  public boolean _g9;
  public boolean _g10;
  public boolean _g12;
  public boolean _g13;
  public boolean _g15;
  public boolean _g16;
  public boolean _g19;
  public boolean _g20;
  public boolean _g22;
  public boolean _g23;
  public boolean _g32;
  public boolean _g33;
  public boolean _g34;
  public boolean _g35;
  public boolean _g36;
  public boolean _g37;
  public boolean _g38;
  public boolean _g39;
  public boolean _g42;
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
  public boolean _g73;
  public boolean _g74;
  public boolean _g84;
  public boolean _g85;
  public boolean _g96;
  public boolean _g103;
  public boolean _g115;
  public boolean _g116;
  public boolean _g127;
  public boolean _g134;
  public boolean _g190;
  public boolean _g198;
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
  public boolean _cg148;
  public boolean _cg146;
  public boolean _cg149;
  public boolean _cg150;
  public boolean _cg155;
  public boolean _cg152;
  public boolean _cg156;
  public boolean _cg158;
  public boolean _cg154;
  public boolean _cg159;
  public boolean _cg164;
  public boolean _cg162;
  public boolean _cg166;
  public boolean _cg169;
  public boolean _cg173;
  public boolean _cg171;
  public boolean _cg179;
  public boolean _cg176;
  public boolean _cg180;
  public boolean _g36_e1;
  public boolean _g44_e2;
  public boolean _g51_e1;
  public boolean _g61_e2;
  public boolean _TERM;

  public pacemaker() {
    _taken_transitions = new int[21];
  }
  public boolean _pg3;
  public boolean _pg46;
  public boolean _pg73;
  public boolean _pg44;
  public boolean _pg45;
  public boolean _pg68;
  public boolean _pg115;
  public boolean _pg84;
  public boolean _pg19;
  public boolean _pg15;
  public boolean _pg9;
  public boolean _pg42;
  public boolean _pg32;
  public boolean _pg38;
  public boolean _pg103;
  public boolean _pg96;
  public boolean _pg134;
  public boolean _pg127;

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
    _pg46 = false;
    _pg73 = false;
    _pg44 = false;
    _pg45 = false;
    _pg68 = false;
    _pg115 = false;
    _pg84 = false;
    _pg19 = false;
    _pg15 = false;
    _pg9 = false;
    _pg42 = false;
    _pg32 = false;
    _pg38 = false;
    _pg103 = false;
    _pg96 = false;
    _pg134 = false;
    _pg127 = false;
  }

  public void logic() {
    _g4 = _pg3;
    _g73 = _g4 && !AS;
    _g3 = _GO || _g73 && !VS;
    _g4 = _g4 && AS;
    if (_g4) {
      _taken_transitions[0] += 1;
    }
    _g190 = _pg46;
    if (_g190) {
      _region0_null_x += deltaT;
    }
    _g56 = _pg73;
    _g50 = _pg44;
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
      AP = false;
      VP = false;
    }
    _g64 = _g51_e1 && !AS;
    if (_g64) {
      AP |= true;
      _taken_transitions[9] += 1;
    }
    _g198 = _g4 || _g61_e2 || _g64;
    if (_g198) {
      _region0_null_x = 0;
      _pacemaker_local__Atrig = false;
      _pacemaker_local__Atrig1 = false;
    }
    _cg7 = _region0_null_x < 3.0;
    _g65 = _g198 && _cg7;
    if (_g65) {
      sleepT = (sleepT < (3.0 - _region0_null_x)) ? sleepT : (3.0 - _region0_null_x);
    }
    _cg8 = _pacemaker_local__Atrig || _pacemaker_local__Atrig1;
    _g66 = _pg115;
    if (_g66) {
      URI_ACTIVE |= true;
    }
    _g5 = _pg84;
    if (_g5) {
      VRP_ACTIVE |= true;
    }
    _g67 = _pg19;
    _cg20 = (VS || VP) && !VRP_ACTIVE;
    _g6 = _g67 && !_cg20;
    _cg22 = _region0_null_x >= 3 && !URI_ACTIVE;
    _g8 = _g6 && _cg22;
    if (_g8) {
      _pacemaker_local__Atrig = true;
    }
    _g116 = _pg15;
    _g85 = _pg9;
    _cg10 = (VS || VP) && !VRP_ACTIVE;
    _cg16 = (VS || VP) && !VRP_ACTIVE;
    _g20 = _g85 && !_cg10 || _g116 && !_cg16;
    _cg12 = _region0_null_x < 3.0;
    _g22 = _g20 && _cg12;
    if (_g22) {
      sleepT = (sleepT < (3.0 - _region0_null_x)) ? sleepT : (3.0 - _region0_null_x);
    }
    _cg17 = _pacemaker_local__Atrig || _pacemaker_local__Atrig1;
    _g23 = _pg42;
    _cg43 = _region0_null_x >= 5;
    _g16 = _g23 && _cg43;
    if (_g16) {
      _pacemaker_local__Atrig2 = true;
    }
    _g10 = _pg32;
    _g12 = _pg38;
    _g13 = _g10 || _g12;
    _cg34 = _region0_null_x < 5.0;
    _g35 = _g13 && _cg34;
    if (_g35) {
      sleepT = (sleepT < (5.0 - _region0_null_x)) ? sleepT : (5.0 - _region0_null_x);
    }
    _cg35 = _pacemaker_local__Atrig2;
    _g34 = _g13 && !_cg34;
    _cg37 = _pacemaker_local__Atrig2;
    _g37 = _g35 && _cg35 || _g34 && _cg37;
    _g35 = !(_g12 || _g10);
    _g33 = !_g23;
    _g39 = (_g35 || _g37) && (_g33 || _g16) && (_g37 || _g16);
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
    _g44_e2 = _g36_e1 && _cg47;
    if (_g44_e2) {
      sleepT = (sleepT < (8.0 - _region0_null_x)) ? sleepT : (8.0 - _region0_null_x);
    }
    _cg48 = _pacemaker_local__Atrig3;
    _g44 = _g44_e2 && !_cg48 || _g53 && !_cg53;
    _g36 = _g36_e1 && !_cg47;
    _cg57 = _pacemaker_local__Atrig3;
    _g73 = _g52 && !_cg54 || _g36 && !_cg57;
    _g45 = _g36_e1 || _g62 && !_cg62;
    _g74 = _pg103;
    if (_g74) {
      _pacemaker_local_x += deltaT;
    }
    _g48 = _pg96;
    _cg97 = _pacemaker_local_x >= 15;
    _g53 = _g48 && _cg97;
    if (_g53) {
      _pacemaker_local__Atrig4 = true;
    }
    _g57 = _pg134;
    if (_g57) {
      _pacemaker_local_x1 += deltaT;
    }
    _g54 = _pg127;
    _cg128 = _pacemaker_local_x1 >= 9;
    _g62 = _g54 && _cg128;
    if (_g62) {
      _pacemaker_local__Atrig5 = true;
    }
    _g46 = _GO || _g190;
  }

  public void tick() {
    logic();

    _pg3 = _g3;
    _pg46 = _g46;
    _pg73 = _g73;
    _pg44 = _g44;
    _pg45 = _g45;
    _pg68 = _g68;
    _pg115 = _g115;
    _pg84 = _g84;
    _pg19 = _g19;
    _pg15 = _g15;
    _pg9 = _g9;
    _pg42 = _g42;
    _pg32 = _g32;
    _pg38 = _g38;
    _pg103 = _g103;
    _pg96 = _g96;
    _pg134 = _g134;
    _pg127 = _g127;
    _GO = false;
  }
}
