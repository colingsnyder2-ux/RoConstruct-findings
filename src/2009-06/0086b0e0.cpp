// roc 2009-06 0086b0e0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086b0e0
//
// 0086b0e0  b904c5a400           mov ecx, 0xa4c504
// 0086b0e5  e96686c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086b0e0 { void m(); };
extern T_func_0086b0e0 G1_func_0086b0e0;
void func_0086b0e0()
{
    G1_func_0086b0e0.m();
}
