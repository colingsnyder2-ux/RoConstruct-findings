// roc 2008-06 007fd7c0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd7c0
//
// 007fd7c0  b9a0559700           mov ecx, 0x9755a0
// 007fd7c5  e9f6d3c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fd7c0 { void m(); };
extern T_func_007fd7c0 G1_func_007fd7c0;
void func_007fd7c0()
{
    G1_func_007fd7c0.m();
}
