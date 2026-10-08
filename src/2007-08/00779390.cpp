// roc 2007-08 00779390  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779390
//
// 00779390  b9580d8c00           mov ecx, 0x8c0d58
// 00779395  e976e2c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00779390 { void m(); };
extern T_func_00779390 G1_func_00779390;
void func_00779390()
{
    G1_func_00779390.m();
}
