// roc 2011-06 00a31060  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31060
//
// 00a31060  b97028cb00           mov ecx, 0xcb2870
// 00a31065  e9d6ca9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a31060 { void m(); };
extern T_func_00a31060 G1_func_00a31060;
void func_00a31060()
{
    G1_func_00a31060.m();
}
