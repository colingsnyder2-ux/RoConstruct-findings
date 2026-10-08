// roc 2007-08 00779650  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779650
//
// 00779650  b9d8158c00           mov ecx, 0x8c15d8
// 00779655  e9b6dfc9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00779650 { void m(); };
extern T_func_00779650 G1_func_00779650;
void func_00779650()
{
    G1_func_00779650.m();
}
