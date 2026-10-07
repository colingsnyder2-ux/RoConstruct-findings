// roc 2010-06 009e07c0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e07c0
//
// 009e07c0  b9902dc100           mov ecx, 0xc12d90
// 009e07c5  e9b69da2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e07c0 { void m(); };
extern T_func_009e07c0 G1_func_009e07c0;
void func_009e07c0()
{
    G1_func_009e07c0.m();
}
