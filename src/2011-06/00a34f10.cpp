// roc 2011-06 00a34f10  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34f10
//
// 00a34f10  b900bccb00           mov ecx, 0xcbbc00
// 00a34f15  e9d68ebeff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a34f10 { void m(); };
extern T_func_00a34f10 G1_func_00a34f10;
void func_00a34f10()
{
    G1_func_00a34f10.m();
}
