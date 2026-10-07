// roc 2009-06 00898b00  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898b00
//
// 00898b00  b92893a400           mov ecx, 0xa49328
// 00898b05  e9b63fd5ff           jmp 0x5ecac0
// auto-matched from its assembly shape

struct T_func_00898b00 { void m(); };
extern T_func_00898b00 G1_func_00898b00;
void func_00898b00()
{
    G1_func_00898b00.m();
}
