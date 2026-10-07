// roc 2009-06 0086623e  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086623e
//
// 0086623e  b92ca8a400           mov ecx, 0xa4a82c
// 00866243  e9089dbdff           jmp 0x43ff50
// auto-matched from its assembly shape

struct T_func_0086623e { void m(); };
extern T_func_0086623e G1_func_0086623e;
void func_0086623e()
{
    G1_func_0086623e.m();
}
