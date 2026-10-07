// roc 2011-06 00a3aa30  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3aa30
//
// 00a3aa30  b96cd2cc00           mov ecx, 0xccd26c
// 00a3aa35  e9663bd5ff           jmp 0x78e5a0
// auto-matched from its assembly shape

struct T_func_00a3aa30 { void m(); };
extern T_func_00a3aa30 G1_func_00a3aa30;
void func_00a3aa30()
{
    G1_func_00a3aa30.m();
}
