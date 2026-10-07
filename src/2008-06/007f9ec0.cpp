// roc 2008-06 007f9ec0  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9ec0
//
// 007f9ec0  e8fb09faff           call 0x79a8c0
// 007f9ec5  50                   push eax
// 007f9ec6  e8bb70eaff           call 0x6a0f86
// 007f9ecb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9ec0();
extern int __stdcall G2_func_007f9ec0(int);
int func_007f9ec0()
{
    return G2_func_007f9ec0(G1_func_007f9ec0());
}
