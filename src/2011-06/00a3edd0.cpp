// roc 2011-06 00a3edd0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3edd0
//
// 00a3edd0  b99042cd00           mov ecx, 0xcd4290
// 00a3edd5  e916f0bdff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a3edd0 { void m(); };
extern T_func_00a3edd0 G1_func_00a3edd0;
void func_00a3edd0()
{
    G1_func_00a3edd0.m();
}
