// roc 2008-06 007f92a0  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f92a0
//
// 007f92a0  e86becedff           call 0x6d7f10
// 007f92a5  50                   push eax
// 007f92a6  e8db7ceaff           call 0x6a0f86
// 007f92ab  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f92a0();
extern int __stdcall G2_func_007f92a0(int);
int func_007f92a0()
{
    return G2_func_007f92a0(G1_func_007f92a0());
}
