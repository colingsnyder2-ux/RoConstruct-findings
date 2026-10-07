// roc 2009-06 00898490  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898490
//
// 00898490  b9708ca400           mov ecx, 0xa48c70
// 00898495  e9761eb7ff           jmp 0x40a310
// auto-matched from its assembly shape

struct T_func_00898490 { void m(); };
extern T_func_00898490 G1_func_00898490;
void func_00898490()
{
    G1_func_00898490.m();
}
