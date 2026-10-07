// roc 2011-06 00a324b0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a324b0
//
// 00a324b0  b90858cb00           mov ecx, 0xcb5808
// 00a324b5  e91693a7ff           jmp 0x4ab7d0
// auto-matched from its assembly shape

struct T_func_00a324b0 { void m(); };
extern T_func_00a324b0 G1_func_00a324b0;
void func_00a324b0()
{
    G1_func_00a324b0.m();
}
