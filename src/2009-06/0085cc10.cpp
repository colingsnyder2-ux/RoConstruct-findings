// roc 2009-06 0085cc10  unit: seg_00850000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0085cc10
//
// 0085cc10  b9f0f3a300           mov ecx, 0xa3f3f0
// 0085cc15  e9366bc5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0085cc10 { void m(); };
extern T_func_0085cc10 G1_func_0085cc10;
void func_0085cc10()
{
    G1_func_0085cc10.m();
}
