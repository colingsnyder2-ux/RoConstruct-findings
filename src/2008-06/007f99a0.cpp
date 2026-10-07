// roc 2008-06 007f99a0  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f99a0
//
// 007f99a0  e88bbcf4ff           call 0x745630
// 007f99a5  50                   push eax
// 007f99a6  e8db75eaff           call 0x6a0f86
// 007f99ab  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f99a0();
extern int __stdcall G2_func_007f99a0(int);
int func_007f99a0()
{
    return G2_func_007f99a0(G1_func_007f99a0());
}
