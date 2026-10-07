// roc 2009-06 008965f0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008965f0
//
// 008965f0  b9d016a400           mov ecx, 0xa416d0
// 008965f5  e9368ac8ff           jmp 0x51f030
// auto-matched from its assembly shape

struct T_func_008965f0 { void m(); };
extern T_func_008965f0 G1_func_008965f0;
void func_008965f0()
{
    G1_func_008965f0.m();
}
