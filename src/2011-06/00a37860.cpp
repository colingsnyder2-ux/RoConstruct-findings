// roc 2011-06 00a37860  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37860
//
// 00a37860  b90825cc00           mov ecx, 0xcc2508
// 00a37865  e9d6629dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37860 { void m(); };
extern T_func_00a37860 G1_func_00a37860;
void func_00a37860()
{
    G1_func_00a37860.m();
}
