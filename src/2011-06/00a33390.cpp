// roc 2011-06 00a33390  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33390
//
// 00a33390  b9f077cb00           mov ecx, 0xcb77f0
// 00a33395  e9a6a79dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a33390 { void m(); };
extern T_func_00a33390 G1_func_00a33390;
void func_00a33390()
{
    G1_func_00a33390.m();
}
