// roc 2008-06 007fe6f0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe6f0
//
// 007fe6f0  b9d0809700           mov ecx, 0x9780d0
// 007fe6f5  e9c6c4c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe6f0 { void m(); };
extern T_func_007fe6f0 G1_func_007fe6f0;
void func_007fe6f0()
{
    G1_func_007fe6f0.m();
}
