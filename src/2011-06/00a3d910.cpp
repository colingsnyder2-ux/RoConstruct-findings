// roc 2011-06 00a3d910  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d910
//
// 00a3d910  b99826cd00           mov ecx, 0xcd2698
// 00a3d915  e9a6f7a6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3d910 { void m(); };
extern T_func_00a3d910 G1_func_00a3d910;
void func_00a3d910()
{
    G1_func_00a3d910.m();
}
