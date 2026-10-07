// roc 2008-06 007f98c0  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f98c0
//
// 007f98c0  e8bbb8efff           call 0x6f5180
// 007f98c5  50                   push eax
// 007f98c6  e8bb76eaff           call 0x6a0f86
// 007f98cb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f98c0();
extern int __stdcall G2_func_007f98c0(int);
int func_007f98c0()
{
    return G2_func_007f98c0(G1_func_007f98c0());
}
