// roc 2009-06 00898550  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898550
//
// 00898550  b91083a400           mov ecx, 0xa48310
// 00898555  e9b61db7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898550 { void m(); };
extern T_func_00898550 G1_func_00898550;
void func_00898550()
{
    G1_func_00898550.m();
}
