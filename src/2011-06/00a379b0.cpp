// roc 2011-06 00a379b0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a379b0
//
// 00a379b0  b95013cc00           mov ecx, 0xcc1350
// 00a379b5  e986619dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a379b0 { void m(); };
extern T_func_00a379b0 G1_func_00a379b0;
void func_00a379b0()
{
    G1_func_00a379b0.m();
}
