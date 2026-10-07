// roc 2009-06 008997f0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008997f0
//
// 008997f0  b928ada400           mov ecx, 0xa4ad28
// 008997f5  e91660d3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_008997f0 { void m(); };
extern T_func_008997f0 G1_func_008997f0;
void func_008997f0()
{
    G1_func_008997f0.m();
}
