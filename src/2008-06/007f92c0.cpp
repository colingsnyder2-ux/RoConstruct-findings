// roc 2008-06 007f92c0  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f92c0
//
// 007f92c0  e8cbf3edff           call 0x6d8690
// 007f92c5  50                   push eax
// 007f92c6  e8bb7ceaff           call 0x6a0f86
// 007f92cb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f92c0();
extern int __stdcall G2_func_007f92c0(int);
int func_007f92c0()
{
    return G2_func_007f92c0(G1_func_007f92c0());
}
