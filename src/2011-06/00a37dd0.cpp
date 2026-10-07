// roc 2011-06 00a37dd0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37dd0
//
// 00a37dd0  b91899cc00           mov ecx, 0xcc9918
// 00a37dd5  e916feb8ff           jmp 0x5c7bf0
// auto-matched from its assembly shape

struct T_func_00a37dd0 { void m(); };
extern T_func_00a37dd0 G1_func_00a37dd0;
void func_00a37dd0()
{
    G1_func_00a37dd0.m();
}
