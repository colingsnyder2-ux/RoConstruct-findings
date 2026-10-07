// roc 2010-06 009e8ee0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8ee0
//
// 009e8ee0  b9a850c200           mov ecx, 0xc250a8
// 009e8ee5  e9e6cfdbff           jmp 0x7a5ed0
// auto-matched from its assembly shape

struct T_func_009e8ee0 { void m(); };
extern T_func_009e8ee0 G1_func_009e8ee0;
void func_009e8ee0()
{
    G1_func_009e8ee0.m();
}
