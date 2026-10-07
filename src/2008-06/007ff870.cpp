// roc 2008-06 007ff870  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff870
//
// 007ff870  b938a99700           mov ecx, 0x97a938
// 007ff875  e9663ccaff           jmp 0x4a34e0
// auto-matched from its assembly shape

struct T_func_007ff870 { void m(); };
extern T_func_007ff870 G1_func_007ff870;
void func_007ff870()
{
    G1_func_007ff870.m();
}
