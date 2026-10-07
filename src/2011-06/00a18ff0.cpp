// roc 2011-06 00a18ff0  unit: seg_00a10000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a18ff0
//
// 00a18ff0  b94579cb00           mov ecx, 0xcb7945
// 00a18ff5  e92631a1ff           jmp 0x42c120
// auto-matched from its assembly shape

struct T_func_00a18ff0 { void m(); };
extern T_func_00a18ff0 G1_func_00a18ff0;
void func_00a18ff0()
{
    G1_func_00a18ff0.m();
}
