// roc 2010-06 009de8a0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de8a0
//
// 009de8a0  b9a0a2c000           mov ecx, 0xc0a2a0
// 009de8a5  e9d6bca2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009de8a0 { void m(); };
extern T_func_009de8a0 G1_func_009de8a0;
void func_009de8a0()
{
    G1_func_009de8a0.m();
}
