// roc 2010-06 009e1030  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e1030
//
// 009e1030  b93067c100           mov ecx, 0xc16730
// 009e1035  e946cebcff           jmp 0x5ade80
// auto-matched from its assembly shape

struct T_func_009e1030 { void m(); };
extern T_func_009e1030 G1_func_009e1030;
void func_009e1030()
{
    G1_func_009e1030.m();
}
