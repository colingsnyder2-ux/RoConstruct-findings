// roc 2009-06 008989b0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008989b0
//
// 008989b0  b9604ca400           mov ecx, 0xa44c60
// 008989b5  e95619b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008989b0 { void m(); };
extern T_func_008989b0 G1_func_008989b0;
void func_008989b0()
{
    G1_func_008989b0.m();
}
