// roc 2010-06 009e3d20  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3d20
//
// 009e3d20  b9e0b8c100           mov ecx, 0xc1b8e0
// 009e3d25  e95668a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e3d20 { void m(); };
extern T_func_009e3d20 G1_func_009e3d20;
void func_009e3d20()
{
    G1_func_009e3d20.m();
}
