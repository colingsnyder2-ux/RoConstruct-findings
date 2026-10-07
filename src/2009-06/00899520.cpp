// roc 2009-06 00899520  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899520
//
// 00899520  b9f0a8a400           mov ecx, 0xa4a8f0
// 00899525  e9e662d3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_00899520 { void m(); };
extern T_func_00899520 G1_func_00899520;
void func_00899520()
{
    G1_func_00899520.m();
}
