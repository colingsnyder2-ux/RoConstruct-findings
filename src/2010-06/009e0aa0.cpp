// roc 2010-06 009e0aa0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0aa0
//
// 009e0aa0  b990ffc000           mov ecx, 0xc0ff90
// 009e0aa5  e9d69aa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0aa0 { void m(); };
extern T_func_009e0aa0 G1_func_009e0aa0;
void func_009e0aa0()
{
    G1_func_009e0aa0.m();
}
