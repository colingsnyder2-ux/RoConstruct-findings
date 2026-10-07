// roc 2007-08 007711b0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007711b0
//
// 007711b0  b9a01e8c00           mov ecx, 0x8c1ea0
// 007711b5  e9269bd9ff           jmp 0x50ace0
// auto-matched from its assembly shape

struct T_func_007711b0 { void m(); };
extern T_func_007711b0 G1_func_007711b0;
void func_007711b0()
{
    G1_func_007711b0.m();
}
