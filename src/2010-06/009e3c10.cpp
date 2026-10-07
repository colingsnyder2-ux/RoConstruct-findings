// roc 2010-06 009e3c10  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3c10
//
// 009e3c10  b980b6c100           mov ecx, 0xc1b680
// 009e3c15  e95629bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e3c10 { void m(); };
extern T_func_009e3c10 G1_func_009e3c10;
void func_009e3c10()
{
    G1_func_009e3c10.m();
}
