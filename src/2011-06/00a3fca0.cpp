// roc 2011-06 00a3fca0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fca0
//
// 00a3fca0  b9f88bd100           mov ecx, 0xd18bf8
// 00a3fca5  e9f6ece9ff           jmp 0x8de9a0
// auto-matched from its assembly shape

struct T_func_00a3fca0 { void m(); };
extern T_func_00a3fca0 G1_func_00a3fca0;
void func_00a3fca0()
{
    G1_func_00a3fca0.m();
}
