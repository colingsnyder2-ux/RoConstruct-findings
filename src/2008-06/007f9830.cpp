// roc 2008-06 007f9830  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9830
//
// 007f9830  e88b49efff           call 0x6ee1c0
// 007f9835  50                   push eax
// 007f9836  e84b77eaff           call 0x6a0f86
// 007f983b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9830();
extern int __stdcall G2_func_007f9830(int);
int func_007f9830()
{
    return G2_func_007f9830(G1_func_007f9830());
}
