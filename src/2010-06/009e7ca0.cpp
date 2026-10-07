// roc 2010-06 009e7ca0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7ca0
//
// 009e7ca0  b95014c200           mov ecx, 0xc21450
// 009e7ca5  e9c6e8baff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e7ca0 { void m(); };
extern T_func_009e7ca0 G1_func_009e7ca0;
void func_009e7ca0()
{
    G1_func_009e7ca0.m();
}
