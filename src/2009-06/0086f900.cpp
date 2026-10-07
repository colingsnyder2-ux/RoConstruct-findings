// roc 2009-06 0086f900  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086f900
//
// 0086f900  b914f9a400           mov ecx, 0xa4f914
// 0086f905  e9463ec4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086f900 { void m(); };
extern T_func_0086f900 G1_func_0086f900;
void func_0086f900()
{
    G1_func_0086f900.m();
}
