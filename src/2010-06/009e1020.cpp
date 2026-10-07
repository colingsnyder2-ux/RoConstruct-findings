// roc 2010-06 009e1020  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e1020
//
// 009e1020  b92068c100           mov ecx, 0xc16820
// 009e1025  e946d1bcff           jmp 0x5ae170
// auto-matched from its assembly shape

struct T_func_009e1020 { void m(); };
extern T_func_009e1020 G1_func_009e1020;
void func_009e1020()
{
    G1_func_009e1020.m();
}
