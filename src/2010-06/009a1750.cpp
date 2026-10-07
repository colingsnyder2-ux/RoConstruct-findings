// roc 2010-06 009a1750  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a1750
//
// 009a1750  b9a0e0c100           mov ecx, 0xc1e0a0
// 009a1755  e9661ab0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a1750 { void m(); };
extern T_func_009a1750 G1_func_009a1750;
void func_009a1750()
{
    G1_func_009a1750.m();
}
