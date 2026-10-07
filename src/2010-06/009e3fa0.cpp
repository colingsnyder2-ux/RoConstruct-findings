// roc 2010-06 009e3fa0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3fa0
//
// 009e3fa0  b950c0c100           mov ecx, 0xc1c050
// 009e3fa5  e9c625bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e3fa0 { void m(); };
extern T_func_009e3fa0 G1_func_009e3fa0;
void func_009e3fa0()
{
    G1_func_009e3fa0.m();
}
