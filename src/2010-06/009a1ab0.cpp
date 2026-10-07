// roc 2010-06 009a1ab0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a1ab0
//
// 009a1ab0  b910e6c100           mov ecx, 0xc1e610
// 009a1ab5  e90617b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a1ab0 { void m(); };
extern T_func_009a1ab0 G1_func_009a1ab0;
void func_009a1ab0()
{
    G1_func_009a1ab0.m();
}
