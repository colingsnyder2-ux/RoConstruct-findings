// roc 2010-06 009e0d10  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0d10
//
// 009e0d10  b990d8c000           mov ecx, 0xc0d890
// 009e0d15  e96698a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0d10 { void m(); };
extern T_func_009e0d10 G1_func_009e0d10;
void func_009e0d10()
{
    G1_func_009e0d10.m();
}
