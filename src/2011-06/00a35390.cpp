// roc 2011-06 00a35390  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35390
//
// 00a35390  b9d8d2cb00           mov ecx, 0xcbd2d8
// 00a35395  e906c1b6ff           jmp 0x5a14a0
// auto-matched from its assembly shape

struct T_func_00a35390 { void m(); };
extern T_func_00a35390 G1_func_00a35390;
void func_00a35390()
{
    G1_func_00a35390.m();
}
