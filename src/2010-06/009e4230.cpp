// roc 2010-06 009e4230  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4230
//
// 009e4230  b960c6c100           mov ecx, 0xc1c660
// 009e4235  e93623bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e4230 { void m(); };
extern T_func_009e4230 G1_func_009e4230;
void func_009e4230()
{
    G1_func_009e4230.m();
}
