// roc 2008-06 007f9990  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9990
//
// 007f9990  e8eb80f4ff           call 0x741a80
// 007f9995  50                   push eax
// 007f9996  e8eb75eaff           call 0x6a0f86
// 007f999b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9990();
extern int __stdcall G2_func_007f9990(int);
int func_007f9990()
{
    return G2_func_007f9990(G1_func_007f9990());
}
