// roc 2007-08 0077a4c0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a4c0
//
// 0077a4c0  b9482f8c00           mov ecx, 0x8c2f48
// 0077a4c5  e9562fe0ff           jmp 0x57d420
// auto-matched from its assembly shape

struct T_func_0077a4c0 { void m(); };
extern T_func_0077a4c0 G1_func_0077a4c0;
void func_0077a4c0()
{
    G1_func_0077a4c0.m();
}
