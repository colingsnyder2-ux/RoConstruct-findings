// roc 2009-06 0086d410  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086d410
//
// 0086d410  b9a8e1a400           mov ecx, 0xa4e1a8
// 0086d415  e93663c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086d410 { void m(); };
extern T_func_0086d410 G1_func_0086d410;
void func_0086d410()
{
    G1_func_0086d410.m();
}
