// roc 2007-08 00779cc0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779cc0
//
// 00779cc0  b940208c00           mov ecx, 0x8c2040
// 00779cc5  e946d9c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00779cc0 { void m(); };
extern T_func_00779cc0 G1_func_00779cc0;
void func_00779cc0()
{
    G1_func_00779cc0.m();
}
