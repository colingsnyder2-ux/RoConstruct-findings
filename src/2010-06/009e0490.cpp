// roc 2010-06 009e0490  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0490
//
// 009e0490  b99060c100           mov ecx, 0xc16090
// 009e0495  e9e6a0a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0490 { void m(); };
extern T_func_009e0490 G1_func_009e0490;
void func_009e0490()
{
    G1_func_009e0490.m();
}
