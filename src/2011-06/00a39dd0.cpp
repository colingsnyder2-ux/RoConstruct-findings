// roc 2011-06 00a39dd0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39dd0
//
// 00a39dd0  b9b8c1cc00           mov ecx, 0xccc1b8
// 00a39dd5  e93627a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39dd0 { void m(); };
extern T_func_00a39dd0 G1_func_00a39dd0;
void func_00a39dd0()
{
    G1_func_00a39dd0.m();
}
