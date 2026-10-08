// roc 2007-08 0077b2e0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b2e0
//
// 0077b2e0  b948568c00           mov ecx, 0x8c5648
// 0077b2e5  e9d6b9c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077b2e0 { void m(); };
extern T_func_0077b2e0 G1_func_0077b2e0;
void func_0077b2e0()
{
    G1_func_0077b2e0.m();
}
