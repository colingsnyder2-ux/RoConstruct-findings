// roc 2009-06 0086e6e0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086e6e0
//
// 0086e6e0  b914eca400           mov ecx, 0xa4ec14
// 0086e6e5  e96650c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086e6e0 { void m(); };
extern T_func_0086e6e0 G1_func_0086e6e0;
void func_0086e6e0()
{
    G1_func_0086e6e0.m();
}
