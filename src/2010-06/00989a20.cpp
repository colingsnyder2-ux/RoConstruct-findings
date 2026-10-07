// roc 2010-06 00989a20  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00989a20
//
// 00989a20  b9b848c000           mov ecx, 0xc048b8
// 00989a25  e99697b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00989a20 { void m(); };
extern T_func_00989a20 G1_func_00989a20;
void func_00989a20()
{
    G1_func_00989a20.m();
}
