// roc 2009-06 00898530  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898530
//
// 00898530  b9a084a400           mov ecx, 0xa484a0
// 00898535  e9d61db7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898530 { void m(); };
extern T_func_00898530 G1_func_00898530;
void func_00898530()
{
    G1_func_00898530.m();
}
