// roc 2009-06 0086e7a0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086e7a0
//
// 0086e7a0  b948eca400           mov ecx, 0xa4ec48
// 0086e7a5  e9a64fc4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086e7a0 { void m(); };
extern T_func_0086e7a0 G1_func_0086e7a0;
void func_0086e7a0()
{
    G1_func_0086e7a0.m();
}
