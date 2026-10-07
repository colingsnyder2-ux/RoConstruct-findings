// roc 2010-06 00989a60  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00989a60
//
// 00989a60  b9ec45c000           mov ecx, 0xc045ec
// 00989a65  e95697b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00989a60 { void m(); };
extern T_func_00989a60 G1_func_00989a60;
void func_00989a60()
{
    G1_func_00989a60.m();
}
