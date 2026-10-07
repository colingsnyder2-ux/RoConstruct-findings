// roc 2010-06 009a4430  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a4430
//
// 009a4430  b9b002c200           mov ecx, 0xc202b0
// 009a4435  e986edafff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a4430 { void m(); };
extern T_func_009a4430 G1_func_009a4430;
void func_009a4430()
{
    G1_func_009a4430.m();
}
