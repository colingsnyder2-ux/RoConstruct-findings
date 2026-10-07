// roc 2009-06 008989f0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008989f0
//
// 008989f0  b918a3a400           mov ecx, 0xa4a318
// 008989f5  e91660d5ff           jmp 0x5eea10
// auto-matched from its assembly shape

struct T_func_008989f0 { void m(); };
extern T_func_008989f0 G1_func_008989f0;
void func_008989f0()
{
    G1_func_008989f0.m();
}
