// roc 2010-06 009e7d50  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7d50
//
// 009e7d50  b92018c200           mov ecx, 0xc21820
// 009e7d55  e9f694d0ff           jmp 0x6f1250
// auto-matched from its assembly shape

struct T_func_009e7d50 { void m(); };
extern T_func_009e7d50 G1_func_009e7d50;
void func_009e7d50()
{
    G1_func_009e7d50.m();
}
