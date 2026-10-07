// roc 2009-06 0086f9c0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086f9c0
//
// 0086f9c0  b954fba400           mov ecx, 0xa4fb54
// 0086f9c5  e9863dc4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086f9c0 { void m(); };
extern T_func_0086f9c0 G1_func_0086f9c0;
void func_0086f9c0()
{
    G1_func_0086f9c0.m();
}
