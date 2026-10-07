// roc 2009-06 00898580  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898580
//
// 00898580  b9b880a400           mov ecx, 0xa480b8
// 00898585  e9861db7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898580 { void m(); };
extern T_func_00898580 G1_func_00898580;
void func_00898580()
{
    G1_func_00898580.m();
}
