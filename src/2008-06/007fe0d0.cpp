// roc 2008-06 007fe0d0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe0d0
//
// 007fe0d0  b9886a9700           mov ecx, 0x976a88
// 007fe0d5  e9e6cac0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe0d0 { void m(); };
extern T_func_007fe0d0 G1_func_007fe0d0;
void func_007fe0d0()
{
    G1_func_007fe0d0.m();
}
