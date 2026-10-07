// roc 2008-06 008017f0  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008017f0
//
// 008017f0  b9a8e19700           mov ecx, 0x97e1a8
// 008017f5  e93cf9e9ff           jmp 0x6a1136
// auto-matched from its assembly shape

struct T_func_008017f0 { void m(); };
extern T_func_008017f0 G1_func_008017f0;
void func_008017f0()
{
    G1_func_008017f0.m();
}
