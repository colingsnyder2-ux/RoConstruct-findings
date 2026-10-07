// roc 2011-06 00a37740  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37740
//
// 00a37740  b93834cc00           mov ecx, 0xcc3438
// 00a37745  e9f6639dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37740 { void m(); };
extern T_func_00a37740 G1_func_00a37740;
void func_00a37740()
{
    G1_func_00a37740.m();
}
