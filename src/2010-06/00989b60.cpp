// roc 2010-06 00989b60  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00989b60
//
// 00989b60  b92846c000           mov ecx, 0xc04628
// 00989b65  e95696b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00989b60 { void m(); };
extern T_func_00989b60 G1_func_00989b60;
void func_00989b60()
{
    G1_func_00989b60.m();
}
