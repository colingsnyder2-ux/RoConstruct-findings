// roc 2010-06 009a1ad0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a1ad0
//
// 009a1ad0  b920e4c100           mov ecx, 0xc1e420
// 009a1ad5  e9e616b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a1ad0 { void m(); };
extern T_func_009a1ad0 G1_func_009a1ad0;
void func_009a1ad0()
{
    G1_func_009a1ad0.m();
}
