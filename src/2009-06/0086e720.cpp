// roc 2009-06 0086e720  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086e720
//
// 0086e720  b908eba400           mov ecx, 0xa4eb08
// 0086e725  e92650c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086e720 { void m(); };
extern T_func_0086e720 G1_func_0086e720;
void func_0086e720()
{
    G1_func_0086e720.m();
}
