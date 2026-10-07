// roc 2010-06 009e0cc0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0cc0
//
// 009e0cc0  b990ddc000           mov ecx, 0xc0dd90
// 009e0cc5  e9b698a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0cc0 { void m(); };
extern T_func_009e0cc0 G1_func_009e0cc0;
void func_009e0cc0()
{
    G1_func_009e0cc0.m();
}
