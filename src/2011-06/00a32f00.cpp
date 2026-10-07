// roc 2011-06 00a32f00  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32f00
//
// 00a32f00  b9106acb00           mov ecx, 0xcb6a10
// 00a32f05  e90696a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a32f00 { void m(); };
extern T_func_00a32f00 G1_func_00a32f00;
void func_00a32f00()
{
    G1_func_00a32f00.m();
}
