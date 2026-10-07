// roc 2011-06 00a334d0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a334d0
//
// 00a334d0  b9287acb00           mov ecx, 0xcb7a28
// 00a334d5  e93690a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a334d0 { void m(); };
extern T_func_00a334d0 G1_func_00a334d0;
void func_00a334d0()
{
    G1_func_00a334d0.m();
}
