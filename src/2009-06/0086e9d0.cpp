// roc 2009-06 0086e9d0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086e9d0
//
// 0086e9d0  b9b8f0a400           mov ecx, 0xa4f0b8
// 0086e9d5  e9764dc4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086e9d0 { void m(); };
extern T_func_0086e9d0 G1_func_0086e9d0;
void func_0086e9d0()
{
    G1_func_0086e9d0.m();
}
