// roc 2011-06 00a37c60  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37c60
//
// 00a37c60  b908efcb00           mov ecx, 0xcbef08
// 00a37c65  e9d65e9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37c60 { void m(); };
extern T_func_00a37c60 G1_func_00a37c60;
void func_00a37c60()
{
    G1_func_00a37c60.m();
}
