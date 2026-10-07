// roc 2008-06 007fed90  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fed90
//
// 007fed90  b908979700           mov ecx, 0x979708
// 007fed95  e926bec0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fed90 { void m(); };
extern T_func_007fed90 G1_func_007fed90;
void func_007fed90()
{
    G1_func_007fed90.m();
}
