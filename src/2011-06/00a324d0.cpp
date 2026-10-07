// roc 2011-06 00a324d0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a324d0
//
// 00a324d0  b95856cb00           mov ecx, 0xcb5658
// 00a324d5  e966b69dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a324d0 { void m(); };
extern T_func_00a324d0 G1_func_00a324d0;
void func_00a324d0()
{
    G1_func_00a324d0.m();
}
