// roc 2009-06 0086c960  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086c960
//
// 0086c960  b918d8a400           mov ecx, 0xa4d818
// 0086c965  e9e66dc4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086c960 { void m(); };
extern T_func_0086c960 G1_func_0086c960;
void func_0086c960()
{
    G1_func_0086c960.m();
}
