// roc 2007-08 0077aa30  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077aa30
//
// 0077aa30  b998468c00           mov ecx, 0x8c4698
// 0077aa35  e986c2c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077aa30 { void m(); };
extern T_func_0077aa30 G1_func_0077aa30;
void func_0077aa30()
{
    G1_func_0077aa30.m();
}
