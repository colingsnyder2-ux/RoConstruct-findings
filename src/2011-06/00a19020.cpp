// roc 2011-06 00a19020  unit: seg_00a10000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19020
//
// 00a19020  b94779cb00           mov ecx, 0xcb7947
// 00a19025  e9f630a1ff           jmp 0x42c120
// auto-matched from its assembly shape

struct T_func_00a19020 { void m(); };
extern T_func_00a19020 G1_func_00a19020;
void func_00a19020()
{
    G1_func_00a19020.m();
}
