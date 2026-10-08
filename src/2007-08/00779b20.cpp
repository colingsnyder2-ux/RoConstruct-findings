// roc 2007-08 00779b20  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779b20
//
// 00779b20  b9681c8c00           mov ecx, 0x8c1c68
// 00779b25  e996d1c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_00779b20 { void m(); };
extern T_func_00779b20 G1_func_00779b20;
void func_00779b20()
{
    G1_func_00779b20.m();
}
