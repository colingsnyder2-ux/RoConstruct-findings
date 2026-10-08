// roc 2007-08 00779630  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779630
//
// 00779630  b918148c00           mov ecx, 0x8c1418
// 00779635  e9d6dfc9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00779630 { void m(); };
extern T_func_00779630 G1_func_00779630;
void func_00779630()
{
    G1_func_00779630.m();
}
