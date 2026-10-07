// roc 2011-06 00a3e260  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e260
//
// 00a3e260  b93c32cd00           mov ecx, 0xcd323c
// 00a3e265  e9a6e2a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3e260 { void m(); };
extern T_func_00a3e260 G1_func_00a3e260;
void func_00a3e260()
{
    G1_func_00a3e260.m();
}
