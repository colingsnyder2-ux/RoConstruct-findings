// roc 2011-06 00a324a0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a324a0
//
// 00a324a0  b9b058cb00           mov ecx, 0xcb58b0
// 00a324a5  e9b695a7ff           jmp 0x4aba60
// auto-matched from its assembly shape

struct T_func_00a324a0 { void m(); };
extern T_func_00a324a0 G1_func_00a324a0;
void func_00a324a0()
{
    G1_func_00a324a0.m();
}
