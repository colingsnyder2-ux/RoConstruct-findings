// roc 2010-06 009e1070  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e1070
//
// 009e1070  b97063c100           mov ecx, 0xc16370
// 009e1075  e946c1bcff           jmp 0x5ad1c0
// auto-matched from its assembly shape

struct T_func_009e1070 { void m(); };
extern T_func_009e1070 G1_func_009e1070;
void func_009e1070()
{
    G1_func_009e1070.m();
}
