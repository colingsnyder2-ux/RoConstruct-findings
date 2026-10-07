// roc 2010-06 009e7c80  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7c80
//
// 009e7c80  b9a816c200           mov ecx, 0xc216a8
// 009e7c85  e9e6e8baff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e7c80 { void m(); };
extern T_func_009e7c80 G1_func_009e7c80;
void func_009e7c80()
{
    G1_func_009e7c80.m();
}
