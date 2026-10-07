// roc 2011-06 00a32f20  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32f20
//
// 00a32f20  b9e86ccb00           mov ecx, 0xcb6ce8
// 00a32f25  e996a1a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a32f20 { void m(); };
extern T_func_00a32f20 G1_func_00a32f20;
void func_00a32f20()
{
    G1_func_00a32f20.m();
}
