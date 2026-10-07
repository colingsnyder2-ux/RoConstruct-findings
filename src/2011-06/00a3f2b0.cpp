// roc 2011-06 00a3f2b0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f2b0
//
// 00a3f2b0  b9b84acd00           mov ecx, 0xcd4ab8
// 00a3f2b5  e956d2a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3f2b0 { void m(); };
extern T_func_00a3f2b0 G1_func_00a3f2b0;
void func_00a3f2b0()
{
    G1_func_00a3f2b0.m();
}
