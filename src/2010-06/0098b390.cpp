// roc 2010-06 0098b390  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0098b390
//
// 0098b390  b9805dc000           mov ecx, 0xc05d80
// 0098b395  e9267eb1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0098b390 { void m(); };
extern T_func_0098b390 G1_func_0098b390;
void func_0098b390()
{
    G1_func_0098b390.m();
}
