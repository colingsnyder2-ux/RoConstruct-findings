// roc 2011-06 00a33a30  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33a30
//
// 00a33a30  b9c080cb00           mov ecx, 0xcb80c0
// 00a33a35  e98696a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a33a30 { void m(); };
extern T_func_00a33a30 G1_func_00a33a30;
void func_00a33a30()
{
    G1_func_00a33a30.m();
}
