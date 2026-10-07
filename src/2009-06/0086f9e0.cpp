// roc 2009-06 0086f9e0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086f9e0
//
// 0086f9e0  b97cfaa400           mov ecx, 0xa4fa7c
// 0086f9e5  e9663dc4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086f9e0 { void m(); };
extern T_func_0086f9e0 G1_func_0086f9e0;
void func_0086f9e0()
{
    G1_func_0086f9e0.m();
}
