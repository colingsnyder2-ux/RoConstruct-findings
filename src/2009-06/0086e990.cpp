// roc 2009-06 0086e990  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086e990
//
// 0086e990  b978f0a400           mov ecx, 0xa4f078
// 0086e995  e9b64dc4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086e990 { void m(); };
extern T_func_0086e990 G1_func_0086e990;
void func_0086e990()
{
    G1_func_0086e990.m();
}
