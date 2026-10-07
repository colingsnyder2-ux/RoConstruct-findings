// roc 2011-06 00a33c00  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33c00
//
// 00a33c00  b9b883cb00           mov ecx, 0xcb83b8
// 00a33c05  e90689a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a33c00 { void m(); };
extern T_func_00a33c00 G1_func_00a33c00;
void func_00a33c00()
{
    G1_func_00a33c00.m();
}
