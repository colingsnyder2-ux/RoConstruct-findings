// roc 2011-06 00a37c30  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37c30
//
// 00a37c30  b990f1cb00           mov ecx, 0xcbf190
// 00a37c35  e9065f9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37c30 { void m(); };
extern T_func_00a37c30 G1_func_00a37c30;
void func_00a37c30()
{
    G1_func_00a37c30.m();
}
