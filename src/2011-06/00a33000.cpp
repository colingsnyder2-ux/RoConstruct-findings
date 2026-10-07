// roc 2011-06 00a33000  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33000
//
// 00a33000  b9906bcb00           mov ecx, 0xcb6b90
// 00a33005  e9e6adbeff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a33000 { void m(); };
extern T_func_00a33000 G1_func_00a33000;
void func_00a33000()
{
    G1_func_00a33000.m();
}
