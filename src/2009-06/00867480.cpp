// roc 2009-06 00867480  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00867480
//
// 00867480  b9e8aca400           mov ecx, 0xa4ace8
// 00867485  e9c6c2c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00867480 { void m(); };
extern T_func_00867480 G1_func_00867480;
void func_00867480()
{
    G1_func_00867480.m();
}
