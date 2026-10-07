// roc 2010-06 009a16f0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a16f0
//
// 009a16f0  b998dfc100           mov ecx, 0xc1df98
// 009a16f5  e9c61ab0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a16f0 { void m(); };
extern T_func_009a16f0 G1_func_009a16f0;
void func_009a16f0()
{
    G1_func_009a16f0.m();
}
