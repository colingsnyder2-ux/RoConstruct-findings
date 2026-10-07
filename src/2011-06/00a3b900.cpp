// roc 2011-06 00a3b900  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b900
//
// 00a3b900  b960f1cc00           mov ecx, 0xccf160
// 00a3b905  e9b617a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3b900 { void m(); };
extern T_func_00a3b900 G1_func_00a3b900;
void func_00a3b900()
{
    G1_func_00a3b900.m();
}
