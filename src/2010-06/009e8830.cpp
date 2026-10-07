// roc 2010-06 009e8830  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8830
//
// 009e8830  b95824c200           mov ecx, 0xc22458
// 009e8835  e936ddbaff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e8830 { void m(); };
extern T_func_009e8830 G1_func_009e8830;
void func_009e8830()
{
    G1_func_009e8830.m();
}
