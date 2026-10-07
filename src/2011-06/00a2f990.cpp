// roc 2011-06 00a2f990  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2f990
//
// 00a2f990  e8eb2eeaff           call 0x8d2880
// 00a2f995  50                   push eax
// 00a2f996  e883b0ddff           call 0x80aa1e
// 00a2f99b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2f990();
extern int __stdcall G2_func_00a2f990(int);
int func_00a2f990()
{
    return G2_func_00a2f990(G1_func_00a2f990());
}
