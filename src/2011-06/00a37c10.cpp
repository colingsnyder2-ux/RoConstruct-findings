// roc 2011-06 00a37c10  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37c10
//
// 00a37c10  b940f3cb00           mov ecx, 0xcbf340
// 00a37c15  e9265f9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37c10 { void m(); };
extern T_func_00a37c10 G1_func_00a37c10;
void func_00a37c10()
{
    G1_func_00a37c10.m();
}
