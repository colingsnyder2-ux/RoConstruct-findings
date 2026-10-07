// roc 2010-06 009e7ab0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7ab0
//
// 009e7ab0  b98811c200           mov ecx, 0xc21188
// 009e7ab5  e9b6eabaff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e7ab0 { void m(); };
extern T_func_009e7ab0 G1_func_009e7ab0;
void func_009e7ab0()
{
    G1_func_009e7ab0.m();
}
