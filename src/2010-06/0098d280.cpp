// roc 2010-06 0098d280  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0098d280
//
// 0098d280  b9a069c000           mov ecx, 0xc069a0
// 0098d285  e9365fb1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0098d280 { void m(); };
extern T_func_0098d280 G1_func_0098d280;
void func_0098d280()
{
    G1_func_0098d280.m();
}
