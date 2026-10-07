// roc 2011-06 00a3d670  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d670
//
// 00a3d670  b9b022cd00           mov ecx, 0xcd22b0
// 00a3d675  e996eea6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3d670 { void m(); };
extern T_func_00a3d670 G1_func_00a3d670;
void func_00a3d670()
{
    G1_func_00a3d670.m();
}
