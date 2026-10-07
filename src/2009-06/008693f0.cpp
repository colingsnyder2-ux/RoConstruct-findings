// roc 2009-06 008693f0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008693f0
//
// 008693f0  b9a8b6a400           mov ecx, 0xa4b6a8
// 008693f5  e956a3c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_008693f0 { void m(); };
extern T_func_008693f0 G1_func_008693f0;
void func_008693f0()
{
    G1_func_008693f0.m();
}
