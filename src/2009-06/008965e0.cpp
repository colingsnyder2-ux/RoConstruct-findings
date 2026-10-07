// roc 2009-06 008965e0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008965e0
//
// 008965e0  b93817a400           mov ecx, 0xa41738
// 008965e5  e9c68ac8ff           jmp 0x51f0b0
// auto-matched from its assembly shape

struct T_func_008965e0 { void m(); };
extern T_func_008965e0 G1_func_008965e0;
void func_008965e0()
{
    G1_func_008965e0.m();
}
