// roc 2010-06 009e5260  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5260
//
// 009e5260  b958e0c100           mov ecx, 0xc1e058
// 009e5265  e90613bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e5260 { void m(); };
extern T_func_009e5260 G1_func_009e5260;
void func_009e5260()
{
    G1_func_009e5260.m();
}
