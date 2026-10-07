// roc 2010-06 009e33c0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e33c0
//
// 009e33c0  b920abc100           mov ecx, 0xc1ab20
// 009e33c5  e9a631bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e33c0 { void m(); };
extern T_func_009e33c0 G1_func_009e33c0;
void func_009e33c0()
{
    G1_func_009e33c0.m();
}
