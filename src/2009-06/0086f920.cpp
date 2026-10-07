// roc 2009-06 0086f920  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0086f920
//
// 0086f920  b90cfaa400           mov ecx, 0xa4fa0c
// 0086f925  e9263ec4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0086f920 { void m(); };
extern T_func_0086f920 G1_func_0086f920;
void func_0086f920()
{
    G1_func_0086f920.m();
}
