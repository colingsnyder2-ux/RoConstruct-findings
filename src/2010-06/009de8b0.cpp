// roc 2010-06 009de8b0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de8b0
//
// 009de8b0  b9a0a1c000           mov ecx, 0xc0a1a0
// 009de8b5  e9c6bca2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009de8b0 { void m(); };
extern T_func_009de8b0 G1_func_009de8b0;
void func_009de8b0()
{
    G1_func_009de8b0.m();
}
