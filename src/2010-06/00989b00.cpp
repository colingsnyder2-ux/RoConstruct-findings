// roc 2010-06 00989b00  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00989b00
//
// 00989b00  b99847c000           mov ecx, 0xc04798
// 00989b05  e9b696b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00989b00 { void m(); };
extern T_func_00989b00 G1_func_00989b00;
void func_00989b00()
{
    G1_func_00989b00.m();
}
