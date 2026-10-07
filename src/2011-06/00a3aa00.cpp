// roc 2011-06 00a3aa00  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3aa00
//
// 00a3aa00  b900d1cc00           mov ecx, 0xccd100
// 00a3aa05  e9061ba7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3aa00 { void m(); };
extern T_func_00a3aa00 G1_func_00a3aa00;
void func_00a3aa00()
{
    G1_func_00a3aa00.m();
}
