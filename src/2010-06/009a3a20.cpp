// roc 2010-06 009a3a20  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a3a20
//
// 009a3a20  b908f9c100           mov ecx, 0xc1f908
// 009a3a25  e996f7afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a3a20 { void m(); };
extern T_func_009a3a20 G1_func_009a3a20;
void func_009a3a20()
{
    G1_func_009a3a20.m();
}
