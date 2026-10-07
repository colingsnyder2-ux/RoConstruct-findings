// roc 2010-06 009e52a0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e52a0
//
// 009e52a0  b938dcc100           mov ecx, 0xc1dc38
// 009e52a5  e9c612bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e52a0 { void m(); };
extern T_func_009e52a0 G1_func_009e52a0;
void func_009e52a0()
{
    G1_func_009e52a0.m();
}
