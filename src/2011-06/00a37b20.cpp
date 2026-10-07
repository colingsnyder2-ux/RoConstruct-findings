// roc 2011-06 00a37b20  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37b20
//
// 00a37b20  b9e8ffcb00           mov ecx, 0xcbffe8
// 00a37b25  e916609dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37b20 { void m(); };
extern T_func_00a37b20 G1_func_00a37b20;
void func_00a37b20()
{
    G1_func_00a37b20.m();
}
