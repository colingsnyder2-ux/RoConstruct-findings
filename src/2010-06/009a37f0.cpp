// roc 2010-06 009a37f0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a37f0
//
// 009a37f0  b9c0f4c100           mov ecx, 0xc1f4c0
// 009a37f5  e9c6f9afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a37f0 { void m(); };
extern T_func_009a37f0 G1_func_009a37f0;
void func_009a37f0()
{
    G1_func_009a37f0.m();
}
