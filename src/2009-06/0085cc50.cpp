// roc 2009-06 0085cc50  unit: seg_00850000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0085cc50
//
// 0085cc50  b930f4a300           mov ecx, 0xa3f430
// 0085cc55  e9f66ac5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0085cc50 { void m(); };
extern T_func_0085cc50 G1_func_0085cc50;
void func_0085cc50()
{
    G1_func_0085cc50.m();
}
