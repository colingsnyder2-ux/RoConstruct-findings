// roc 2011-06 00a37c90  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37c90
//
// 00a37c90  b980eccb00           mov ecx, 0xcbec80
// 00a37c95  e9a65e9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37c90 { void m(); };
extern T_func_00a37c90 G1_func_00a37c90;
void func_00a37c90()
{
    G1_func_00a37c90.m();
}
