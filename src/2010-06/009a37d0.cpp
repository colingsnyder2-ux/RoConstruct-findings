// roc 2010-06 009a37d0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a37d0
//
// 009a37d0  b9c8f0c100           mov ecx, 0xc1f0c8
// 009a37d5  e9e6f9afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a37d0 { void m(); };
extern T_func_009a37d0 G1_func_009a37d0;
void func_009a37d0()
{
    G1_func_009a37d0.m();
}
