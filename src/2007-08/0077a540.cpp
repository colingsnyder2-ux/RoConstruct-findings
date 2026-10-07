// roc 2007-08 0077a540  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a540
//
// 0077a540  b9882f8c00           mov ecx, 0x8c2f88
// 0077a545  e9d62ee0ff           jmp 0x57d420
// auto-matched from its assembly shape

struct T_func_0077a540 { void m(); };
extern T_func_0077a540 G1_func_0077a540;
void func_0077a540()
{
    G1_func_0077a540.m();
}
