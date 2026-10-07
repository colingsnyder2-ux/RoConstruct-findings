// roc 2009-06 0086f980  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086f980
//
// 0086f980  b900fba400           mov ecx, 0xa4fb00
// 0086f985  e9c63dc4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086f980 { void m(); };
extern T_func_0086f980 G1_func_0086f980;
void func_0086f980()
{
    G1_func_0086f980.m();
}
