// roc 2011-06 00a31670  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31670
//
// 00a31670  b9d836cb00           mov ecx, 0xcb36d8
// 00a31675  e9c6c49dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a31670 { void m(); };
extern T_func_00a31670 G1_func_00a31670;
void func_00a31670()
{
    G1_func_00a31670.m();
}
