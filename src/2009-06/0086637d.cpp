// roc 2009-06 0086637d  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086637d
//
// 0086637d  b90ca8a400           mov ecx, 0xa4a80c
// 00866382  e9c99bbdff           jmp 0x43ff50
// auto-matched from its assembly shape

struct T_func_0086637d { void m(); };
extern T_func_0086637d G1_func_0086637d;
void func_0086637d()
{
    G1_func_0086637d.m();
}
