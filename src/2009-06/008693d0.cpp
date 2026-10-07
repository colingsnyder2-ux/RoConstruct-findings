// roc 2009-06 008693d0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008693d0
//
// 008693d0  b958b6a400           mov ecx, 0xa4b658
// 008693d5  e976a3c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_008693d0 { void m(); };
extern T_func_008693d0 G1_func_008693d0;
void func_008693d0()
{
    G1_func_008693d0.m();
}
