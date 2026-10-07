// roc 2010-06 009d9240  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9240
//
// 009d9240  b92734c200           mov ecx, 0xc23427
// 009d9245  e99623d3ff           jmp 0x70b5e0
// auto-matched from its assembly shape

struct T_func_009d9240 { void m(); };
extern T_func_009d9240 G1_func_009d9240;
void func_009d9240()
{
    G1_func_009d9240.m();
}
