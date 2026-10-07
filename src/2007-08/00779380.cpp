// roc 2007-08 00779380  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779380
//
// 00779380  b9d80d8c00           mov ecx, 0x8c0dd8
// 00779385  e986e2c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00779380 { void m(); };
extern T_func_00779380 G1_func_00779380;
void func_00779380()
{
    G1_func_00779380.m();
}
