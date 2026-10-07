// roc 2007-08 0077a920  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a920
//
// 0077a920  b9b83e8c00           mov ecx, 0x8c3eb8
// 0077a925  e996c3c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077a920 { void m(); };
extern T_func_0077a920 G1_func_0077a920;
void func_0077a920()
{
    G1_func_0077a920.m();
}
