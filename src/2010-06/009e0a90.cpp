// roc 2010-06 009e0a90  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0a90
//
// 009e0a90  b99000c100           mov ecx, 0xc10090
// 009e0a95  e9e69aa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0a90 { void m(); };
extern T_func_009e0a90 G1_func_009e0a90;
void func_009e0a90()
{
    G1_func_009e0a90.m();
}
