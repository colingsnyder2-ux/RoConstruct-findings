// roc 2008-06 007f98b0  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f98b0
//
// 007f98b0  e85bb8efff           call 0x6f5110
// 007f98b5  50                   push eax
// 007f98b6  e8cb76eaff           call 0x6a0f86
// 007f98bb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f98b0();
extern int __stdcall G2_func_007f98b0(int);
int func_007f98b0()
{
    return G2_func_007f98b0(G1_func_007f98b0());
}
