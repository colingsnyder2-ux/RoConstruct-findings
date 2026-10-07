// roc 2010-06 009e0b20  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0b20
//
// 009e0b20  b990f7c000           mov ecx, 0xc0f790
// 009e0b25  e9569aa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0b20 { void m(); };
extern T_func_009e0b20 G1_func_009e0b20;
void func_009e0b20()
{
    G1_func_009e0b20.m();
}
