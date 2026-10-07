// roc 2009-06 00898930  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898930
//
// 00898930  b9a052a400           mov ecx, 0xa452a0
// 00898935  e9d619b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898930 { void m(); };
extern T_func_00898930 G1_func_00898930;
void func_00898930()
{
    G1_func_00898930.m();
}
