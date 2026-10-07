// roc 2011-06 00a3b770  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b770
//
// 00a3b770  b918e8cc00           mov ecx, 0xcce818
// 00a3b775  e9d64ec4ff           jmp 0x680650
// auto-matched from its assembly shape

struct T_func_00a3b770 { void m(); };
extern T_func_00a3b770 G1_func_00a3b770;
void func_00a3b770()
{
    G1_func_00a3b770.m();
}
