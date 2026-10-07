// roc 2007-08 00779430  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779430
//
// 00779430  b9080f8c00           mov ecx, 0x8c0f08
// 00779435  e9d6e1c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00779430 { void m(); };
extern T_func_00779430 G1_func_00779430;
void func_00779430()
{
    G1_func_00779430.m();
}
