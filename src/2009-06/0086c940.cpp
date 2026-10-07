// roc 2009-06 0086c940  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086c940
//
// 0086c940  b938d6a400           mov ecx, 0xa4d638
// 0086c945  e9066ec4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086c940 { void m(); };
extern T_func_0086c940 G1_func_0086c940;
void func_0086c940()
{
    G1_func_0086c940.m();
}
