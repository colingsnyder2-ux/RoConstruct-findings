// roc 2010-06 009e0d80  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0d80
//
// 009e0d80  b990d1c000           mov ecx, 0xc0d190
// 009e0d85  e9f697a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0d80 { void m(); };
extern T_func_009e0d80 G1_func_009e0d80;
void func_009e0d80()
{
    G1_func_009e0d80.m();
}
