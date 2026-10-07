// roc 2008-06 007fd3a0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd3a0
//
// 007fd3a0  b9284d9700           mov ecx, 0x974d28
// 007fd3a5  e93661caff           jmp 0x4a34e0
// auto-matched from its assembly shape

struct T_func_007fd3a0 { void m(); };
extern T_func_007fd3a0 G1_func_007fd3a0;
void func_007fd3a0()
{
    G1_func_007fd3a0.m();
}
