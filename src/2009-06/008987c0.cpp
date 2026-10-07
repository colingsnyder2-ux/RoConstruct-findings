// roc 2009-06 008987c0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008987c0
//
// 008987c0  b99864a400           mov ecx, 0xa46498
// 008987c5  e9461bb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008987c0 { void m(); };
extern T_func_008987c0 G1_func_008987c0;
void func_008987c0()
{
    G1_func_008987c0.m();
}
