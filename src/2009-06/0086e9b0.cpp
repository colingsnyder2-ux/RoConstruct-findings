// roc 2009-06 0086e9b0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086e9b0
//
// 0086e9b0  b950efa400           mov ecx, 0xa4ef50
// 0086e9b5  e9964dc4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086e9b0 { void m(); };
extern T_func_0086e9b0 G1_func_0086e9b0;
void func_0086e9b0()
{
    G1_func_0086e9b0.m();
}
