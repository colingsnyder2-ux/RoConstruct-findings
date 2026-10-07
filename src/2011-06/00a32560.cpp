// roc 2011-06 00a32560  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32560
//
// 00a32560  b9d862cb00           mov ecx, 0xcb62d8
// 00a32565  e9a69fa7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a32560 { void m(); };
extern T_func_00a32560 G1_func_00a32560;
void func_00a32560()
{
    G1_func_00a32560.m();
}
