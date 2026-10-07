// roc 2011-06 00a32f50  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32f50
//
// 00a32f50  b9886acb00           mov ecx, 0xcb6a88
// 00a32f55  e966a1a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a32f50 { void m(); };
extern T_func_00a32f50 G1_func_00a32f50;
void func_00a32f50()
{
    G1_func_00a32f50.m();
}
