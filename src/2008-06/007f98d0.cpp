// roc 2008-06 007f98d0  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f98d0
//
// 007f98d0  e8ebb8efff           call 0x6f51c0
// 007f98d5  50                   push eax
// 007f98d6  e8ab76eaff           call 0x6a0f86
// 007f98db  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f98d0();
extern int __stdcall G2_func_007f98d0(int);
int func_007f98d0()
{
    return G2_func_007f98d0(G1_func_007f98d0());
}
