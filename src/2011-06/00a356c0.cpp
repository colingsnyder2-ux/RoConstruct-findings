// roc 2011-06 00a356c0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a356c0
//
// 00a356c0  b998dccb00           mov ecx, 0xcbdc98
// 00a356c5  e9f679a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a356c0 { void m(); };
extern T_func_00a356c0 G1_func_00a356c0;
void func_00a356c0()
{
    G1_func_00a356c0.m();
}
