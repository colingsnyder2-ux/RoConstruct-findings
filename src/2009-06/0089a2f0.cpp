// roc 2009-06 0089a2f0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a2f0
//
// 0089a2f0  b998c0a400           mov ecx, 0xa4c098
// 0089a2f5  e91600b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_0089a2f0 { void m(); };
extern T_func_0089a2f0 G1_func_0089a2f0;
void func_0089a2f0()
{
    G1_func_0089a2f0.m();
}
