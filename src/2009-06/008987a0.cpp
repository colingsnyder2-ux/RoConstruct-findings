// roc 2009-06 008987a0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008987a0
//
// 008987a0  b92866a400           mov ecx, 0xa46628
// 008987a5  e9661bb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008987a0 { void m(); };
extern T_func_008987a0 G1_func_008987a0;
void func_008987a0()
{
    G1_func_008987a0.m();
}
