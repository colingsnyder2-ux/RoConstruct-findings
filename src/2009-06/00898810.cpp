// roc 2009-06 00898810  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898810
//
// 00898810  b9b060a400           mov ecx, 0xa460b0
// 00898815  e9f61ab7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898810 { void m(); };
extern T_func_00898810 G1_func_00898810;
void func_00898810()
{
    G1_func_00898810.m();
}
