// roc 2008-06 007fb870  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb870
//
// 007fb870  b958059700           mov ecx, 0x970558
// 007fb875  e9667ccaff           jmp 0x4a34e0
// auto-matched from its assembly shape

struct T_func_007fb870 { void m(); };
extern T_func_007fb870 G1_func_007fb870;
void func_007fb870()
{
    G1_func_007fb870.m();
}
