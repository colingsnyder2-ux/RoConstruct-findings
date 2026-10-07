// roc 2007-08 0077a940  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a940
//
// 0077a940  b9983d8c00           mov ecx, 0x8c3d98
// 0077a945  e976c3c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077a940 { void m(); };
extern T_func_0077a940 G1_func_0077a940;
void func_0077a940()
{
    G1_func_0077a940.m();
}
