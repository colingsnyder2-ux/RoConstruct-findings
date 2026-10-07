// roc 2009-06 00898aa0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898aa0
//
// 00898aa0  b9c898a400           mov ecx, 0xa498c8
// 00898aa5  e9a64dd5ff           jmp 0x5ed850
// auto-matched from its assembly shape

struct T_func_00898aa0 { void m(); };
extern T_func_00898aa0 G1_func_00898aa0;
void func_00898aa0()
{
    G1_func_00898aa0.m();
}
