// roc 2008-06 007f9940  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9940
//
// 007f9940  e8cb66f2ff           call 0x720010
// 007f9945  50                   push eax
// 007f9946  e83b76eaff           call 0x6a0f86
// 007f994b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9940();
extern int __stdcall G2_func_007f9940(int);
int func_007f9940()
{
    return G2_func_007f9940(G1_func_007f9940());
}
