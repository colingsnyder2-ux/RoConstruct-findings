// roc 2011-06 00a37b40  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37b40
//
// 00a37b40  b938fecb00           mov ecx, 0xcbfe38
// 00a37b45  e9f65f9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37b40 { void m(); };
extern T_func_00a37b40 G1_func_00a37b40;
void func_00a37b40()
{
    G1_func_00a37b40.m();
}
