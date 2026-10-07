// roc 2009-06 00898450  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898450
//
// 00898450  b9908fa400           mov ecx, 0xa48f90
// 00898455  e9b61eb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898450 { void m(); };
extern T_func_00898450 G1_func_00898450;
void func_00898450()
{
    G1_func_00898450.m();
}
