// roc 2009-06 00895660  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895660
//
// 00895660  b900dfa300           mov ecx, 0xa3df00
// 00895665  e9a6a1d3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_00895660 { void m(); };
extern T_func_00895660 G1_func_00895660;
void func_00895660()
{
    G1_func_00895660.m();
}
