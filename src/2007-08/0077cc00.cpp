// roc 2007-08 0077cc00  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cc00
//
// 0077cc00  b9288d8c00           mov ecx, 0x8c8d28
// 0077cc05  e9a651efff           jmp 0x671db0
// auto-matched from its assembly shape

struct T_func_0077cc00 { void m(); };
extern T_func_0077cc00 G1_func_0077cc00;
void func_0077cc00()
{
    G1_func_0077cc00.m();
}
