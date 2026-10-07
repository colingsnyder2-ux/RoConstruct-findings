// roc 2009-06 0086f8e0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086f8e0
//
// 0086f8e0  b9b0faa400           mov ecx, 0xa4fab0
// 0086f8e5  e9663ec4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086f8e0 { void m(); };
extern T_func_0086f8e0 G1_func_0086f8e0;
void func_0086f8e0()
{
    G1_func_0086f8e0.m();
}
