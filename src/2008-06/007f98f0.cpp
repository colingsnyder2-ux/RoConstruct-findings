// roc 2008-06 007f98f0  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f98f0
//
// 007f98f0  e80b7df0ff           call 0x701600
// 007f98f5  50                   push eax
// 007f98f6  e88b76eaff           call 0x6a0f86
// 007f98fb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f98f0();
extern int __stdcall G2_func_007f98f0(int);
int func_007f98f0()
{
    return G2_func_007f98f0(G1_func_007f98f0());
}
