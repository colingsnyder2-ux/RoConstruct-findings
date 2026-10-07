// roc 2009-06 008956f0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008956f0
//
// 008956f0  b9c8dfa300           mov ecx, 0xa3dfc8
// 008956f5  e916a1d3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_008956f0 { void m(); };
extern T_func_008956f0 G1_func_008956f0;
void func_008956f0()
{
    G1_func_008956f0.m();
}
