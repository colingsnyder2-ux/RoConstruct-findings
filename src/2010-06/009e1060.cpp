// roc 2010-06 009e1060  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e1060
//
// 009e1060  b96064c100           mov ecx, 0xc16460
// 009e1065  e946c5bcff           jmp 0x5ad5b0
// auto-matched from its assembly shape

struct T_func_009e1060 { void m(); };
extern T_func_009e1060 G1_func_009e1060;
void func_009e1060()
{
    G1_func_009e1060.m();
}
