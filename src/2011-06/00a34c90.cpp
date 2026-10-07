// roc 2011-06 00a34c90  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34c90
//
// 00a34c90  b9a0afcb00           mov ecx, 0xcbafa0
// 00a34c95  e93695b5ff           jmp 0x58e1d0
// auto-matched from its assembly shape

struct T_func_00a34c90 { void m(); };
extern T_func_00a34c90 G1_func_00a34c90;
void func_00a34c90()
{
    G1_func_00a34c90.m();
}
