// roc 2011-06 00a3f420  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f420
//
// 00a3f420  b9b84ecd00           mov ecx, 0xcd4eb8
// 00a3f425  e9e6d0a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3f420 { void m(); };
extern T_func_00a3f420 G1_func_00a3f420;
void func_00a3f420()
{
    G1_func_00a3f420.m();
}
