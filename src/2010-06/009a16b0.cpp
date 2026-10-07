// roc 2010-06 009a16b0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a16b0
//
// 009a16b0  b9c8e1c100           mov ecx, 0xc1e1c8
// 009a16b5  e9061bb0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a16b0 { void m(); };
extern T_func_009a16b0 G1_func_009a16b0;
void func_009a16b0()
{
    G1_func_009a16b0.m();
}
