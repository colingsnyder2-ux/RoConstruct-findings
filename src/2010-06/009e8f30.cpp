// roc 2010-06 009e8f30  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8f30
//
// 009e8f30  b9f055c200           mov ecx, 0xc255f0
// 009e8f35  e9e69bdeff           jmp 0x7d2b20
// auto-matched from its assembly shape

struct T_func_009e8f30 { void m(); };
extern T_func_009e8f30 G1_func_009e8f30;
void func_009e8f30()
{
    G1_func_009e8f30.m();
}
