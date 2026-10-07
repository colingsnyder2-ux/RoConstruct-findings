// roc 2008-06 008018b0  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008018b0
//
// 008018b0  b99ced9700           mov ecx, 0x97ed9c
// 008018b5  e9baaffbff           jmp 0x7bc874
// auto-matched from its assembly shape

struct T_func_008018b0 { void m(); };
extern T_func_008018b0 G1_func_008018b0;
void func_008018b0()
{
    G1_func_008018b0.m();
}
