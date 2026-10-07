// roc 2011-06 00a37b90  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37b90
//
// 00a37b90  b900facb00           mov ecx, 0xcbfa00
// 00a37b95  e9a65f9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37b90 { void m(); };
extern T_func_00a37b90 G1_func_00a37b90;
void func_00a37b90()
{
    G1_func_00a37b90.m();
}
