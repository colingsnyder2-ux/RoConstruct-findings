// roc 2010-06 009e52c0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e52c0
//
// 009e52c0  b900dfc100           mov ecx, 0xc1df00
// 009e52c5  e986bfd0ff           jmp 0x6f1250
// auto-matched from its assembly shape

struct T_func_009e52c0 { void m(); };
extern T_func_009e52c0 G1_func_009e52c0;
void func_009e52c0()
{
    G1_func_009e52c0.m();
}
