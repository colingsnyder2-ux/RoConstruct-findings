// roc 2009-06 0085b660  unit: seg_00850000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0085b660
//
// 0085b660  b970efa300           mov ecx, 0xa3ef70
// 0085b665  e9e680c5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0085b660 { void m(); };
extern T_func_0085b660 G1_func_0085b660;
void func_0085b660()
{
    G1_func_0085b660.m();
}
