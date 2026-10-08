// roc 2007-08 00776990  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00776990
//
// 00776990  e8fb6ef0ff           call 0x67d890
// 00776995  50                   push eax
// 00776996  e8559bebff           call 0x6304f0
// 0077699b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776990();
extern int __stdcall G2_func_00776990(int);
int func_00776990()
{
    return G2_func_00776990(G1_func_00776990());
}
