// roc 2010-06 009e7c30  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7c30
//
// 009e7c30  b90814c200           mov ecx, 0xc21408
// 009e7c35  e936e9baff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e7c30 { void m(); };
extern T_func_009e7c30 G1_func_009e7c30;
void func_009e7c30()
{
    G1_func_009e7c30.m();
}
