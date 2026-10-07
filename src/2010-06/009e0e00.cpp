// roc 2010-06 009e0e00  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0e00
//
// 009e0e00  b990c9c000           mov ecx, 0xc0c990
// 009e0e05  e97697a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0e00 { void m(); };
extern T_func_009e0e00 G1_func_009e0e00;
void func_009e0e00()
{
    G1_func_009e0e00.m();
}
