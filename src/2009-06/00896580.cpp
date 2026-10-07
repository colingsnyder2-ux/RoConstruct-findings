// roc 2009-06 00896580  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896580
//
// 00896580  b94013a400           mov ecx, 0xa41340
// 00896585  e9863db7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00896580 { void m(); };
extern T_func_00896580 G1_func_00896580;
void func_00896580()
{
    G1_func_00896580.m();
}
