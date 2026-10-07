// roc 2010-06 009dc2f0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dc2f0
//
// 009dc2f0  b9983ec000           mov ecx, 0xc03e98
// 009dc2f5  e986e2a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009dc2f0 { void m(); };
extern T_func_009dc2f0 G1_func_009dc2f0;
void func_009dc2f0()
{
    G1_func_009dc2f0.m();
}
