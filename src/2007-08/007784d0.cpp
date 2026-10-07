// roc 2007-08 007784d0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007784d0
//
// 007784d0  b9ecdd8b00           mov ecx, 0x8bddec
// 007784d5  e936f1c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_007784d0 { void m(); };
extern T_func_007784d0 G1_func_007784d0;
void func_007784d0()
{
    G1_func_007784d0.m();
}
