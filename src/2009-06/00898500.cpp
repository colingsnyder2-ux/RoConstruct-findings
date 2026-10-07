// roc 2009-06 00898500  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898500
//
// 00898500  b9f886a400           mov ecx, 0xa486f8
// 00898505  e9061eb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898500 { void m(); };
extern T_func_00898500 G1_func_00898500;
void func_00898500()
{
    G1_func_00898500.m();
}
