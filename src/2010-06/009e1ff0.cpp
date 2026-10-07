// roc 2010-06 009e1ff0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e1ff0
//
// 009e1ff0  b9f887c100           mov ecx, 0xc187f8
// 009e1ff5  e9a66fa8ff           jmp 0x468fa0
// auto-matched from its assembly shape

struct T_func_009e1ff0 { void m(); };
extern T_func_009e1ff0 G1_func_009e1ff0;
void func_009e1ff0()
{
    G1_func_009e1ff0.m();
}
