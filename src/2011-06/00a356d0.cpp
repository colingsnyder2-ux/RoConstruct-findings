// roc 2011-06 00a356d0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a356d0
//
// 00a356d0  b9d0dccb00           mov ecx, 0xcbdcd0
// 00a356d5  e9e679a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a356d0 { void m(); };
extern T_func_00a356d0 G1_func_00a356d0;
void func_00a356d0()
{
    G1_func_00a356d0.m();
}
