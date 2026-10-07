// roc 2008-06 007fe6d0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe6d0
//
// 007fe6d0  b960829700           mov ecx, 0x978260
// 007fe6d5  e9e6c4c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe6d0 { void m(); };
extern T_func_007fe6d0 G1_func_007fe6d0;
void func_007fe6d0()
{
    G1_func_007fe6d0.m();
}
