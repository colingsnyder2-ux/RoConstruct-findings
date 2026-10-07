// roc 2009-06 0089a300  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a300
//
// 0089a300  b908bfa400           mov ecx, 0xa4bf08
// 0089a305  e90600b7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_0089a300 { void m(); };
extern T_func_0089a300 G1_func_0089a300;
void func_0089a300()
{
    G1_func_0089a300.m();
}
