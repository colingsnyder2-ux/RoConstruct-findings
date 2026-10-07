// roc 2010-06 009d9250  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9250
//
// 009d9250  b92534c200           mov ecx, 0xc23425
// 009d9255  e98623d3ff           jmp 0x70b5e0
// auto-matched from its assembly shape

struct T_func_009d9250 { void m(); };
extern T_func_009d9250 G1_func_009d9250;
void func_009d9250()
{
    G1_func_009d9250.m();
}
