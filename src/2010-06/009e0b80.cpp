// roc 2010-06 009e0b80  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0b80
//
// 009e0b80  b990f1c000           mov ecx, 0xc0f190
// 009e0b85  e9f699a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0b80 { void m(); };
extern T_func_009e0b80 G1_func_009e0b80;
void func_009e0b80()
{
    G1_func_009e0b80.m();
}
