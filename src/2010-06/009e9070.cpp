// roc 2010-06 009e9070  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e9070
//
// 009e9070  b92856c200           mov ecx, 0xc25628
// 009e9075  e9a8f4dbff           jmp 0x7a8522
// auto-matched from its assembly shape

struct T_func_009e9070 { void m(); };
extern T_func_009e9070 G1_func_009e9070;
void func_009e9070()
{
    G1_func_009e9070.m();
}
