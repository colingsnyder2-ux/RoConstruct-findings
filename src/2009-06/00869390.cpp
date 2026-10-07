// roc 2009-06 00869390  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00869390
//
// 00869390  b974b7a400           mov ecx, 0xa4b774
// 00869395  e9b6a3c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00869390 { void m(); };
extern T_func_00869390 G1_func_00869390;
void func_00869390()
{
    G1_func_00869390.m();
}
