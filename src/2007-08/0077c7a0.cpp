// roc 2007-08 0077c7a0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c7a0
//
// 0077c7a0  b9d87c8c00           mov ecx, 0x8c7cd8
// 0077c7a5  e966aec9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077c7a0 { void m(); };
extern T_func_0077c7a0 G1_func_0077c7a0;
void func_0077c7a0()
{
    G1_func_0077c7a0.m();
}
