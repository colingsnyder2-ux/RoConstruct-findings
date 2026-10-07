// roc 2009-06 0089c980  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c980
//
// 0089c980  b9e0f2a400           mov ecx, 0xa4f2e0
// 0089c985  e9862ed3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_0089c980 { void m(); };
extern T_func_0089c980 G1_func_0089c980;
void func_0089c980()
{
    G1_func_0089c980.m();
}
