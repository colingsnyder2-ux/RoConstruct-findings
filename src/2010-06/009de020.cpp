// roc 2010-06 009de020  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de020
//
// 009de020  b98491c000           mov ecx, 0xc09184
// 009de025  e9b659b7ff           jmp 0x5539e0
// auto-matched from its assembly shape

struct T_func_009de020 { void m(); };
extern T_func_009de020 G1_func_009de020;
void func_009de020()
{
    G1_func_009de020.m();
}
