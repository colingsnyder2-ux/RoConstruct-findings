// roc 2007-08 0077b620  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b620
//
// 0077b620  b9ec5b8c00           mov ecx, 0x8c5bec
// 0077b625  e9e6bfc9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077b620 { void m(); };
extern T_func_0077b620 G1_func_0077b620;
void func_0077b620()
{
    G1_func_0077b620.m();
}
