// roc 2007-08 0077b470  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b470
//
// 0077b470  b988598c00           mov ecx, 0x8c5988
// 0077b475  e996c1c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077b470 { void m(); };
extern T_func_0077b470 G1_func_0077b470;
void func_0077b470()
{
    G1_func_0077b470.m();
}
