// roc 2009-06 00893920  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893920
//
// 00893920  b9a496a300           mov ecx, 0xa396a4
// 00893925  e9b669d5ff           jmp 0x5ea2e0
// auto-matched from its assembly shape

struct T_func_00893920 { void m(); };
extern T_func_00893920 G1_func_00893920;
void func_00893920()
{
    G1_func_00893920.m();
}
