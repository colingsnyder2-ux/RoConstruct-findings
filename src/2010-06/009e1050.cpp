// roc 2010-06 009e1050  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e1050
//
// 009e1050  b95065c100           mov ecx, 0xc16550
// 009e1055  e946c8bcff           jmp 0x5ad8a0
// auto-matched from its assembly shape

struct T_func_009e1050 { void m(); };
extern T_func_009e1050 G1_func_009e1050;
void func_009e1050()
{
    G1_func_009e1050.m();
}
