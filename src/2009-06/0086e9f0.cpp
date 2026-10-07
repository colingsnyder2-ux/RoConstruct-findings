// roc 2009-06 0086e9f0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086e9f0
//
// 0086e9f0  b980eca400           mov ecx, 0xa4ec80
// 0086e9f5  e9564dc4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086e9f0 { void m(); };
extern T_func_0086e9f0 G1_func_0086e9f0;
void func_0086e9f0()
{
    G1_func_0086e9f0.m();
}
