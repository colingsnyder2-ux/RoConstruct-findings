// roc 2010-06 009a7450  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a7450
//
// 009a7450  b91027c200           mov ecx, 0xc22710
// 009a7455  e966bdafff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a7450 { void m(); };
extern T_func_009a7450 G1_func_009a7450;
void func_009a7450()
{
    G1_func_009a7450.m();
}
