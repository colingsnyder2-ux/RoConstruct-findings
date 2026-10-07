// roc 2008-06 007f9e20  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9e20
//
// 007f9e20  e84bcaf9ff           call 0x796870
// 007f9e25  50                   push eax
// 007f9e26  e85b71eaff           call 0x6a0f86
// 007f9e2b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9e20();
extern int __stdcall G2_func_007f9e20(int);
int func_007f9e20()
{
    return G2_func_007f9e20(G1_func_007f9e20());
}
