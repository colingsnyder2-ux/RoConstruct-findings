// roc 2007-08 00779450  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779450
//
// 00779450  b9900e8c00           mov ecx, 0x8c0e90
// 00779455  e9b6e1c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00779450 { void m(); };
extern T_func_00779450 G1_func_00779450;
void func_00779450()
{
    G1_func_00779450.m();
}
