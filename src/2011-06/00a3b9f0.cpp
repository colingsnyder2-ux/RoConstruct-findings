// roc 2011-06 00a3b9f0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b9f0
//
// 00a3b9f0  b928f3cc00           mov ecx, 0xccf328
// 00a3b9f5  e9160ba7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3b9f0 { void m(); };
extern T_func_00a3b9f0 G1_func_00a3b9f0;
void func_00a3b9f0()
{
    G1_func_00a3b9f0.m();
}
