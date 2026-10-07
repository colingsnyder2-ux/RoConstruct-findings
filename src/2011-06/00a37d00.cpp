// roc 2011-06 00a37d00  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37d00
//
// 00a37d00  b998e6cb00           mov ecx, 0xcbe698
// 00a37d05  e9365e9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37d00 { void m(); };
extern T_func_00a37d00 G1_func_00a37d00;
void func_00a37d00()
{
    G1_func_00a37d00.m();
}
