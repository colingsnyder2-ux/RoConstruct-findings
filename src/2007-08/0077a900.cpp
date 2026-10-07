// roc 2007-08 0077a900  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a900
//
// 0077a900  b9d83f8c00           mov ecx, 0x8c3fd8
// 0077a905  e9b6c3c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077a900 { void m(); };
extern T_func_0077a900 G1_func_0077a900;
void func_0077a900()
{
    G1_func_0077a900.m();
}
