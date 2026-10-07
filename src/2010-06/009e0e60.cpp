// roc 2010-06 009e0e60  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0e60
//
// 009e0e60  b990c3c000           mov ecx, 0xc0c390
// 009e0e65  e91697a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0e60 { void m(); };
extern T_func_009e0e60 G1_func_009e0e60;
void func_009e0e60()
{
    G1_func_009e0e60.m();
}
