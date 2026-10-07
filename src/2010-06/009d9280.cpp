// roc 2010-06 009d9280  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9280
//
// 009d9280  b92334c200           mov ecx, 0xc23423
// 009d9285  e95623d3ff           jmp 0x70b5e0
// auto-matched from its assembly shape

struct T_func_009d9280 { void m(); };
extern T_func_009d9280 G1_func_009d9280;
void func_009d9280()
{
    G1_func_009d9280.m();
}
