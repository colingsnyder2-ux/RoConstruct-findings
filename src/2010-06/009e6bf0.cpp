// roc 2010-06 009e6bf0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6bf0
//
// 009e6bf0  b950fec100           mov ecx, 0xc1fe50
// 009e6bf5  e976f9baff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e6bf0 { void m(); };
extern T_func_009e6bf0 G1_func_009e6bf0;
void func_009e6bf0()
{
    G1_func_009e6bf0.m();
}
