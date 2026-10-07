// roc 2008-06 007fc960  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fc960
//
// 007fc960  b9703d9700           mov ecx, 0x973d70
// 007fc965  e9766bcaff           jmp 0x4a34e0
// auto-matched from its assembly shape

struct T_func_007fc960 { void m(); };
extern T_func_007fc960 G1_func_007fc960;
void func_007fc960()
{
    G1_func_007fc960.m();
}
