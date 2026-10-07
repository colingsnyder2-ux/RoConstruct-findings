// roc 2009-06 0089a7f0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a7f0
//
// 0089a7f0  b998c8a400           mov ecx, 0xa4c898
// 0089a7f5  e916fbb6ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_0089a7f0 { void m(); };
extern T_func_0089a7f0 G1_func_0089a7f0;
void func_0089a7f0()
{
    G1_func_0089a7f0.m();
}
