// roc 2008-06 007f9210  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9210
//
// 007f9210  e8fb88ecff           call 0x6c1b10
// 007f9215  50                   push eax
// 007f9216  e86b7deaff           call 0x6a0f86
// 007f921b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9210();
extern int __stdcall G2_func_007f9210(int);
int func_007f9210()
{
    return G2_func_007f9210(G1_func_007f9210());
}
