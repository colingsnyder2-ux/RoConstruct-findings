// roc 2009-06 0086f110  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086f110
//
// 0086f110  b9d0f6a400           mov ecx, 0xa4f6d0
// 0086f115  e93646c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086f110 { void m(); };
extern T_func_0086f110 G1_func_0086f110;
void func_0086f110()
{
    G1_func_0086f110.m();
}
