// roc 2007-08 0077af90  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077af90
//
// 0077af90  b9904f8c00           mov ecx, 0x8c4f90
// 0077af95  e926bdc9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077af90 { void m(); };
extern T_func_0077af90 G1_func_0077af90;
void func_0077af90()
{
    G1_func_0077af90.m();
}
