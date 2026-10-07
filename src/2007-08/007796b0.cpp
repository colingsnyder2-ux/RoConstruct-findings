// roc 2007-08 007796b0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007796b0
//
// 007796b0  b908168c00           mov ecx, 0x8c1608
// 007796b5  e956dfc9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_007796b0 { void m(); };
extern T_func_007796b0 G1_func_007796b0;
void func_007796b0()
{
    G1_func_007796b0.m();
}
