// roc 2008-06 007fca30  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fca30
//
// 007fca30  b9f83d9700           mov ecx, 0x973df8
// 007fca35  e9a66acaff           jmp 0x4a34e0
// auto-matched from its assembly shape

struct T_func_007fca30 { void m(); };
extern T_func_007fca30 G1_func_007fca30;
void func_007fca30()
{
    G1_func_007fca30.m();
}
