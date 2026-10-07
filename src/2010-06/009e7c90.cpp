// roc 2010-06 009e7c90  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7c90
//
// 009e7c90  b90816c200           mov ecx, 0xc21608
// 009e7c95  e9b695d0ff           jmp 0x6f1250
// auto-matched from its assembly shape

struct T_func_009e7c90 { void m(); };
extern T_func_009e7c90 G1_func_009e7c90;
void func_009e7c90()
{
    G1_func_009e7c90.m();
}
