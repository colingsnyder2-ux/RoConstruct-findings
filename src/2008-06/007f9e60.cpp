// roc 2008-06 007f9e60  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9e60
//
// 007f9e60  e8bb07faff           call 0x79a620
// 007f9e65  50                   push eax
// 007f9e66  e81b71eaff           call 0x6a0f86
// 007f9e6b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9e60();
extern int __stdcall G2_func_007f9e60(int);
int func_007f9e60()
{
    return G2_func_007f9e60(G1_func_007f9e60());
}
