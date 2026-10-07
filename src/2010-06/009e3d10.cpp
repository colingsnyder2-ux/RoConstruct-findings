// roc 2010-06 009e3d10  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3d10
//
// 009e3d10  b9e0b9c100           mov ecx, 0xc1b9e0
// 009e3d15  e96668a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e3d10 { void m(); };
extern T_func_009e3d10 G1_func_009e3d10;
void func_009e3d10()
{
    G1_func_009e3d10.m();
}
