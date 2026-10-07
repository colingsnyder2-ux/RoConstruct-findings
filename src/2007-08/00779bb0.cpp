// roc 2007-08 00779bb0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779bb0
//
// 00779bb0  b910208c00           mov ecx, 0x8c2010
// 00779bb5  e956dac9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00779bb0 { void m(); };
extern T_func_00779bb0 G1_func_00779bb0;
void func_00779bb0()
{
    G1_func_00779bb0.m();
}
