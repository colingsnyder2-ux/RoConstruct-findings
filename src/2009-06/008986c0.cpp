// roc 2009-06 008986c0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008986c0
//
// 008986c0  b91871a400           mov ecx, 0xa47118
// 008986c5  e9461cb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008986c0 { void m(); };
extern T_func_008986c0 G1_func_008986c0;
void func_008986c0()
{
    G1_func_008986c0.m();
}
