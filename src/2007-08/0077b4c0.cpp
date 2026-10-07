// roc 2007-08 0077b4c0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b4c0
//
// 0077b4c0  b920598c00           mov ecx, 0x8c5920
// 0077b4c5  e946c1c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077b4c0 { void m(); };
extern T_func_0077b4c0 G1_func_0077b4c0;
void func_0077b4c0()
{
    G1_func_0077b4c0.m();
}
