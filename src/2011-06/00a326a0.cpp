// roc 2011-06 00a326a0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a326a0
//
// 00a326a0  b90860cb00           mov ecx, 0xcb6008
// 00a326a5  e9669ea7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a326a0 { void m(); };
extern T_func_00a326a0 G1_func_00a326a0;
void func_00a326a0()
{
    G1_func_00a326a0.m();
}
