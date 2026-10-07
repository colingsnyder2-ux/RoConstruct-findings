// roc 2010-06 009d9220  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9220
//
// 009d9220  b92834c200           mov ecx, 0xc23428
// 009d9225  e9b623d3ff           jmp 0x70b5e0
// auto-matched from its assembly shape

struct T_func_009d9220 { void m(); };
extern T_func_009d9220 G1_func_009d9220;
void func_009d9220()
{
    G1_func_009d9220.m();
}
