// roc 2009-06 0086d3f0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086d3f0
//
// 0086d3f0  b978e3a400           mov ecx, 0xa4e378
// 0086d3f5  e95663c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086d3f0 { void m(); };
extern T_func_0086d3f0 G1_func_0086d3f0;
void func_0086d3f0()
{
    G1_func_0086d3f0.m();
}
