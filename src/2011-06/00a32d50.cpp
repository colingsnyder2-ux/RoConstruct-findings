// roc 2011-06 00a32d50  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32d50
//
// 00a32d50  b9805dcb00           mov ecx, 0xcb5d80
// 00a32d55  e9b697a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a32d50 { void m(); };
extern T_func_00a32d50 G1_func_00a32d50;
void func_00a32d50()
{
    G1_func_00a32d50.m();
}
