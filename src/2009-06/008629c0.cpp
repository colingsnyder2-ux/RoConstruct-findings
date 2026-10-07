// roc 2009-06 008629c0  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008629c0
//
// 008629c0  b9103ea400           mov ecx, 0xa43e10
// 008629c5  e9860dc5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_008629c0 { void m(); };
extern T_func_008629c0 G1_func_008629c0;
void func_008629c0()
{
    G1_func_008629c0.m();
}
