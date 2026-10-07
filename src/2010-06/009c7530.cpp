// roc 2010-06 009c7530  unit: seg_009c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c7530
//
// 009c7530  b9795dc000           mov ecx, 0xc05d79
// 009c7535  e9a640d4ff           jmp 0x70b5e0
// auto-matched from its assembly shape

struct T_func_009c7530 { void m(); };
extern T_func_009c7530 G1_func_009c7530;
void func_009c7530()
{
    G1_func_009c7530.m();
}
