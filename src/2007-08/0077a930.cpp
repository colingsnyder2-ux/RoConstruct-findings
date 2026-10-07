// roc 2007-08 0077a930  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a930
//
// 0077a930  b9283e8c00           mov ecx, 0x8c3e28
// 0077a935  e986c3c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077a930 { void m(); };
extern T_func_0077a930 G1_func_0077a930;
void func_0077a930()
{
    G1_func_0077a930.m();
}
