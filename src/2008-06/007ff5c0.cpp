// roc 2008-06 007ff5c0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff5c0
//
// 007ff5c0  b908a49700           mov ecx, 0x97a408
// 007ff5c5  e9c6acddff           jmp 0x5da290
// auto-matched from its assembly shape

struct T_func_007ff5c0 { void m(); };
extern T_func_007ff5c0 G1_func_007ff5c0;
void func_007ff5c0()
{
    G1_func_007ff5c0.m();
}
