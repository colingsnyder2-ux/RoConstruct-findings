// roc 2009-06 008987d0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008987d0
//
// 008987d0  b9d063a400           mov ecx, 0xa463d0
// 008987d5  e9361bb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_008987d0 { void m(); };
extern T_func_008987d0 G1_func_008987d0;
void func_008987d0()
{
    G1_func_008987d0.m();
}
