// roc 2010-06 009e7c40  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7c40
//
// 009e7c40  b9e014c200           mov ecx, 0xc214e0
// 009e7c45  e926e9baff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e7c40 { void m(); };
extern T_func_009e7c40 G1_func_009e7c40;
void func_009e7c40()
{
    G1_func_009e7c40.m();
}
