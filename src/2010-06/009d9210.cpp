// roc 2010-06 009d9210  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9210
//
// 009d9210  b92434c200           mov ecx, 0xc23424
// 009d9215  e9c623d3ff           jmp 0x70b5e0
// auto-matched from its assembly shape

struct T_func_009d9210 { void m(); };
extern T_func_009d9210 G1_func_009d9210;
void func_009d9210()
{
    G1_func_009d9210.m();
}
