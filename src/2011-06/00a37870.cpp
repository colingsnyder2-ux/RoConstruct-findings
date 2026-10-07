// roc 2011-06 00a37870  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37870
//
// 00a37870  b93024cc00           mov ecx, 0xcc2430
// 00a37875  e9c6629dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37870 { void m(); };
extern T_func_00a37870 G1_func_00a37870;
void func_00a37870()
{
    G1_func_00a37870.m();
}
