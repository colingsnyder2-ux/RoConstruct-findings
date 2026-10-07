// roc 2011-06 00a3f2a0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f2a0
//
// 00a3f2a0  b9904acd00           mov ecx, 0xcd4a90
// 00a3f2a5  e966d2a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3f2a0 { void m(); };
extern T_func_00a3f2a0 G1_func_00a3f2a0;
void func_00a3f2a0()
{
    G1_func_00a3f2a0.m();
}
