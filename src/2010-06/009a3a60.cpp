// roc 2010-06 009a3a60  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a3a60
//
// 009a3a60  b9a8f7c100           mov ecx, 0xc1f7a8
// 009a3a65  e956f7afff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a3a60 { void m(); };
extern T_func_009a3a60 G1_func_009a3a60;
void func_009a3a60()
{
    G1_func_009a3a60.m();
}
