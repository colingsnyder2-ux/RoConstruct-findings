// roc 2010-06 009a3750  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a3750
//
// 009a3750  b9a4f1c100           mov ecx, 0xc1f1a4
// 009a3755  e966faafff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a3750 { void m(); };
extern T_func_009a3750 G1_func_009a3750;
void func_009a3750()
{
    G1_func_009a3750.m();
}
