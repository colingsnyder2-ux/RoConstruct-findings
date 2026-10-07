// roc 2011-06 00a32f80  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32f80
//
// 00a32f80  b9e469cb00           mov ecx, 0xcb69e4
// 00a32f85  e98695a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a32f80 { void m(); };
extern T_func_00a32f80 G1_func_00a32f80;
void func_00a32f80()
{
    G1_func_00a32f80.m();
}
