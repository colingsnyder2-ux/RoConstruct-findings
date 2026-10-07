// roc 2009-06 0086f9a0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086f9a0
//
// 0086f9a0  b9e0f8a400           mov ecx, 0xa4f8e0
// 0086f9a5  e9a63dc4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086f9a0 { void m(); };
extern T_func_0086f9a0 G1_func_0086f9a0;
void func_0086f9a0()
{
    G1_func_0086f9a0.m();
}
