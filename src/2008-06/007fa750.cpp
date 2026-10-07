// roc 2008-06 007fa750  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fa750
//
// 007fa750  b950cc9600           mov ecx, 0x96cc50
// 007fa755  e9868dcaff           jmp 0x4a34e0
// auto-matched from its assembly shape

struct T_func_007fa750 { void m(); };
extern T_func_007fa750 G1_func_007fa750;
void func_007fa750()
{
    G1_func_007fa750.m();
}
