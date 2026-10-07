// roc 2011-06 00a3be80  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3be80
//
// 00a3be80  b910f9cc00           mov ecx, 0xccf910
// 00a3be85  e93612a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3be80 { void m(); };
extern T_func_00a3be80 G1_func_00a3be80;
void func_00a3be80()
{
    G1_func_00a3be80.m();
}
