// roc 2010-06 009a50a0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a50a0
//
// 009a50a0  b9c008c200           mov ecx, 0xc208c0
// 009a50a5  e916e1afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a50a0 { void m(); };
extern T_func_009a50a0 G1_func_009a50a0;
void func_009a50a0()
{
    G1_func_009a50a0.m();
}
