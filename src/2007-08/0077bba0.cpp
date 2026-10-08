// roc 2007-08 0077bba0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bba0
//
// 0077bba0  b900618c00           mov ecx, 0x8c6100
// 0077bba5  e946bbe3ff           jmp 0x5b76f0
// auto-matched from its assembly shape

struct T_func_0077bba0 { void m(); };
extern T_func_0077bba0 G1_func_0077bba0;
void func_0077bba0()
{
    G1_func_0077bba0.m();
}
