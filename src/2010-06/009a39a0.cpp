// roc 2010-06 009a39a0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a39a0
//
// 009a39a0  b948f9c100           mov ecx, 0xc1f948
// 009a39a5  e916f8afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a39a0 { void m(); };
extern T_func_009a39a0 G1_func_009a39a0;
void func_009a39a0()
{
    G1_func_009a39a0.m();
}
