// roc 2008-06 007f9970  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9970
//
// 007f9970  e8bb43f3ff           call 0x72dd30
// 007f9975  50                   push eax
// 007f9976  e80b76eaff           call 0x6a0f86
// 007f997b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9970();
extern int __stdcall G2_func_007f9970(int);
int func_007f9970()
{
    return G2_func_007f9970(G1_func_007f9970());
}
