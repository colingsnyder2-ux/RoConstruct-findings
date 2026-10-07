// roc 2010-06 009e8be0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8be0
//
// 009e8be0  b9482fc200           mov ecx, 0xc22f48
// 009e8be5  e93608d7ff           jmp 0x759420
// auto-matched from its assembly shape

struct T_func_009e8be0 { void m(); };
extern T_func_009e8be0 G1_func_009e8be0;
void func_009e8be0()
{
    G1_func_009e8be0.m();
}
