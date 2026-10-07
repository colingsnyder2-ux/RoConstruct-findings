// roc 2009-06 008984f0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008984f0
//
// 008984f0  b9c087a400           mov ecx, 0xa487c0
// 008984f5  e9161eb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008984f0 { void m(); };
extern T_func_008984f0 G1_func_008984f0;
void func_008984f0()
{
    G1_func_008984f0.m();
}
