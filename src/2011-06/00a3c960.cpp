// roc 2011-06 00a3c960  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c960
//
// 00a3c960  b94809cd00           mov ecx, 0xcd0948
// 00a3c965  e9a6fba6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3c960 { void m(); };
extern T_func_00a3c960 G1_func_00a3c960;
void func_00a3c960()
{
    G1_func_00a3c960.m();
}
