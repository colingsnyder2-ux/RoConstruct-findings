// roc 2010-06 009a6d20  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a6d20
//
// 009a6d20  b9501dc200           mov ecx, 0xc21d50
// 009a6d25  e996c4afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a6d20 { void m(); };
extern T_func_009a6d20 G1_func_009a6d20;
void func_009a6d20()
{
    G1_func_009a6d20.m();
}
