// roc 2010-06 00989b20  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00989b20
//
// 00989b20  b94045c000           mov ecx, 0xc04540
// 00989b25  e99696b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00989b20 { void m(); };
extern T_func_00989b20 G1_func_00989b20;
void func_00989b20()
{
    G1_func_00989b20.m();
}
