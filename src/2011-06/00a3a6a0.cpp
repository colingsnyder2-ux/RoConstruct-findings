// roc 2011-06 00a3a6a0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a6a0
//
// 00a3a6a0  b958cccc00           mov ecx, 0xcccc58
// 00a3a6a5  e9a65fc4ff           jmp 0x680650
// auto-matched from its assembly shape

struct T_func_00a3a6a0 { void m(); };
extern T_func_00a3a6a0 G1_func_00a3a6a0;
void func_00a3a6a0()
{
    G1_func_00a3a6a0.m();
}
