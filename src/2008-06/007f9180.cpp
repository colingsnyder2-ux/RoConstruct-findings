// roc 2008-06 007f9180  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9180
//
// 007f9180  e80bddeaff           call 0x6a6e90
// 007f9185  50                   push eax
// 007f9186  e8fb7deaff           call 0x6a0f86
// 007f918b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9180();
extern int __stdcall G2_func_007f9180(int);
int func_007f9180()
{
    return G2_func_007f9180(G1_func_007f9180());
}
