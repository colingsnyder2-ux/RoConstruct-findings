// roc 2007-08 00779f50  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779f50
//
// 00779f50  b92c258c00           mov ecx, 0x8c252c
// 00779f55  e9c6b7faff           jmp 0x725720
// auto-matched from its assembly shape

struct T_func_00779f50 { void m(); };
extern T_func_00779f50 G1_func_00779f50;
void func_00779f50()
{
    G1_func_00779f50.m();
}
