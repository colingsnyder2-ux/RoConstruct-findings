// roc 2007-08 0077a390  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a390
//
// 0077a390  b9f0298c00           mov ecx, 0x8c29f0
// 0077a395  e976d2c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077a390 { void m(); };
extern T_func_0077a390 G1_func_0077a390;
void func_0077a390()
{
    G1_func_0077a390.m();
}
