// roc 2010-06 009a50c0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a50c0
//
// 009a50c0  b95008c200           mov ecx, 0xc20850
// 009a50c5  e9f6e0afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a50c0 { void m(); };
extern T_func_009a50c0 G1_func_009a50c0;
void func_009a50c0()
{
    G1_func_009a50c0.m();
}
