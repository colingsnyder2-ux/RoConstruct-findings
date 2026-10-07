// roc 2008-06 007f9190  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9190
//
// 007f9190  e86bdeeaff           call 0x6a7000
// 007f9195  50                   push eax
// 007f9196  e8eb7deaff           call 0x6a0f86
// 007f919b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9190();
extern int __stdcall G2_func_007f9190(int);
int func_007f9190()
{
    return G2_func_007f9190(G1_func_007f9190());
}
