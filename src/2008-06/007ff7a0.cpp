// roc 2008-06 007ff7a0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff7a0
//
// 007ff7a0  b9c0a79700           mov ecx, 0x97a7c0
// 007ff7a5  e916b4c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007ff7a0 { void m(); };
extern T_func_007ff7a0 G1_func_007ff7a0;
void func_007ff7a0()
{
    G1_func_007ff7a0.m();
}
