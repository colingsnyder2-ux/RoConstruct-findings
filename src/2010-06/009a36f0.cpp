// roc 2010-06 009a36f0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a36f0
//
// 009a36f0  b9fcf1c100           mov ecx, 0xc1f1fc
// 009a36f5  e9c6faafff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a36f0 { void m(); };
extern T_func_009a36f0 G1_func_009a36f0;
void func_009a36f0()
{
    G1_func_009a36f0.m();
}
