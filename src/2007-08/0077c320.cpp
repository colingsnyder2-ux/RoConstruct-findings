// roc 2007-08 0077c320  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c320
//
// 0077c320  b950728c00           mov ecx, 0x8c7250
// 0077c325  e996a9c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077c320 { void m(); };
extern T_func_0077c320 G1_func_0077c320;
void func_0077c320()
{
    G1_func_0077c320.m();
}
