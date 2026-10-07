// roc 2008-06 00801940  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801940
//
// 00801940  b98cf29700           mov ecx, 0x97f28c
// 00801945  e9b6f7f9ff           jmp 0x7a1100
// auto-matched from its assembly shape

struct T_func_00801940 { void m(); };
extern T_func_00801940 G1_func_00801940;
void func_00801940()
{
    G1_func_00801940.m();
}
