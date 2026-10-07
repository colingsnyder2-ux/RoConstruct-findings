// roc 2011-06 00a3aa10  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3aa10
//
// 00a3aa10  b9f0d1cc00           mov ecx, 0xccd1f0
// 00a3aa15  e9d627c1ff           jmp 0x64d1f0
// auto-matched from its assembly shape

struct T_func_00a3aa10 { void m(); };
extern T_func_00a3aa10 G1_func_00a3aa10;
void func_00a3aa10()
{
    G1_func_00a3aa10.m();
}
