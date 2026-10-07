// roc 2010-06 00989b40  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00989b40
//
// 00989b40  b96846c000           mov ecx, 0xc04668
// 00989b45  e97696b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00989b40 { void m(); };
extern T_func_00989b40 G1_func_00989b40;
void func_00989b40()
{
    G1_func_00989b40.m();
}
