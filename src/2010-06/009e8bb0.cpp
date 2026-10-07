// roc 2010-06 009e8bb0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8bb0
//
// 009e8bb0  b9dc2ec200           mov ecx, 0xc22edc
// 009e8bb5  e91622d7ff           jmp 0x75add0
// auto-matched from its assembly shape

struct T_func_009e8bb0 { void m(); };
extern T_func_009e8bb0 G1_func_009e8bb0;
void func_009e8bb0()
{
    G1_func_009e8bb0.m();
}
