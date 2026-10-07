// roc 2008-06 007fbbf0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fbbf0
//
// 007fbbf0  b9f00e9700           mov ecx, 0x970ef0
// 007fbbf5  e9e678caff           jmp 0x4a34e0
// auto-matched from its assembly shape

struct T_func_007fbbf0 { void m(); };
extern T_func_007fbbf0 G1_func_007fbbf0;
void func_007fbbf0()
{
    G1_func_007fbbf0.m();
}
