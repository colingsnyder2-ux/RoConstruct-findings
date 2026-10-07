// roc 2009-06 00899bc0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899bc0
//
// 00899bc0  b980b3a400           mov ecx, 0xa4b380
// 00899bc5  e9465cd3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_00899bc0 { void m(); };
extern T_func_00899bc0 G1_func_00899bc0;
void func_00899bc0()
{
    G1_func_00899bc0.m();
}
