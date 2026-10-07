// roc 2007-08 0077c530  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c530
//
// 0077c530  b9687b8c00           mov ecx, 0x8c7b68
// 0077c535  e986a7c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077c530 { void m(); };
extern T_func_0077c530 G1_func_0077c530;
void func_0077c530()
{
    G1_func_0077c530.m();
}
