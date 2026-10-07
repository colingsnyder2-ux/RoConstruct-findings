// roc 2007-08 0077c9e0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c9e0
//
// 0077c9e0  b9fc818c00           mov ecx, 0x8c81fc
// 0077c9e5  e926acc9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077c9e0 { void m(); };
extern T_func_0077c9e0 G1_func_0077c9e0;
void func_0077c9e0()
{
    G1_func_0077c9e0.m();
}
