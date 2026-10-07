// roc 2011-06 00a33a40  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33a40
//
// 00a33a40  b9a881cb00           mov ecx, 0xcb81a8
// 00a33a45  e9a6a3beff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a33a40 { void m(); };
extern T_func_00a33a40 G1_func_00a33a40;
void func_00a33a40()
{
    G1_func_00a33a40.m();
}
