// roc 2010-06 009a39e0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a39e0
//
// 009a39e0  b9a8f9c100           mov ecx, 0xc1f9a8
// 009a39e5  e9d6f7afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a39e0 { void m(); };
extern T_func_009a39e0 G1_func_009a39e0;
void func_009a39e0()
{
    G1_func_009a39e0.m();
}
