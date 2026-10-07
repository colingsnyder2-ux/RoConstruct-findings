// roc 2011-06 00a33020  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33020
//
// 00a33020  b9406acb00           mov ecx, 0xcb6a40
// 00a33025  e986cfa9ff           jmp 0x4cffb0
// auto-matched from its assembly shape

struct T_func_00a33020 { void m(); };
extern T_func_00a33020 G1_func_00a33020;
void func_00a33020()
{
    G1_func_00a33020.m();
}
