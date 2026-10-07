// roc 2009-06 00898670  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898670
//
// 00898670  b90075a400           mov ecx, 0xa47500
// 00898675  e9961cb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898670 { void m(); };
extern T_func_00898670 G1_func_00898670;
void func_00898670()
{
    G1_func_00898670.m();
}
