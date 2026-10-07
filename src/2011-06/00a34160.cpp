// roc 2011-06 00a34160  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34160
//
// 00a34160  b9b089cb00           mov ecx, 0xcb89b0
// 00a34165  e95697afff           jmp 0x52d8c0
// auto-matched from its assembly shape

struct T_func_00a34160 { void m(); };
extern T_func_00a34160 G1_func_00a34160;
void func_00a34160()
{
    G1_func_00a34160.m();
}
