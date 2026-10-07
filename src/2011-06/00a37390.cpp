// roc 2011-06 00a37390  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37390
//
// 00a37390  b90066cc00           mov ecx, 0xcc6600
// 00a37395  e9a6679dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37390 { void m(); };
extern T_func_00a37390 G1_func_00a37390;
void func_00a37390()
{
    G1_func_00a37390.m();
}
