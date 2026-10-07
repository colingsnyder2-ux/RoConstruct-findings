// roc 2009-06 00898790  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898790
//
// 00898790  b9f066a400           mov ecx, 0xa466f0
// 00898795  e9761bb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898790 { void m(); };
extern T_func_00898790 G1_func_00898790;
void func_00898790()
{
    G1_func_00898790.m();
}
