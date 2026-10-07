// roc 2008-06 007fede0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fede0
//
// 007fede0  b960989700           mov ecx, 0x979860
// 007fede5  e9f646caff           jmp 0x4a34e0
// auto-matched from its assembly shape

struct T_func_007fede0 { void m(); };
extern T_func_007fede0 G1_func_007fede0;
void func_007fede0()
{
    G1_func_007fede0.m();
}
