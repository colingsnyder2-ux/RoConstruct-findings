// roc 2008-06 007f9eb0  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9eb0
//
// 007f9eb0  e8ab09faff           call 0x79a860
// 007f9eb5  50                   push eax
// 007f9eb6  e8cb70eaff           call 0x6a0f86
// 007f9ebb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9eb0();
extern int __stdcall G2_func_007f9eb0(int);
int func_007f9eb0()
{
    return G2_func_007f9eb0(G1_func_007f9eb0());
}
