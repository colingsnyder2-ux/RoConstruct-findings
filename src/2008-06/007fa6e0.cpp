// roc 2008-06 007fa6e0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fa6e0
//
// 007fa6e0  b9e0cc9600           mov ecx, 0x96cce0
// 007fa6e5  e9f68dcaff           jmp 0x4a34e0
// auto-matched from its assembly shape

struct T_func_007fa6e0 { void m(); };
extern T_func_007fa6e0 G1_func_007fa6e0;
void func_007fa6e0()
{
    G1_func_007fa6e0.m();
}
