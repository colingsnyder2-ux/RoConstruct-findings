// roc 2008-06 007f9840  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9840
//
// 007f9840  e8cb4eefff           call 0x6ee710
// 007f9845  50                   push eax
// 007f9846  e83b77eaff           call 0x6a0f86
// 007f984b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9840();
extern int __stdcall G2_func_007f9840(int);
int func_007f9840()
{
    return G2_func_007f9840(G1_func_007f9840());
}
