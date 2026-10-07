// roc 2011-06 00a31c80  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31c80
//
// 00a31c80  b9383fcb00           mov ecx, 0xcb3f38
// 00a31c85  e9b6be9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a31c80 { void m(); };
extern T_func_00a31c80 G1_func_00a31c80;
void func_00a31c80()
{
    G1_func_00a31c80.m();
}
