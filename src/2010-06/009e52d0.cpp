// roc 2010-06 009e52d0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e52d0
//
// 009e52d0  b9e0e0c100           mov ecx, 0xc1e0e0
// 009e52d5  e99612bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e52d0 { void m(); };
extern T_func_009e52d0 G1_func_009e52d0;
void func_009e52d0()
{
    G1_func_009e52d0.m();
}
