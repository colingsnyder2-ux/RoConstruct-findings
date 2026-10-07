// roc 2011-06 00a32cf0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32cf0
//
// 00a32cf0  b94062cb00           mov ecx, 0xcb6240
// 00a32cf5  e91698a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a32cf0 { void m(); };
extern T_func_00a32cf0 G1_func_00a32cf0;
void func_00a32cf0()
{
    G1_func_00a32cf0.m();
}
