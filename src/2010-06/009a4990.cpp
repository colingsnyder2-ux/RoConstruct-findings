// roc 2010-06 009a4990  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a4990
//
// 009a4990  b96006c200           mov ecx, 0xc20660
// 009a4995  e926e8afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a4990 { void m(); };
extern T_func_009a4990 G1_func_009a4990;
void func_009a4990()
{
    G1_func_009a4990.m();
}
