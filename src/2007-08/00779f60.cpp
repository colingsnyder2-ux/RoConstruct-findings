// roc 2007-08 00779f60  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779f60
//
// 00779f60  b93c258c00           mov ecx, 0x8c253c
// 00779f65  e9b6b7faff           jmp 0x725720
// auto-matched from its assembly shape

struct T_func_00779f60 { void m(); };
extern T_func_00779f60 G1_func_00779f60;
void func_00779f60()
{
    G1_func_00779f60.m();
}
