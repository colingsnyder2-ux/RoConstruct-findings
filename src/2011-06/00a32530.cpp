// roc 2011-06 00a32530  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32530
//
// 00a32530  b9785ccb00           mov ecx, 0xcb5c78
// 00a32535  e986aba7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a32530 { void m(); };
extern T_func_00a32530 G1_func_00a32530;
void func_00a32530()
{
    G1_func_00a32530.m();
}
