// roc 2007-08 00779480  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779480
//
// 00779480  b910118c00           mov ecx, 0x8c1110
// 00779485  e986e1c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00779480 { void m(); };
extern T_func_00779480 G1_func_00779480;
void func_00779480()
{
    G1_func_00779480.m();
}
