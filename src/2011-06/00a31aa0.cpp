// roc 2011-06 00a31aa0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31aa0
//
// 00a31aa0  b9303dcb00           mov ecx, 0xcb3d30
// 00a31aa5  e9e6caa3ff           jmp 0x46e590
// auto-matched from its assembly shape

struct T_func_00a31aa0 { void m(); };
extern T_func_00a31aa0 G1_func_00a31aa0;
void func_00a31aa0()
{
    G1_func_00a31aa0.m();
}
