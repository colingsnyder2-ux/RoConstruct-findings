// roc 2009-06 00898630  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898630
//
// 00898630  b92078a400           mov ecx, 0xa47820
// 00898635  e9d61cb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898630 { void m(); };
extern T_func_00898630 G1_func_00898630;
void func_00898630()
{
    G1_func_00898630.m();
}
