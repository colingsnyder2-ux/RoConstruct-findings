// roc 2009-06 0089a2e0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a2e0
//
// 0089a2e0  b9d0bfa400           mov ecx, 0xa4bfd0
// 0089a2e5  e92600b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_0089a2e0 { void m(); };
extern T_func_0089a2e0 G1_func_0089a2e0;
void func_0089a2e0()
{
    G1_func_0089a2e0.m();
}
