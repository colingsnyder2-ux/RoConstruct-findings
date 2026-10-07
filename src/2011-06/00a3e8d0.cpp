// roc 2011-06 00a3e8d0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e8d0
//
// 00a3e8d0  b9e03acd00           mov ecx, 0xcd3ae0
// 00a3e8d5  e9d616a9ff           jmp 0x4cffb0
// auto-matched from its assembly shape

struct T_func_00a3e8d0 { void m(); };
extern T_func_00a3e8d0 G1_func_00a3e8d0;
void func_00a3e8d0()
{
    G1_func_00a3e8d0.m();
}
