// roc 2009-06 00898780  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898780
//
// 00898780  b9b867a400           mov ecx, 0xa467b8
// 00898785  e9861bb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898780 { void m(); };
extern T_func_00898780 G1_func_00898780;
void func_00898780()
{
    G1_func_00898780.m();
}
