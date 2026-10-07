// roc 2010-06 009e33d0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e33d0
//
// 009e33d0  b9e8a9c100           mov ecx, 0xc1a9e8
// 009e33d5  e99631bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e33d0 { void m(); };
extern T_func_009e33d0 G1_func_009e33d0;
void func_009e33d0()
{
    G1_func_009e33d0.m();
}
