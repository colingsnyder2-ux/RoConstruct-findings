// roc 2010-06 0099dc90  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099dc90
//
// 0099dc90  b940bec100           mov ecx, 0xc1be40
// 0099dc95  e92655b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099dc90 { void m(); };
extern T_func_0099dc90 G1_func_0099dc90;
void func_0099dc90()
{
    G1_func_0099dc90.m();
}
