// roc 2007-08 0077c330  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c330
//
// 0077c330  b9c0718c00           mov ecx, 0x8c71c0
// 0077c335  e986a9c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077c330 { void m(); };
extern T_func_0077c330 G1_func_0077c330;
void func_0077c330()
{
    G1_func_0077c330.m();
}
