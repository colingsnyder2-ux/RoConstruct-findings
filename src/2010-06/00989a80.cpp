// roc 2010-06 00989a80  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00989a80
//
// 00989a80  b91844c000           mov ecx, 0xc04418
// 00989a85  e93697b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00989a80 { void m(); };
extern T_func_00989a80 G1_func_00989a80;
void func_00989a80()
{
    G1_func_00989a80.m();
}
