// roc 2010-06 009e90c0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e90c0
//
// 009e90c0  b9985dc200           mov ecx, 0xc25d98
// 009e90c5  e9dc41f9ff           jmp 0x97d2a6
// auto-matched from its assembly shape

struct T_func_009e90c0 { void m(); };
extern T_func_009e90c0 G1_func_009e90c0;
void func_009e90c0()
{
    G1_func_009e90c0.m();
}
