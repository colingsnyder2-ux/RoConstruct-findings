// roc 2008-06 007fd920  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd920
//
// 007fd920  b998579700           mov ecx, 0x975798
// 007fd925  e996d2c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fd920 { void m(); };
extern T_func_007fd920 G1_func_007fd920;
void func_007fd920()
{
    G1_func_007fd920.m();
}
