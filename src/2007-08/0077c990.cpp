// roc 2007-08 0077c990  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c990
//
// 0077c990  b9f8808c00           mov ecx, 0x8c80f8
// 0077c995  e976acc9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077c990 { void m(); };
extern T_func_0077c990 G1_func_0077c990;
void func_0077c990()
{
    G1_func_0077c990.m();
}
