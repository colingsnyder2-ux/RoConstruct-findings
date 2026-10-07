// roc 2011-06 00a30bc0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a30bc0
//
// 00a30bc0  b99826cb00           mov ecx, 0xcb2698
// 00a30bc5  e9667dbbff           jmp 0x5e8930
// auto-matched from its assembly shape

struct T_func_00a30bc0 { void m(); };
extern T_func_00a30bc0 G1_func_00a30bc0;
void func_00a30bc0()
{
    G1_func_00a30bc0.m();
}
