// roc 2010-06 009e3d00  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3d00
//
// 009e3d00  b9e0bac100           mov ecx, 0xc1bae0
// 009e3d05  e97668a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e3d00 { void m(); };
extern T_func_009e3d00 G1_func_009e3d00;
void func_009e3d00()
{
    G1_func_009e3d00.m();
}
