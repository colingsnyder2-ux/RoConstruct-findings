// roc 2010-06 0099b390  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099b390
//
// 0099b390  b928a2c100           mov ecx, 0xc1a228
// 0099b395  e9267eb0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099b390 { void m(); };
extern T_func_0099b390 G1_func_0099b390;
void func_0099b390()
{
    G1_func_0099b390.m();
}
