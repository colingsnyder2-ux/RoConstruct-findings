// roc 2008-06 007fe6e0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe6e0
//
// 007fe6e0  b998819700           mov ecx, 0x978198
// 007fe6e5  e9d6c4c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe6e0 { void m(); };
extern T_func_007fe6e0 G1_func_007fe6e0;
void func_007fe6e0()
{
    G1_func_007fe6e0.m();
}
