// roc 2010-06 009e1010  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e1010
//
// 009e1010  b91069c100           mov ecx, 0xc16910
// 009e1015  e946d4bcff           jmp 0x5ae460
// auto-matched from its assembly shape

struct T_func_009e1010 { void m(); };
extern T_func_009e1010 G1_func_009e1010;
void func_009e1010()
{
    G1_func_009e1010.m();
}
