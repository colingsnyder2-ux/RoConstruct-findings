// roc 2010-06 009e0b60  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0b60
//
// 009e0b60  b990f3c000           mov ecx, 0xc0f390
// 009e0b65  e9169aa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0b60 { void m(); };
extern T_func_009e0b60 G1_func_009e0b60;
void func_009e0b60()
{
    G1_func_009e0b60.m();
}
