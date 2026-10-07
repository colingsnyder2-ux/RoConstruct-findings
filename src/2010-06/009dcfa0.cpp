// roc 2010-06 009dcfa0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dcfa0
//
// 009dcfa0  b94053c000           mov ecx, 0xc05340
// 009dcfa5  e9d6d5a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009dcfa0 { void m(); };
extern T_func_009dcfa0 G1_func_009dcfa0;
void func_009dcfa0()
{
    G1_func_009dcfa0.m();
}
