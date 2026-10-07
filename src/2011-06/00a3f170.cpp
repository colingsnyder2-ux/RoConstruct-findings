// roc 2011-06 00a3f170  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f170
//
// 00a3f170  b93c49cd00           mov ecx, 0xcd493c
// 00a3f175  e996d3a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3f170 { void m(); };
extern T_func_00a3f170 G1_func_00a3f170;
void func_00a3f170()
{
    G1_func_00a3f170.m();
}
