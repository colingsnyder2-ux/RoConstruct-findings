// roc 2009-06 0089a770  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a770
//
// 0089a770  b9d8c5a400           mov ecx, 0xa4c5d8
// 0089a775  e98674dbff           jmp 0x651c00
// auto-matched from its assembly shape

struct T_func_0089a770 { void m(); };
extern T_func_0089a770 G1_func_0089a770;
void func_0089a770()
{
    G1_func_0089a770.m();
}
