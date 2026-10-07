// roc 2009-06 00898680  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898680
//
// 00898680  b93874a400           mov ecx, 0xa47438
// 00898685  e9861cb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898680 { void m(); };
extern T_func_00898680 G1_func_00898680;
void func_00898680()
{
    G1_func_00898680.m();
}
