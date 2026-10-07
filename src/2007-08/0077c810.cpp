// roc 2007-08 0077c810  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c810
//
// 0077c810  b9cc7d8c00           mov ecx, 0x8c7dcc
// 0077c815  e9f6adc9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077c810 { void m(); };
extern T_func_0077c810 G1_func_0077c810;
void func_0077c810()
{
    G1_func_0077c810.m();
}
