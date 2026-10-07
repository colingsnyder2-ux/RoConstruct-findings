// roc 2011-06 00a3ede0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ede0
//
// 00a3ede0  b93041cd00           mov ecx, 0xcd4130
// 00a3ede5  e9d6e2a6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3ede0 { void m(); };
extern T_func_00a3ede0 G1_func_00a3ede0;
void func_00a3ede0()
{
    G1_func_00a3ede0.m();
}
