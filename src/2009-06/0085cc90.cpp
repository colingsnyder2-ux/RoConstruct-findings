// roc 2009-06 0085cc90  unit: seg_00850000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0085cc90
//
// 0085cc90  b970f4a300           mov ecx, 0xa3f470
// 0085cc95  e9b66ac5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0085cc90 { void m(); };
extern T_func_0085cc90 G1_func_0085cc90;
void func_0085cc90()
{
    G1_func_0085cc90.m();
}
