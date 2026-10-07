// roc 2009-06 008986f0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008986f0
//
// 008986f0  b9c06ea400           mov ecx, 0xa46ec0
// 008986f5  e9161cb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008986f0 { void m(); };
extern T_func_008986f0 G1_func_008986f0;
void func_008986f0()
{
    G1_func_008986f0.m();
}
