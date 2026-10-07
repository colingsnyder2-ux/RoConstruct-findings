// roc 2009-06 00898470  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898470
//
// 00898470  b9008ea400           mov ecx, 0xa48e00
// 00898475  e9961eb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898470 { void m(); };
extern T_func_00898470 G1_func_00898470;
void func_00898470()
{
    G1_func_00898470.m();
}
