// roc 2008-06 008018a0  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008018a0
//
// 008018a0  b978ed9700           mov ecx, 0x97ed78
// 008018a5  e9c6adf1ff           jmp 0x71c670
// auto-matched from its assembly shape

struct T_func_008018a0 { void m(); };
extern T_func_008018a0 G1_func_008018a0;
void func_008018a0()
{
    G1_func_008018a0.m();
}
