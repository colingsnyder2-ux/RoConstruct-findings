// roc 2008-06 007fe7f0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe7f0
//
// 007fe7f0  b9e87c9700           mov ecx, 0x977ce8
// 007fe7f5  e9c6c3c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe7f0 { void m(); };
extern T_func_007fe7f0 G1_func_007fe7f0;
void func_007fe7f0()
{
    G1_func_007fe7f0.m();
}
