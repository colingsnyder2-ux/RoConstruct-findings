// roc 2009-06 008987f0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008987f0
//
// 008987f0  b94062a400           mov ecx, 0xa46240
// 008987f5  e9161bb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008987f0 { void m(); };
extern T_func_008987f0 G1_func_008987f0;
void func_008987f0()
{
    G1_func_008987f0.m();
}
