// roc 2010-06 0098ceb0  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0098ceb0
//
// 0098ceb0  b9c067c000           mov ecx, 0xc067c0
// 0098ceb5  e90663b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0098ceb0 { void m(); };
extern T_func_0098ceb0 G1_func_0098ceb0;
void func_0098ceb0()
{
    G1_func_0098ceb0.m();
}
