// roc 2008-06 007fd0c0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd0c0
//
// 007fd0c0  b9a04a9700           mov ecx, 0x974aa0
// 007fd0c5  e9e67bd9ff           jmp 0x594cb0
// auto-matched from its assembly shape

struct T_func_007fd0c0 { void m(); };
extern T_func_007fd0c0 G1_func_007fd0c0;
void func_007fd0c0()
{
    G1_func_007fd0c0.m();
}
