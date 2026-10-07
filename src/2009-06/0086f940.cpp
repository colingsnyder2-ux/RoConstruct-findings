// roc 2009-06 0086f940  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086f940
//
// 0086f940  b988f9a400           mov ecx, 0xa4f988
// 0086f945  e9063ec4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086f940 { void m(); };
extern T_func_0086f940 G1_func_0086f940;
void func_0086f940()
{
    G1_func_0086f940.m();
}
