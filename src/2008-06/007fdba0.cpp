// roc 2008-06 007fdba0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fdba0
//
// 007fdba0  b9a05c9700           mov ecx, 0x975ca0
// 007fdba5  e916d0c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fdba0 { void m(); };
extern T_func_007fdba0 G1_func_007fdba0;
void func_007fdba0()
{
    G1_func_007fdba0.m();
}
