// roc 2010-06 009e0d20  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0d20
//
// 009e0d20  b990d7c000           mov ecx, 0xc0d790
// 009e0d25  e95698a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0d20 { void m(); };
extern T_func_009e0d20 G1_func_009e0d20;
void func_009e0d20()
{
    G1_func_009e0d20.m();
}
