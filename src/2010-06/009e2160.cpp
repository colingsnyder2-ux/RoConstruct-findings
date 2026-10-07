// roc 2010-06 009e2160  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2160
//
// 009e2160  b98889c100           mov ecx, 0xc18988
// 009e2165  e90644bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e2160 { void m(); };
extern T_func_009e2160 G1_func_009e2160;
void func_009e2160()
{
    G1_func_009e2160.m();
}
