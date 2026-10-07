// roc 2008-06 007f9820  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9820
//
// 007f9820  e84bfbeeff           call 0x6e9370
// 007f9825  50                   push eax
// 007f9826  e85b77eaff           call 0x6a0f86
// 007f982b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9820();
extern int __stdcall G2_func_007f9820(int);
int func_007f9820()
{
    return G2_func_007f9820(G1_func_007f9820());
}
