// roc 2011-06 00a32510  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32510
//
// 00a32510  b9985bcb00           mov ecx, 0xcb5b98
// 00a32515  e9a6aba7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a32510 { void m(); };
extern T_func_00a32510 G1_func_00a32510;
void func_00a32510()
{
    G1_func_00a32510.m();
}
