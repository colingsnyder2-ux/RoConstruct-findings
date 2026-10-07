// roc 2008-06 007f9e90  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9e90
//
// 007f9e90  e8eb08faff           call 0x79a780
// 007f9e95  50                   push eax
// 007f9e96  e8eb70eaff           call 0x6a0f86
// 007f9e9b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9e90();
extern int __stdcall G2_func_007f9e90(int);
int func_007f9e90()
{
    return G2_func_007f9e90(G1_func_007f9e90());
}
