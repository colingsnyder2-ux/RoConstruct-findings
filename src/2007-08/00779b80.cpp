// roc 2007-08 00779b80  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779b80
//
// 00779b80  b9d8218c00           mov ecx, 0x8c21d8
// 00779b85  e9560bdeff           jmp 0x55a6e0
// auto-matched from its assembly shape

struct T_func_00779b80 { void m(); };
extern T_func_00779b80 G1_func_00779b80;
void func_00779b80()
{
    G1_func_00779b80.m();
}
