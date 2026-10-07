// roc 2011-06 00a37b80  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37b80
//
// 00a37b80  b9d8facb00           mov ecx, 0xcbfad8
// 00a37b85  e9b65f9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37b80 { void m(); };
extern T_func_00a37b80 G1_func_00a37b80;
void func_00a37b80()
{
    G1_func_00a37b80.m();
}
