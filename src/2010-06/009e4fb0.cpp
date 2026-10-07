// roc 2010-06 009e4fb0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4fb0
//
// 009e4fb0  b958d3c100           mov ecx, 0xc1d358
// 009e4fb5  e9e69dc8ff           jmp 0x66eda0
// auto-matched from its assembly shape

struct T_func_009e4fb0 { void m(); };
extern T_func_009e4fb0 G1_func_009e4fb0;
void func_009e4fb0()
{
    G1_func_009e4fb0.m();
}
