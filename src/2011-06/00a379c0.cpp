// roc 2011-06 00a379c0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a379c0
//
// 00a379c0  b97812cc00           mov ecx, 0xcc1278
// 00a379c5  e976619dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a379c0 { void m(); };
extern T_func_00a379c0 G1_func_00a379c0;
void func_00a379c0()
{
    G1_func_00a379c0.m();
}
