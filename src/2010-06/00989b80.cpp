// roc 2010-06 00989b80  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00989b80
//
// 00989b80  b95047c000           mov ecx, 0xc04750
// 00989b85  e93696b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00989b80 { void m(); };
extern T_func_00989b80 G1_func_00989b80;
void func_00989b80()
{
    G1_func_00989b80.m();
}
