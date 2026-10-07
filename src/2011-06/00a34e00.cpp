// roc 2011-06 00a34e00  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34e00
//
// 00a34e00  b9ccbacb00           mov ecx, 0xcbbacc
// 00a34e05  e9d6dbb5ff           jmp 0x5929e0
// auto-matched from its assembly shape

struct T_func_00a34e00 { void m(); };
extern T_func_00a34e00 G1_func_00a34e00;
void func_00a34e00()
{
    G1_func_00a34e00.m();
}
