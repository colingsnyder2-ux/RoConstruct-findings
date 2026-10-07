// roc 2007-08 0077b4e0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b4e0
//
// 0077b4e0  b928588c00           mov ecx, 0x8c5828
// 0077b4e5  e9e6bbe2ff           jmp 0x5a70d0
// auto-matched from its assembly shape

struct T_func_0077b4e0 { void m(); };
extern T_func_0077b4e0 G1_func_0077b4e0;
void func_0077b4e0()
{
    G1_func_0077b4e0.m();
}
