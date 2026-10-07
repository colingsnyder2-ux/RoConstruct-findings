// roc 2007-08 0077c3b0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c3b0
//
// 0077c3b0  b914758c00           mov ecx, 0x8c7514
// 0077c3b5  e956b2c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077c3b0 { void m(); };
extern T_func_0077c3b0 G1_func_0077c3b0;
void func_0077c3b0()
{
    G1_func_0077c3b0.m();
}
