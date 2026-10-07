// roc 2007-08 007785b0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007785b0
//
// 007785b0  b968e08b00           mov ecx, 0x8be068
// 007785b5  e956f0c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_007785b0 { void m(); };
extern T_func_007785b0 G1_func_007785b0;
void func_007785b0()
{
    G1_func_007785b0.m();
}
