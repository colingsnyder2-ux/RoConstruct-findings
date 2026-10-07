// roc 2010-06 009e6c30  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6c30
//
// 009e6c30  b9c0fdc100           mov ecx, 0xc1fdc0
// 009e6c35  e936f9baff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e6c30 { void m(); };
extern T_func_009e6c30 G1_func_009e6c30;
void func_009e6c30()
{
    G1_func_009e6c30.m();
}
