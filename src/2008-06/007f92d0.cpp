// roc 2008-06 007f92d0  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f92d0
//
// 007f92d0  e83bf5edff           call 0x6d8810
// 007f92d5  50                   push eax
// 007f92d6  e8ab7ceaff           call 0x6a0f86
// 007f92db  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f92d0();
extern int __stdcall G2_func_007f92d0(int);
int func_007f92d0()
{
    return G2_func_007f92d0(G1_func_007f92d0());
}
