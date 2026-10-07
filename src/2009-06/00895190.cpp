// roc 2009-06 00895190  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895190
//
// 00895190  b998d9a300           mov ecx, 0xa3d998
// 00895195  e976a6d3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_00895190 { void m(); };
extern T_func_00895190 G1_func_00895190;
void func_00895190()
{
    G1_func_00895190.m();
}
