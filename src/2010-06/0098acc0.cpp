// roc 2010-06 0098acc0  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0098acc0
//
// 0098acc0  b9484cc000           mov ecx, 0xc04c48
// 0098acc5  e9f684b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0098acc0 { void m(); };
extern T_func_0098acc0 G1_func_0098acc0;
void func_0098acc0()
{
    G1_func_0098acc0.m();
}
