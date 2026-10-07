// roc 2011-06 00a3edf0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3edf0
//
// 00a3edf0  b96841cd00           mov ecx, 0xcd4168
// 00a3edf5  e9c6e2a6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3edf0 { void m(); };
extern T_func_00a3edf0 G1_func_00a3edf0;
void func_00a3edf0()
{
    G1_func_00a3edf0.m();
}
