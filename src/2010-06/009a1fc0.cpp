// roc 2010-06 009a1fc0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a1fc0
//
// 009a1fc0  b948e8c100           mov ecx, 0xc1e848
// 009a1fc5  e9f611b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a1fc0 { void m(); };
extern T_func_009a1fc0 G1_func_009a1fc0;
void func_009a1fc0()
{
    G1_func_009a1fc0.m();
}
