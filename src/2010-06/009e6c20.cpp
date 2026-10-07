// roc 2010-06 009e6c20  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6c20
//
// 009e6c20  b90800c200           mov ecx, 0xc20008
// 009e6c25  e946f9baff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e6c20 { void m(); };
extern T_func_009e6c20 G1_func_009e6c20;
void func_009e6c20()
{
    G1_func_009e6c20.m();
}
