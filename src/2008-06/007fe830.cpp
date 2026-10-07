// roc 2008-06 007fe830  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe830
//
// 007fe830  b9c8799700           mov ecx, 0x9779c8
// 007fe835  e986c3c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe830 { void m(); };
extern T_func_007fe830 G1_func_007fe830;
void func_007fe830()
{
    G1_func_007fe830.m();
}
