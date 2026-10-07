// roc 2011-06 00a3b250  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b250
//
// 00a3b250  b9e0e2cc00           mov ecx, 0xcce2e0
// 00a3b255  e9b612a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3b250 { void m(); };
extern T_func_00a3b250 G1_func_00a3b250;
void func_00a3b250()
{
    G1_func_00a3b250.m();
}
