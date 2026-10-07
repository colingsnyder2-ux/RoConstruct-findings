// roc 2007-08 0077c7d0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c7d0
//
// 0077c7d0  b93c7d8c00           mov ecx, 0x8c7d3c
// 0077c7d5  e936aec9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077c7d0 { void m(); };
extern T_func_0077c7d0 G1_func_0077c7d0;
void func_0077c7d0()
{
    G1_func_0077c7d0.m();
}
