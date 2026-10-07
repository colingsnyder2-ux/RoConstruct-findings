// roc 2010-06 009e8c10  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8c10
//
// 009e8c10  b9b42fc200           mov ecx, 0xc22fb4
// 009e8c15  e90608d7ff           jmp 0x759420
// auto-matched from its assembly shape

struct T_func_009e8c10 { void m(); };
extern T_func_009e8c10 G1_func_009e8c10;
void func_009e8c10()
{
    G1_func_009e8c10.m();
}
