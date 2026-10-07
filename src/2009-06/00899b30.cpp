// roc 2009-06 00899b30  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899b30
//
// 00899b30  b938b3a400           mov ecx, 0xa4b338
// 00899b35  e9d65cd3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_00899b30 { void m(); };
extern T_func_00899b30 G1_func_00899b30;
void func_00899b30()
{
    G1_func_00899b30.m();
}
