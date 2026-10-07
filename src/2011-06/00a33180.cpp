// roc 2011-06 00a33180  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33180
//
// 00a33180  b92869cb00           mov ecx, 0xcb6928
// 00a33185  e9369fa7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a33180 { void m(); };
extern T_func_00a33180 G1_func_00a33180;
void func_00a33180()
{
    G1_func_00a33180.m();
}
