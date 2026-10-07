// roc 2009-06 0089c9c0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c9c0
//
// 0089c9c0  b950f2a400           mov ecx, 0xa4f250
// 0089c9c5  e9462ed3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_0089c9c0 { void m(); };
extern T_func_0089c9c0 G1_func_0089c9c0;
void func_0089c9c0()
{
    G1_func_0089c9c0.m();
}
