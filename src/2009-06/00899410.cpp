// roc 2009-06 00899410  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899410
//
// 00899410  b9d4a7a400           mov ecx, 0xa4a7d4
// 00899415  e9c60ed5ff           jmp 0x5ea2e0
// auto-matched from its assembly shape

struct T_func_00899410 { void m(); };
extern T_func_00899410 G1_func_00899410;
void func_00899410()
{
    G1_func_00899410.m();
}
