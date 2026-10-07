// roc 2009-06 0089a310  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a310
//
// 0089a310  b960c1a400           mov ecx, 0xa4c160
// 0089a315  e9d6b4daff           jmp 0x6457f0
// auto-matched from its assembly shape

struct T_func_0089a310 { void m(); };
extern T_func_0089a310 G1_func_0089a310;
void func_0089a310()
{
    G1_func_0089a310.m();
}
