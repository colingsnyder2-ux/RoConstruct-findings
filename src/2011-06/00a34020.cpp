// roc 2011-06 00a34020  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34020
//
// 00a34020  b90885cb00           mov ecx, 0xcb8508
// 00a34025  e9e684a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a34020 { void m(); };
extern T_func_00a34020 G1_func_00a34020;
void func_00a34020()
{
    G1_func_00a34020.m();
}
