// roc 2011-06 00a35020  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35020
//
// 00a35020  b960bccb00           mov ecx, 0xcbbc60
// 00a35025  e9e674a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a35020 { void m(); };
extern T_func_00a35020 G1_func_00a35020;
void func_00a35020()
{
    G1_func_00a35020.m();
}
