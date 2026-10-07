// roc 2010-06 009e8e40  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8e40
//
// 009e8e40  b98040c200           mov ecx, 0xc24080
// 009e8e45  e9d619dbff           jmp 0x79a820
// auto-matched from its assembly shape

struct T_func_009e8e40 { void m(); };
extern T_func_009e8e40 G1_func_009e8e40;
void func_009e8e40()
{
    G1_func_009e8e40.m();
}
