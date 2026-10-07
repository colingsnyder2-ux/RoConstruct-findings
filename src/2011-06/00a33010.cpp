// roc 2011-06 00a33010  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33010
//
// 00a33010  b9d067cb00           mov ecx, 0xcb67d0
// 00a33015  e9f694a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a33010 { void m(); };
extern T_func_00a33010 G1_func_00a33010;
void func_00a33010()
{
    G1_func_00a33010.m();
}
