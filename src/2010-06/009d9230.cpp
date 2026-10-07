// roc 2010-06 009d9230  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9230
//
// 009d9230  b92a34c200           mov ecx, 0xc2342a
// 009d9235  e9a623d3ff           jmp 0x70b5e0
// auto-matched from its assembly shape

struct T_func_009d9230 { void m(); };
extern T_func_009d9230 G1_func_009d9230;
void func_009d9230()
{
    G1_func_009d9230.m();
}
