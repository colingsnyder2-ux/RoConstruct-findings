// roc 2011-06 00a32d00  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32d00
//
// 00a32d00  b90861cb00           mov ecx, 0xcb6108
// 00a32d05  e90698a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a32d00 { void m(); };
extern T_func_00a32d00 G1_func_00a32d00;
void func_00a32d00()
{
    G1_func_00a32d00.m();
}
