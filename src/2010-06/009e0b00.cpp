// roc 2010-06 009e0b00  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0b00
//
// 009e0b00  b990f9c000           mov ecx, 0xc0f990
// 009e0b05  e9769aa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0b00 { void m(); };
extern T_func_009e0b00 G1_func_009e0b00;
void func_009e0b00()
{
    G1_func_009e0b00.m();
}
