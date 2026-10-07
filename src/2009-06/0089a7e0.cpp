// roc 2009-06 0089a7e0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a7e0
//
// 0089a7e0  b960c9a400           mov ecx, 0xa4c960
// 0089a7e5  e926fbb6ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_0089a7e0 { void m(); };
extern T_func_0089a7e0 G1_func_0089a7e0;
void func_0089a7e0()
{
    G1_func_0089a7e0.m();
}
