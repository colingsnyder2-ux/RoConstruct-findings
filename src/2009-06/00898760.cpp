// roc 2009-06 00898760  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898760
//
// 00898760  b94869a400           mov ecx, 0xa46948
// 00898765  e9a61bb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898760 { void m(); };
extern T_func_00898760 G1_func_00898760;
void func_00898760()
{
    G1_func_00898760.m();
}
