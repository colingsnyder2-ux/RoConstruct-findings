// roc 2007-08 00777e30  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777e30
//
// 00777e30  b9e0bf8b00           mov ecx, 0x8bbfe0
// 00777e35  e986eec9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_00777e30 { void m(); };
extern T_func_00777e30 G1_func_00777e30;
void func_00777e30()
{
    G1_func_00777e30.m();
}
