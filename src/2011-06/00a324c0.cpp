// roc 2011-06 00a324c0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a324c0
//
// 00a324c0  b96057cb00           mov ecx, 0xcb5760
// 00a324c5  e97690a7ff           jmp 0x4ab540
// auto-matched from its assembly shape

struct T_func_00a324c0 { void m(); };
extern T_func_00a324c0 G1_func_00a324c0;
void func_00a324c0()
{
    G1_func_00a324c0.m();
}
