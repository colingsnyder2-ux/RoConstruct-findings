// roc 2011-06 00a38020  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a38020
//
// 00a38020  b9d080cc00           mov ecx, 0xcc80d0
// 00a38025  e9969ab8ff           jmp 0x5c1ac0
// auto-matched from its assembly shape

struct T_func_00a38020 { void m(); };
extern T_func_00a38020 G1_func_00a38020;
void func_00a38020()
{
    G1_func_00a38020.m();
}
