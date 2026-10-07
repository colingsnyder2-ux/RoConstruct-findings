// roc 2007-08 0077bf00  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bf00
//
// 0077bf00  b9106e8c00           mov ecx, 0x8c6e10
// 0077bf05  e9a667e6ff           jmp 0x5e26b0
// auto-matched from its assembly shape

struct T_func_0077bf00 { void m(); };
extern T_func_0077bf00 G1_func_0077bf00;
void func_0077bf00()
{
    G1_func_0077bf00.m();
}
