// roc 2008-06 007fe7c0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe7c0
//
// 007fe7c0  b9008c9700           mov ecx, 0x978c00
// 007fe7c5  e9f6c3c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe7c0 { void m(); };
extern T_func_007fe7c0 G1_func_007fe7c0;
void func_007fe7c0()
{
    G1_func_007fe7c0.m();
}
