// roc 2010-06 009e0b50  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0b50
//
// 009e0b50  b990f4c000           mov ecx, 0xc0f490
// 009e0b55  e9269aa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0b50 { void m(); };
extern T_func_009e0b50 G1_func_009e0b50;
void func_009e0b50()
{
    G1_func_009e0b50.m();
}
