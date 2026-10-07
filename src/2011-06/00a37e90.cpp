// roc 2011-06 00a37e90  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37e90
//
// 00a37e90  b93891cc00           mov ecx, 0xcc9138
// 00a37e95  e926dcb8ff           jmp 0x5c5ac0
// auto-matched from its assembly shape

struct T_func_00a37e90 { void m(); };
extern T_func_00a37e90 G1_func_00a37e90;
void func_00a37e90()
{
    G1_func_00a37e90.m();
}
