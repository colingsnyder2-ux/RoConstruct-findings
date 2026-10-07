// roc 2009-06 008693b0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008693b0
//
// 008693b0  b924b6a400           mov ecx, 0xa4b624
// 008693b5  e996a3c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_008693b0 { void m(); };
extern T_func_008693b0 G1_func_008693b0;
void func_008693b0()
{
    G1_func_008693b0.m();
}
