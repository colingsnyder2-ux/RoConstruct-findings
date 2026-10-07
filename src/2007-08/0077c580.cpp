// roc 2007-08 0077c580  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c580
//
// 0077c580  b998788c00           mov ecx, 0x8c7898
// 0077c585  e936a7c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077c580 { void m(); };
extern T_func_0077c580 G1_func_0077c580;
void func_0077c580()
{
    G1_func_0077c580.m();
}
