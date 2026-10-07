// roc 2010-06 009e0d90  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0d90
//
// 009e0d90  b990d0c000           mov ecx, 0xc0d090
// 009e0d95  e9e697a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0d90 { void m(); };
extern T_func_009e0d90 G1_func_009e0d90;
void func_009e0d90()
{
    G1_func_009e0d90.m();
}
