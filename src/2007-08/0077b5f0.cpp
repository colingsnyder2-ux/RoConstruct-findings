// roc 2007-08 0077b5f0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b5f0
//
// 0077b5f0  b9885d8c00           mov ecx, 0x8c5d88
// 0077b5f5  e916c0c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077b5f0 { void m(); };
extern T_func_0077b5f0 G1_func_0077b5f0;
void func_0077b5f0()
{
    G1_func_0077b5f0.m();
}
