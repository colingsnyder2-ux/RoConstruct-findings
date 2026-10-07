// roc 2010-06 009e0580  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0580
//
// 009e0580  b99051c100           mov ecx, 0xc15190
// 009e0585  e9f69fa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0580 { void m(); };
extern T_func_009e0580 G1_func_009e0580;
void func_009e0580()
{
    G1_func_009e0580.m();
}
