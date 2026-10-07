// roc 2010-06 009d9270  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9270
//
// 009d9270  b92934c200           mov ecx, 0xc23429
// 009d9275  e96623d3ff           jmp 0x70b5e0
// auto-matched from its assembly shape

struct T_func_009d9270 { void m(); };
extern T_func_009d9270 G1_func_009d9270;
void func_009d9270()
{
    G1_func_009d9270.m();
}
