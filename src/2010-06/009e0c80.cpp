// roc 2010-06 009e0c80  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0c80
//
// 009e0c80  b990e1c000           mov ecx, 0xc0e190
// 009e0c85  e9f698a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0c80 { void m(); };
extern T_func_009e0c80 G1_func_009e0c80;
void func_009e0c80()
{
    G1_func_009e0c80.m();
}
