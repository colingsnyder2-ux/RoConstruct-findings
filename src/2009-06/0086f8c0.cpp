// roc 2009-06 0086f8c0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086f8c0
//
// 0086f8c0  b9bcf9a400           mov ecx, 0xa4f9bc
// 0086f8c5  e9863ec4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086f8c0 { void m(); };
extern T_func_0086f8c0 G1_func_0086f8c0;
void func_0086f8c0()
{
    G1_func_0086f8c0.m();
}
