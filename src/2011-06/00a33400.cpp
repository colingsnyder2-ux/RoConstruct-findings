// roc 2011-06 00a33400  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33400
//
// 00a33400  b94877cb00           mov ecx, 0xcb7748
// 00a33405  e946a1aaff           jmp 0x4dd550
// auto-matched from its assembly shape

struct T_func_00a33400 { void m(); };
extern T_func_00a33400 G1_func_00a33400;
void func_00a33400()
{
    G1_func_00a33400.m();
}
