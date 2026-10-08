// roc 2007-08 00779c90  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779c90
//
// 00779c90  b9a8208c00           mov ecx, 0x8c20a8
// 00779c95  e9460adeff           jmp 0x55a6e0
// auto-matched from its assembly shape

struct T_func_00779c90 { void m(); };
extern T_func_00779c90 G1_func_00779c90;
void func_00779c90()
{
    G1_func_00779c90.m();
}
