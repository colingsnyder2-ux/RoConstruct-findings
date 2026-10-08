// roc 2007-03 00776990  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776990
//
// 00776990  e8cbfdefff           call 0x676760
// 00776995  50                   push eax
// 00776996  e87383eaff           call 0x61ed0e
// 0077699b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776990();
extern int __stdcall G2_func_00776990(int);
int func_00776990()
{
    return G2_func_00776990(G1_func_00776990());
}
