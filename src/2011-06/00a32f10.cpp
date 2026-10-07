// roc 2011-06 00a32f10  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32f10
//
// 00a32f10  b9b06dcb00           mov ecx, 0xcb6db0
// 00a32f15  e9a6a1a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a32f10 { void m(); };
extern T_func_00a32f10 G1_func_00a32f10;
void func_00a32f10()
{
    G1_func_00a32f10.m();
}
