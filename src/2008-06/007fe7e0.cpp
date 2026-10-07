// roc 2008-06 007fe7e0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe7e0
//
// 007fe7e0  b9708a9700           mov ecx, 0x978a70
// 007fe7e5  e9d6c3c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe7e0 { void m(); };
extern T_func_007fe7e0 G1_func_007fe7e0;
void func_007fe7e0()
{
    G1_func_007fe7e0.m();
}
