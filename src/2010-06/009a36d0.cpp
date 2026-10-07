// roc 2010-06 009a36d0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a36d0
//
// 009a36d0  b984f4c100           mov ecx, 0xc1f484
// 009a36d5  e9e6faafff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a36d0 { void m(); };
extern T_func_009a36d0 G1_func_009a36d0;
void func_009a36d0()
{
    G1_func_009a36d0.m();
}
