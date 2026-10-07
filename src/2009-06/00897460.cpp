// roc 2009-06 00897460  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897460
//
// 00897460  b9183ca400           mov ecx, 0xa43c18
// 00897465  e9a683d3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_00897460 { void m(); };
extern T_func_00897460 G1_func_00897460;
void func_00897460()
{
    G1_func_00897460.m();
}
