// roc 2007-08 00779b90  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779b90
//
// 00779b90  b970218c00           mov ecx, 0x8c2170
// 00779b95  e976dac9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00779b90 { void m(); };
extern T_func_00779b90 G1_func_00779b90;
void func_00779b90()
{
    G1_func_00779b90.m();
}
