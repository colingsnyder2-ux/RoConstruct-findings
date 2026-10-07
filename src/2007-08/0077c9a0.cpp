// roc 2007-08 0077c9a0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c9a0
//
// 0077c9a0  b9b8808c00           mov ecx, 0x8c80b8
// 0077c9a5  e966acc9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077c9a0 { void m(); };
extern T_func_0077c9a0 G1_func_0077c9a0;
void func_0077c9a0()
{
    G1_func_0077c9a0.m();
}
