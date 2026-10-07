// roc 2010-06 009e7cb0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7cb0
//
// 009e7cb0  b99814c200           mov ecx, 0xc21498
// 009e7cb5  e9b6e8baff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e7cb0 { void m(); };
extern T_func_009e7cb0 G1_func_009e7cb0;
void func_009e7cb0()
{
    G1_func_009e7cb0.m();
}
