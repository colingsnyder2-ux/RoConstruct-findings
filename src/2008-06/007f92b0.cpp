// roc 2008-06 007f92b0  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f92b0
//
// 007f92b0  e83bf3edff           call 0x6d85f0
// 007f92b5  50                   push eax
// 007f92b6  e8cb7ceaff           call 0x6a0f86
// 007f92bb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f92b0();
extern int __stdcall G2_func_007f92b0(int);
int func_007f92b0()
{
    return G2_func_007f92b0(G1_func_007f92b0());
}
