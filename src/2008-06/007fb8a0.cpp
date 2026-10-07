// roc 2008-06 007fb8a0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb8a0
//
// 007fb8a0  b908049700           mov ecx, 0x970408
// 007fb8a5  e99684caff           jmp 0x4a3d40
// auto-matched from its assembly shape

struct T_func_007fb8a0 { void m(); };
extern T_func_007fb8a0 G1_func_007fb8a0;
void func_007fb8a0()
{
    G1_func_007fb8a0.m();
}
