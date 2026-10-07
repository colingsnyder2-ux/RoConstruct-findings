// roc 2007-08 00779690  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779690
//
// 00779690  b92c168c00           mov ecx, 0x8c162c
// 00779695  e976dfc9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00779690 { void m(); };
extern T_func_00779690 G1_func_00779690;
void func_00779690()
{
    G1_func_00779690.m();
}
