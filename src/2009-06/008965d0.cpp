// roc 2009-06 008965d0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008965d0
//
// 008965d0  b9a017a400           mov ecx, 0xa417a0
// 008965d5  e9568bc8ff           jmp 0x51f130
// auto-matched from its assembly shape

struct T_func_008965d0 { void m(); };
extern T_func_008965d0 G1_func_008965d0;
void func_008965d0()
{
    G1_func_008965d0.m();
}
