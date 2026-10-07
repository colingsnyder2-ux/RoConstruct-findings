// roc 2010-06 009e8c40  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8c40
//
// 009e8c40  b92030c200           mov ecx, 0xc23020
// 009e8c45  e98621d7ff           jmp 0x75add0
// auto-matched from its assembly shape

struct T_func_009e8c40 { void m(); };
extern T_func_009e8c40 G1_func_009e8c40;
void func_009e8c40()
{
    G1_func_009e8c40.m();
}
