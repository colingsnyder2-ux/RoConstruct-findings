// roc 2008-06 007fb2f0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb2f0
//
// 007fb2f0  b940ff9600           mov ecx, 0x96ff40
// 007fb2f5  e9c6f8c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fb2f0 { void m(); };
extern T_func_007fb2f0 G1_func_007fb2f0;
void func_007fb2f0()
{
    G1_func_007fb2f0.m();
}
