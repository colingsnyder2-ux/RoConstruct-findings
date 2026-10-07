// roc 2009-06 00898720  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898720
//
// 00898720  b9686ca400           mov ecx, 0xa46c68
// 00898725  e9e61bb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898720 { void m(); };
extern T_func_00898720 G1_func_00898720;
void func_00898720()
{
    G1_func_00898720.m();
}
