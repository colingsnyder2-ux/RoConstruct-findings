// roc 2010-06 009e3bf0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3bf0
//
// 009e3bf0  b910b5c100           mov ecx, 0xc1b510
// 009e3bf5  e97629bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e3bf0 { void m(); };
extern T_func_009e3bf0 G1_func_009e3bf0;
void func_009e3bf0()
{
    G1_func_009e3bf0.m();
}
