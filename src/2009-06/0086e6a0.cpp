// roc 2009-06 0086e6a0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086e6a0
//
// 0086e6a0  b9f4e9a400           mov ecx, 0xa4e9f4
// 0086e6a5  e9a650c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086e6a0 { void m(); };
extern T_func_0086e6a0 G1_func_0086e6a0;
void func_0086e6a0()
{
    G1_func_0086e6a0.m();
}
