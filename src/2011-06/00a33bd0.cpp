// roc 2011-06 00a33bd0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33bd0
//
// 00a33bd0  b94084cb00           mov ecx, 0xcb8440
// 00a33bd5  e93689a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a33bd0 { void m(); };
extern T_func_00a33bd0 G1_func_00a33bd0;
void func_00a33bd0()
{
    G1_func_00a33bd0.m();
}
