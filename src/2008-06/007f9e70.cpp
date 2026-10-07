// roc 2008-06 007f9e70  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9e70
//
// 007f9e70  e86b08faff           call 0x79a6e0
// 007f9e75  50                   push eax
// 007f9e76  e80b71eaff           call 0x6a0f86
// 007f9e7b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9e70();
extern int __stdcall G2_func_007f9e70(int);
int func_007f9e70()
{
    return G2_func_007f9e70(G1_func_007f9e70());
}
