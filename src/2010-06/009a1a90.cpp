// roc 2010-06 009a1a90  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a1a90
//
// 009a1a90  b988e5c100           mov ecx, 0xc1e588
// 009a1a95  e92617b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a1a90 { void m(); };
extern T_func_009a1a90 G1_func_009a1a90;
void func_009a1a90()
{
    G1_func_009a1a90.m();
}
