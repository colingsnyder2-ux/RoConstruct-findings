// roc 2010-06 009a49b0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a49b0
//
// 009a49b0  b98005c200           mov ecx, 0xc20580
// 009a49b5  e906e8afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a49b0 { void m(); };
extern T_func_009a49b0 G1_func_009a49b0;
void func_009a49b0()
{
    G1_func_009a49b0.m();
}
