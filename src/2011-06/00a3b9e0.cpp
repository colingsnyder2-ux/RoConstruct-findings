// roc 2011-06 00a3b9e0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b9e0
//
// 00a3b9e0  b998f2cc00           mov ecx, 0xccf298
// 00a3b9e5  e9d616a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3b9e0 { void m(); };
extern T_func_00a3b9e0 G1_func_00a3b9e0;
void func_00a3b9e0()
{
    G1_func_00a3b9e0.m();
}
