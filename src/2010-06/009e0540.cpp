// roc 2010-06 009e0540  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0540
//
// 009e0540  b99055c100           mov ecx, 0xc15590
// 009e0545  e936a0a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0540 { void m(); };
extern T_func_009e0540 G1_func_009e0540;
void func_009e0540()
{
    G1_func_009e0540.m();
}
