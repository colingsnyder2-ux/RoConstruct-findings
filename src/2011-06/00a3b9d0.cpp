// roc 2011-06 00a3b9d0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b9d0
//
// 00a3b9d0  b958f3cc00           mov ecx, 0xccf358
// 00a3b9d5  e9e616a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3b9d0 { void m(); };
extern T_func_00a3b9d0 G1_func_00a3b9d0;
void func_00a3b9d0()
{
    G1_func_00a3b9d0.m();
}
