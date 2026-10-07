// roc 2010-06 009e0b90  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0b90
//
// 009e0b90  b990f0c000           mov ecx, 0xc0f090
// 009e0b95  e9e699a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0b90 { void m(); };
extern T_func_009e0b90 G1_func_009e0b90;
void func_009e0b90()
{
    G1_func_009e0b90.m();
}
