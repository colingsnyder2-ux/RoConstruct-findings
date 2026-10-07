// roc 2010-06 009e9180  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e9180
//
// 009e9180  b92865c200           mov ecx, 0xc26528
// 009e9185  e9e6b3e8ff           jmp 0x874570
// auto-matched from its assembly shape

struct T_func_009e9180 { void m(); };
extern T_func_009e9180 G1_func_009e9180;
void func_009e9180()
{
    G1_func_009e9180.m();
}
