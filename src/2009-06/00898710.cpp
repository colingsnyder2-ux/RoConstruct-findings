// roc 2009-06 00898710  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898710
//
// 00898710  b9306da400           mov ecx, 0xa46d30
// 00898715  e9f61bb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898710 { void m(); };
extern T_func_00898710 G1_func_00898710;
void func_00898710()
{
    G1_func_00898710.m();
}
