// roc 2010-06 009e0f30  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0f30
//
// 009e0f30  b93076c100           mov ecx, 0xc17630
// 009e0f35  e986f9bcff           jmp 0x5b08c0
// auto-matched from its assembly shape

struct T_func_009e0f30 { void m(); };
extern T_func_009e0f30 G1_func_009e0f30;
void func_009e0f30()
{
    G1_func_009e0f30.m();
}
