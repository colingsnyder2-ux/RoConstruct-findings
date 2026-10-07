// roc 2009-06 0086e6c0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086e6c0
//
// 0086e6c0  b958eba400           mov ecx, 0xa4eb58
// 0086e6c5  e98650c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086e6c0 { void m(); };
extern T_func_0086e6c0 G1_func_0086e6c0;
void func_0086e6c0()
{
    G1_func_0086e6c0.m();
}
