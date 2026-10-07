// roc 2007-08 00779670  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779670
//
// 00779670  b9f0138c00           mov ecx, 0x8c13f0
// 00779675  e996dfc9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00779670 { void m(); };
extern T_func_00779670 G1_func_00779670;
void func_00779670()
{
    G1_func_00779670.m();
}
