// roc 2010-06 009e0dd0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0dd0
//
// 009e0dd0  b990ccc000           mov ecx, 0xc0cc90
// 009e0dd5  e9a697a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0dd0 { void m(); };
extern T_func_009e0dd0 G1_func_009e0dd0;
void func_009e0dd0()
{
    G1_func_009e0dd0.m();
}
