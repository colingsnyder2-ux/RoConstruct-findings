// roc 2010-06 009a39c0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a39c0
//
// 009a39c0  b908f8c100           mov ecx, 0xc1f808
// 009a39c5  e9f6f7afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a39c0 { void m(); };
extern T_func_009a39c0 G1_func_009a39c0;
void func_009a39c0()
{
    G1_func_009a39c0.m();
}
