// roc 2009-06 0086c980  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086c980
//
// 0086c980  b9c8d5a400           mov ecx, 0xa4d5c8
// 0086c985  e9c66dc4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086c980 { void m(); };
extern T_func_0086c980 G1_func_0086c980;
void func_0086c980()
{
    G1_func_0086c980.m();
}
