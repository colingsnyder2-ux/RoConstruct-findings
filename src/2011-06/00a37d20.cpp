// roc 2011-06 00a37d20  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37d20
//
// 00a37d20  b950a0cc00           mov ecx, 0xcca050
// 00a37d25  e9661eb9ff           jmp 0x5c9b90
// auto-matched from its assembly shape

struct T_func_00a37d20 { void m(); };
extern T_func_00a37d20 G1_func_00a37d20;
void func_00a37d20()
{
    G1_func_00a37d20.m();
}
