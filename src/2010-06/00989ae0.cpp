// roc 2010-06 00989ae0  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00989ae0
//
// 00989ae0  b97848c000           mov ecx, 0xc04878
// 00989ae5  e9d696b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00989ae0 { void m(); };
extern T_func_00989ae0 G1_func_00989ae0;
void func_00989ae0()
{
    G1_func_00989ae0.m();
}
