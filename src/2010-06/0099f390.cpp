// roc 2010-06 0099f390  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099f390
//
// 0099f390  b920cfc100           mov ecx, 0xc1cf20
// 0099f395  e9263eb0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099f390 { void m(); };
extern T_func_0099f390 G1_func_0099f390;
void func_0099f390()
{
    G1_func_0099f390.m();
}
