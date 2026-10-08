// roc 2007-08 0077a630  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a630
//
// 0077a630  b9c0328c00           mov ecx, 0x8c32c0
// 0077a635  e946a8e0ff           jmp 0x584e80
// auto-matched from its assembly shape

struct T_func_0077a630 { void m(); };
extern T_func_0077a630 G1_func_0077a630;
void func_0077a630()
{
    G1_func_0077a630.m();
}
