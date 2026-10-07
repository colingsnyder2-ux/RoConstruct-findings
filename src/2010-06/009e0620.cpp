// roc 2010-06 009e0620  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0620
//
// 009e0620  b99047c100           mov ecx, 0xc14790
// 009e0625  e9569fa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0620 { void m(); };
extern T_func_009e0620 G1_func_009e0620;
void func_009e0620()
{
    G1_func_009e0620.m();
}
