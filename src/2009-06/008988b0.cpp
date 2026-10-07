// roc 2009-06 008988b0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008988b0
//
// 008988b0  b9e058a400           mov ecx, 0xa458e0
// 008988b5  e9561ab7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008988b0 { void m(); };
extern T_func_008988b0 G1_func_008988b0;
void func_008988b0()
{
    G1_func_008988b0.m();
}
