// roc 2011-06 00a31930  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31930
//
// 00a31930  b9a03bcb00           mov ecx, 0xcb3ba0
// 00a31935  e906c29dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a31930 { void m(); };
extern T_func_00a31930 G1_func_00a31930;
void func_00a31930()
{
    G1_func_00a31930.m();
}
