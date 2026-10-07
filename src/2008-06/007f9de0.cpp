// roc 2008-06 007f9de0  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9de0
//
// 007f9de0  e8ab89f7ff           call 0x772790
// 007f9de5  50                   push eax
// 007f9de6  e89b71eaff           call 0x6a0f86
// 007f9deb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9de0();
extern int __stdcall G2_func_007f9de0(int);
int func_007f9de0()
{
    return G2_func_007f9de0(G1_func_007f9de0());
}
