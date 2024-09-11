/*
 * Automatically generated Java code by
 * KIELER SCCharts - The Key to Efficient Modeling
 *
 * http://rtsys.informatik.uni-kiel.de/kieler
 */

public class pacemaker2 {

  public int[] _taken_transitions;
  public double _region1_null_x;
  public double _region2_null_x;
  public double deltaT;
  public double sleepT;
  public boolean AS;
  public boolean VS;
  public boolean VRP_ACTIVE;
  public boolean URI_ACTIVE;
  public boolean PVARP_ACTIVE;
  public boolean LRI_ACTIVE;
  public boolean AVI_START;
  public boolean AEI_START;
  public boolean A_EVENT;
  public boolean V_EVENT;
  public boolean AP;
  public boolean VP;
  public boolean _pacemaker2_local__Atrig;
  public boolean _pacemaker2_local__Atrig1;
  public boolean _g4;
  public boolean _g5;
  public boolean _g6;
  public boolean _g7;
  public boolean _g11;
  public boolean _g12;
  public boolean _g14;
  public boolean _g16;
  public boolean _g17;
  public boolean _g18;
  public boolean _g19;
  public boolean _g20;
  public boolean _g22;
  public boolean _g23;
  public boolean _g26;
  public boolean _g27;
  public boolean _g28;
  public boolean _g32;
  public boolean _g35;
  public boolean _g37;
  public boolean _g38;
  public boolean _g39;
  public boolean _g40;
  public boolean _g41;
  public boolean _g43;
  public boolean _g44;
  public boolean _g47;
  public boolean _g48;
  public boolean _g49;
  public boolean _g57;
  public boolean _g61;
  public boolean _GO;
  public boolean _cg6;
  public boolean _cg4;
  public boolean _cg11;
  public boolean _cg13;
  public boolean _cg14;
  public boolean _cg18;
  public boolean _cg17;
  public boolean _cg20;
  public boolean _cg23;
  public boolean _cg26;
  public boolean _cg32;
  public boolean _cg34;
  public boolean _cg35;
  public boolean _cg39;
  public boolean _cg38;
  public boolean _cg41;
  public boolean _cg44;
  public boolean _cg47;
  public boolean _g19_e1;
  public boolean _g27_e2;
  public boolean _g40_e1;
  public boolean _g48_e2;
  public boolean _TERM;

  public pacemaker2() {
    _taken_transitions = new int[6];
  }
  public boolean _pg18;
  public boolean _pg28;
  public boolean _pg44;
  public boolean _pg14;
  public boolean _pg48_e2;
  public boolean _pg39;
  public boolean _pg49;
  public boolean _pg41;
  public boolean _pg35;
  public boolean _pg5;
  public boolean _pg20;

  public void reset() {
    _GO = true;
    _TERM = false;
    _region1_null_x = 0;
    _region2_null_x = 0;
    deltaT = 0.0;
    sleepT = 0.0;
    _taken_transitions[0] = 0;
    _taken_transitions[1] = 0;
    _taken_transitions[2] = 0;
    _taken_transitions[3] = 0;
    _taken_transitions[4] = 0;
    _taken_transitions[5] = 0;
    _pg18 = false;
    _pg28 = false;
    _pg44 = false;
    _pg14 = false;
    _pg48_e2 = false;
    _pg39 = false;
    _pg49 = false;
    _pg41 = false;
    _pg35 = false;
    _pg5 = false;
    _pg20 = false;
  }

  public void logic() {
    VRP_ACTIVE = false;
    URI_ACTIVE = false;
    PVARP_ACTIVE = false;
    LRI_ACTIVE = false;
    AVI_START = false;
    AEI_START = false;
    A_EVENT = false;
    V_EVENT = false;
    _g22 = _pg18;
    _g16 = _pg28;
    _g19_e1 = !(_g22 || _g16);
    _g57 = _pg44;
    if (_g57) {
      _region1_null_x += deltaT;
    }
    _g26 = _pg14;
    _cg26 = _region1_null_x >= 3;
    _g27 = _g26 && _cg26;
    if (_g27) {
      _pacemaker2_local__Atrig = true;
    }
    sleepT = 1000.0;
    _g22 = _g16 || _g22;
    _cg17 = _region1_null_x < 3.0;
    _g16 = _g22 && _cg17;
    if (_g16) {
      sleepT = (sleepT < (3.0 - _region1_null_x)) ? sleepT : (3.0 - _region1_null_x);
    }
    _cg18 = _pacemaker2_local__Atrig;
    _g17 = _g22 && !_cg17;
    _cg20 = _pacemaker2_local__Atrig;
    _g19 = _g16 && _cg18 || _g17 && _cg20;
    _g27_e2 = !_g26;
    _g27 = (_g19_e1 || _g19) && (_g27_e2 || _g27) && (_g19 || _g27);
    if (_g27) {
      AP |= true;
      _taken_transitions[3] += 1;
    }
    _g27_e2 = _pg48_e2;
    _cg4 = AS || AP;
    _g19_e1 = _g27_e2 && _cg4;
    if (_g19_e1) {
      A_EVENT |= true;
      _taken_transitions[0] += 1;
    }
    _g19 = _pg39;
    _g37 = _pg49;
    _g40_e1 = !(_g19 || _g37);
    _g61 = _pg41;
    if (_g61) {
      _region2_null_x += deltaT;
    }
    _g47 = _pg35;
    _cg47 = _region2_null_x >= 8;
    _g48 = _g47 && _cg47;
    if (_g48) {
      _pacemaker2_local__Atrig1 = true;
    }
    _g37 = _g37 || _g19;
    _cg38 = _region2_null_x < 8.0;
    _g43 = _g37 && _cg38;
    if (_g43) {
      sleepT = (sleepT < (8.0 - _region2_null_x)) ? sleepT : (8.0 - _region2_null_x);
    }
    _cg39 = _pacemaker2_local__Atrig1;
    _g38 = _g37 && !_cg38;
    _cg41 = _pacemaker2_local__Atrig1;
    _g40 = _g43 && _cg39 || _g38 && _cg41;
    _g48_e2 = !_g47;
    _g40_e1 = (_g40_e1 || _g40) && (_g48_e2 || _g48) && (_g40 || _g48);
    if (_g40_e1) {
      VP |= true;
      _taken_transitions[5] += 1;
    }
    _g48 = _g27_e2 && !_cg4;
    _cg6 = VS || VP;
    _g40 = _g48 && _cg6;
    if (_g40) {
      V_EVENT |= true;
      _taken_transitions[1] += 1;
    }
    _g48_e2 = _GO || _g19_e1 || _g40 || _g48 && !_cg6;
    _g4 = _pg5;
    _cg11 = A_EVENT;
    _g5 = _GO || _g27 || _g4 && !_cg11;
    _g7 = _g4 && _cg11;
    if (_g7) {
      _region1_null_x = 0;
      _taken_transitions[2] += 1;
      _pacemaker2_local__Atrig = false;
    }
    _cg13 = _region1_null_x < 3.0;
    _g6 = _g7 && _cg13;
    if (_g6) {
      sleepT = (sleepT < (3.0 - _region1_null_x)) ? sleepT : (3.0 - _region1_null_x);
    }
    _cg14 = _pacemaker2_local__Atrig;
    _g28 = _g6 && !_cg14 || _g16 && !_cg18;
    _g11 = _g7 && !_cg13;
    _cg23 = _pacemaker2_local__Atrig;
    _g18 = _g17 && !_cg20 || _g11 && !_cg23;
    _g14 = _g7 || _g26 && !_cg26;
    _g23 = _pg20;
    _cg32 = V_EVENT;
    _g20 = _GO || _g40_e1 || _g23 && !_cg32;
    _g26 = _g23 && _cg32;
    if (_g26) {
      _region2_null_x = 0;
      _taken_transitions[4] += 1;
      _pacemaker2_local__Atrig1 = false;
    }
    _cg34 = _region2_null_x < 8.0;
    _g12 = _g26 && _cg34;
    if (_g12) {
      sleepT = (sleepT < (8.0 - _region2_null_x)) ? sleepT : (8.0 - _region2_null_x);
    }
    _cg35 = _pacemaker2_local__Atrig1;
    _g49 = _g12 && !_cg35 || _g43 && !_cg39;
    _g32 = _g26 && !_cg34;
    _cg44 = _pacemaker2_local__Atrig1;
    _g39 = _g38 && !_cg41 || _g32 && !_cg44;
    _g35 = _g26 || _g47 && !_cg47;
    _g44 = _GO || _g57;
    _g41 = _GO || _g61;
  }

  public void tick() {
    logic();

    _pg18 = _g18;
    _pg28 = _g28;
    _pg44 = _g44;
    _pg14 = _g14;
    _pg48_e2 = _g48_e2;
    _pg39 = _g39;
    _pg49 = _g49;
    _pg41 = _g41;
    _pg35 = _g35;
    _pg5 = _g5;
    _pg20 = _g20;
    _GO = false;
  }
}
