// roc 2011-06 00a3b240  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b240
//
// 00a3b240  b950e0cc00           mov ecx, 0xcce050
// 00a3b245  e9c612a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3b240 { void m(); };
extern T_func_00a3b240 G1_func_00a3b240;
void func_00a3b240()
{
    G1_func_00a3b240.m();
}
