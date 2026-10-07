// roc 2010-06 009e0b10  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0b10
//
// 009e0b10  b990f8c000           mov ecx, 0xc0f890
// 009e0b15  e9669aa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0b10 { void m(); };
extern T_func_009e0b10 G1_func_009e0b10;
void func_009e0b10()
{
    G1_func_009e0b10.m();
}
