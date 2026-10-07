// roc 2009-06 0089a0e0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a0e0
//
// 0089a0e0  b9e0bba400           mov ecx, 0xa4bbe0
// 0089a0e5  e98665daff           jmp 0x640670
// auto-matched from its assembly shape

struct T_func_0089a0e0 { void m(); };
extern T_func_0089a0e0 G1_func_0089a0e0;
void func_0089a0e0()
{
    G1_func_0089a0e0.m();
}
