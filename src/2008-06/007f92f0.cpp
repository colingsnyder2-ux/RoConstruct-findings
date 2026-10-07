// roc 2008-06 007f92f0  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f92f0
//
// 007f92f0  e8dbf6edff           call 0x6d89d0
// 007f92f5  50                   push eax
// 007f92f6  e88b7ceaff           call 0x6a0f86
// 007f92fb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f92f0();
extern int __stdcall G2_func_007f92f0(int);
int func_007f92f0()
{
    return G2_func_007f92f0(G1_func_007f92f0());
}
