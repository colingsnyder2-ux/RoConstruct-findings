// roc 2010-06 009e0860  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0860
//
// 009e0860  b99023c100           mov ecx, 0xc12390
// 009e0865  e9169da2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0860 { void m(); };
extern T_func_009e0860 G1_func_009e0860;
void func_009e0860()
{
    G1_func_009e0860.m();
}
