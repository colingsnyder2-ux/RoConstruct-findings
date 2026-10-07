// roc 2008-06 007fe770  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe770
//
// 007fe770  b9e88f9700           mov ecx, 0x978fe8
// 007fe775  e946c4c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe770 { void m(); };
extern T_func_007fe770 G1_func_007fe770;
void func_007fe770()
{
    G1_func_007fe770.m();
}
