// roc 2009-06 0085cc30  unit: seg_00850000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0085cc30
//
// 0085cc30  b958f3a300           mov ecx, 0xa3f358
// 0085cc35  e9166bc5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0085cc30 { void m(); };
extern T_func_0085cc30 G1_func_0085cc30;
void func_0085cc30()
{
    G1_func_0085cc30.m();
}
