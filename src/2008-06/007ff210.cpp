// roc 2008-06 007ff210  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff210
//
// 007ff210  b9f8a09700           mov ecx, 0x97a0f8
// 007ff215  e9a6b9c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007ff210 { void m(); };
extern T_func_007ff210 G1_func_007ff210;
void func_007ff210()
{
    G1_func_007ff210.m();
}
