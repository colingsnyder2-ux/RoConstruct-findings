// roc 2011-06 00a3c730  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c730
//
// 00a3c730  b91801cd00           mov ecx, 0xcd0118
// 00a3c735  e9d6fda6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3c730 { void m(); };
extern T_func_00a3c730 G1_func_00a3c730;
void func_00a3c730()
{
    G1_func_00a3c730.m();
}
