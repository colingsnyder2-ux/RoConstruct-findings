// roc 2011-06 00a30400  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a30400
//
// 00a30400  b9501fcb00           mov ecx, 0xcb1f50
// 00a30405  e936d79dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a30400 { void m(); };
extern T_func_00a30400 G1_func_00a30400;
void func_00a30400()
{
    G1_func_00a30400.m();
}
