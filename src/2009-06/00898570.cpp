// roc 2009-06 00898570  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898570
//
// 00898570  b98081a400           mov ecx, 0xa48180
// 00898575  e9961db7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898570 { void m(); };
extern T_func_00898570 G1_func_00898570;
void func_00898570()
{
    G1_func_00898570.m();
}
