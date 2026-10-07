// roc 2010-06 0098cf30  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0098cf30
//
// 0098cf30  b94068c000           mov ecx, 0xc06840
// 0098cf35  e98662b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0098cf30 { void m(); };
extern T_func_0098cf30 G1_func_0098cf30;
void func_0098cf30()
{
    G1_func_0098cf30.m();
}
