// roc 2010-06 009a1fa0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a1fa0
//
// 009a1fa0  b984e8c100           mov ecx, 0xc1e884
// 009a1fa5  e91612b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a1fa0 { void m(); };
extern T_func_009a1fa0 G1_func_009a1fa0;
void func_009a1fa0()
{
    G1_func_009a1fa0.m();
}
