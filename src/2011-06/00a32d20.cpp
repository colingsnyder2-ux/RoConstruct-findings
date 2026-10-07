// roc 2011-06 00a32d20  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32d20
//
// 00a32d20  b9a85ecb00           mov ecx, 0xcb5ea8
// 00a32d25  e9e697a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a32d20 { void m(); };
extern T_func_00a32d20 G1_func_00a32d20;
void func_00a32d20()
{
    G1_func_00a32d20.m();
}
