// roc 2010-06 009db020  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db020
//
// 009db020  b95408c000           mov ecx, 0xc00854
// 009db025  e9269fa4ff           jmp 0x424f50
// auto-matched from its assembly shape

struct T_func_009db020 { void m(); };
extern T_func_009db020 G1_func_009db020;
void func_009db020()
{
    G1_func_009db020.m();
}
