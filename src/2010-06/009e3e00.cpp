// roc 2010-06 009e3e00  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3e00
//
// 009e3e00  b9d0bec100           mov ecx, 0xc1bed0
// 009e3e05  e96627bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e3e00 { void m(); };
extern T_func_009e3e00 G1_func_009e3e00;
void func_009e3e00()
{
    G1_func_009e3e00.m();
}
