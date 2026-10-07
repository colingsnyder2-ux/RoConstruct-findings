// roc 2008-06 007ffef0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffef0
//
// 007ffef0  b930b09700           mov ecx, 0x97b030
// 007ffef5  e9f6d4deff           jmp 0x5ed3f0
// auto-matched from its assembly shape

struct T_func_007ffef0 { void m(); };
extern T_func_007ffef0 G1_func_007ffef0;
void func_007ffef0()
{
    G1_func_007ffef0.m();
}
