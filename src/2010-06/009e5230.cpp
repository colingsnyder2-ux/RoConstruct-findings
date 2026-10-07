// roc 2010-06 009e5230  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5230
//
// 009e5230  b970e1c100           mov ecx, 0xc1e170
// 009e5235  e93613bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e5230 { void m(); };
extern T_func_009e5230 G1_func_009e5230;
void func_009e5230()
{
    G1_func_009e5230.m();
}
