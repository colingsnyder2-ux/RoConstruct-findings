// roc 2007-08 0077a830  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a830
//
// 0077a830  b900358c00           mov ecx, 0x8c3500
// 0077a835  e986c4c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077a830 { void m(); };
extern T_func_0077a830 G1_func_0077a830;
void func_0077a830()
{
    G1_func_0077a830.m();
}
