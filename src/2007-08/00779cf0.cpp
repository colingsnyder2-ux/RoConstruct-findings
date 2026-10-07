// roc 2007-08 00779cf0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779cf0
//
// 00779cf0  b9e0208c00           mov ecx, 0x8c20e0
// 00779cf5  e916d9c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00779cf0 { void m(); };
extern T_func_00779cf0 G1_func_00779cf0;
void func_00779cf0()
{
    G1_func_00779cf0.m();
}
