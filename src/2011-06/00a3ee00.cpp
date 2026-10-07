// roc 2011-06 00a3ee00  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ee00
//
// 00a3ee00  b91842cd00           mov ecx, 0xcd4218
// 00a3ee05  e9e6efbdff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a3ee00 { void m(); };
extern T_func_00a3ee00 G1_func_00a3ee00;
void func_00a3ee00()
{
    G1_func_00a3ee00.m();
}
