// roc 2009-06 008699c0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008699c0
//
// 008699c0  b9f0b7a400           mov ecx, 0xa4b7f0
// 008699c5  e9869dc4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_008699c0 { void m(); };
extern T_func_008699c0 G1_func_008699c0;
void func_008699c0()
{
    G1_func_008699c0.m();
}
