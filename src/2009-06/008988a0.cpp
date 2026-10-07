// roc 2009-06 008988a0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008988a0
//
// 008988a0  b9a859a400           mov ecx, 0xa459a8
// 008988a5  e9661ab7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008988a0 { void m(); };
extern T_func_008988a0 G1_func_008988a0;
void func_008988a0()
{
    G1_func_008988a0.m();
}
