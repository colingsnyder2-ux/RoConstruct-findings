// roc 2010-06 009e2ed0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2ed0
//
// 009e2ed0  b900a1c100           mov ecx, 0xc1a100
// 009e2ed5  e9a69cc3ff           jmp 0x61cb80
// auto-matched from its assembly shape

struct T_func_009e2ed0 { void m(); };
extern T_func_009e2ed0 G1_func_009e2ed0;
void func_009e2ed0()
{
    G1_func_009e2ed0.m();
}
