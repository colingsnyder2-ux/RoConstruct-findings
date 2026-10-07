// roc 2009-06 0086c8c0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086c8c0
//
// 0086c8c0  b900d6a400           mov ecx, 0xa4d600
// 0086c8c5  e9866ec4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086c8c0 { void m(); };
extern T_func_0086c8c0 G1_func_0086c8c0;
void func_0086c8c0()
{
    G1_func_0086c8c0.m();
}
