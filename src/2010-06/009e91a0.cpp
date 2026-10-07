// roc 2010-06 009e91a0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e91a0
//
// 009e91a0  b9a466c200           mov ecx, 0xc266a4
// 009e91a5  e9d23df9ff           jmp 0x97cf7c
// auto-matched from its assembly shape

struct T_func_009e91a0 { void m(); };
extern T_func_009e91a0 G1_func_009e91a0;
void func_009e91a0()
{
    G1_func_009e91a0.m();
}
