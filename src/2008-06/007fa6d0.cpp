// roc 2008-06 007fa6d0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fa6d0
//
// 007fa6d0  b998cc9600           mov ecx, 0x96cc98
// 007fa6d5  e9068ecaff           jmp 0x4a34e0
// auto-matched from its assembly shape

struct T_func_007fa6d0 { void m(); };
extern T_func_007fa6d0 G1_func_007fa6d0;
void func_007fa6d0()
{
    G1_func_007fa6d0.m();
}
