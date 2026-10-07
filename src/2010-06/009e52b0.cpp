// roc 2010-06 009e52b0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e52b0
//
// 009e52b0  b950dfc100           mov ecx, 0xc1df50
// 009e52b5  e9b612bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e52b0 { void m(); };
extern T_func_009e52b0 G1_func_009e52b0;
void func_009e52b0()
{
    G1_func_009e52b0.m();
}
