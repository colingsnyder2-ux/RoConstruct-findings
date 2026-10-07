// roc 2009-06 00898950  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898950
//
// 00898950  b91051a400           mov ecx, 0xa45110
// 00898955  e9b619b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898950 { void m(); };
extern T_func_00898950 G1_func_00898950;
void func_00898950()
{
    G1_func_00898950.m();
}
