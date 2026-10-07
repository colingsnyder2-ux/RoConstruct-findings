// roc 2011-06 00a32d10  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32d10
//
// 00a32d10  b9005ccb00           mov ecx, 0xcb5c00
// 00a32d15  e9f697a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a32d10 { void m(); };
extern T_func_00a32d10 G1_func_00a32d10;
void func_00a32d10()
{
    G1_func_00a32d10.m();
}
