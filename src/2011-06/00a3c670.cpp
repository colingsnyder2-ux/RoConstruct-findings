// roc 2011-06 00a3c670  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c670
//
// 00a3c670  b9b806cd00           mov ecx, 0xcd06b8
// 00a3c675  e906dcc6ff           jmp 0x6aa280
// auto-matched from its assembly shape

struct T_func_00a3c670 { void m(); };
extern T_func_00a3c670 G1_func_00a3c670;
void func_00a3c670()
{
    G1_func_00a3c670.m();
}
