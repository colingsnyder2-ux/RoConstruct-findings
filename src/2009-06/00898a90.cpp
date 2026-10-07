// roc 2009-06 00898a90  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898a90
//
// 00898a90  b9b899a400           mov ecx, 0xa499b8
// 00898a95  e92632d3ff           jmp 0x5cbcc0
// auto-matched from its assembly shape

struct T_func_00898a90 { void m(); };
extern T_func_00898a90 G1_func_00898a90;
void func_00898a90()
{
    G1_func_00898a90.m();
}
