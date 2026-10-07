// roc 2009-06 0085cc70  unit: seg_00850000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0085cc70
//
// 0085cc70  b918f3a300           mov ecx, 0xa3f318
// 0085cc75  e9d66ac5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0085cc70 { void m(); };
extern T_func_0085cc70 G1_func_0085cc70;
void func_0085cc70()
{
    G1_func_0085cc70.m();
}
