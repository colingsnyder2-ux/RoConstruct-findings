// roc 2009-06 00898900  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898900
//
// 00898900  b9f854a400           mov ecx, 0xa454f8
// 00898905  e9061ab7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898900 { void m(); };
extern T_func_00898900 G1_func_00898900;
void func_00898900()
{
    G1_func_00898900.m();
}
