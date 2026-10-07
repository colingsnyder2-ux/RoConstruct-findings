// roc 2008-06 007f9980  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9980
//
// 007f9980  e8eb49f3ff           call 0x72e370
// 007f9985  50                   push eax
// 007f9986  e8fb75eaff           call 0x6a0f86
// 007f998b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9980();
extern int __stdcall G2_func_007f9980(int);
int func_007f9980()
{
    return G2_func_007f9980(G1_func_007f9980());
}
