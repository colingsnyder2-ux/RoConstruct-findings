// roc 2009-06 008988f0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008988f0
//
// 008988f0  b9c055a400           mov ecx, 0xa455c0
// 008988f5  e9161ab7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008988f0 { void m(); };
extern T_func_008988f0 G1_func_008988f0;
void func_008988f0()
{
    G1_func_008988f0.m();
}
