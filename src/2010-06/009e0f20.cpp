// roc 2010-06 009e0f20  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0f20
//
// 009e0f20  b92077c100           mov ecx, 0xc17720
// 009e0f25  e9c6fcbcff           jmp 0x5b0bf0
// auto-matched from its assembly shape

struct T_func_009e0f20 { void m(); };
extern T_func_009e0f20 G1_func_009e0f20;
void func_009e0f20()
{
    G1_func_009e0f20.m();
}
