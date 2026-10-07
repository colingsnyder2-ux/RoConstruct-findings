// roc 2010-06 009a37b0  unit: seg_009a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a37b0
//
// 009a37b0  b920f0c100           mov ecx, 0xc1f020
// 009a37b5  e906faafff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_009a37b0 { void m(); };
extern T_func_009a37b0 G1_func_009a37b0;
void func_009a37b0()
{
    G1_func_009a37b0.m();
}
