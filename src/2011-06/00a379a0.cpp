// roc 2011-06 00a379a0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a379a0
//
// 00a379a0  b92814cc00           mov ecx, 0xcc1428
// 00a379a5  e996619dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a379a0 { void m(); };
extern T_func_00a379a0 G1_func_00a379a0;
void func_00a379a0()
{
    G1_func_00a379a0.m();
}
