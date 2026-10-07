// roc 2011-06 00a34130  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34130
//
// 00a34130  b9d887cb00           mov ecx, 0xcb87d8
// 00a34135  e9069a9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a34130 { void m(); };
extern T_func_00a34130 G1_func_00a34130;
void func_00a34130()
{
    G1_func_00a34130.m();
}
