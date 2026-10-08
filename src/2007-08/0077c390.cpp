// roc 2007-08 0077c390  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c390
//
// 0077c390  b980768c00           mov ecx, 0x8c7680
// 0077c395  e976b2c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077c390 { void m(); };
extern T_func_0077c390 G1_func_0077c390;
void func_0077c390()
{
    G1_func_0077c390.m();
}
