// roc 2009-06 0089a860  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a860
//
// 0089a860  b920cba400           mov ecx, 0xa4cb20
// 0089a865  e9a64fd3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_0089a860 { void m(); };
extern T_func_0089a860 G1_func_0089a860;
void func_0089a860()
{
    G1_func_0089a860.m();
}
