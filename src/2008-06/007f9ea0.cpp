// roc 2008-06 007f9ea0  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9ea0
//
// 007f9ea0  e81b09faff           call 0x79a7c0
// 007f9ea5  50                   push eax
// 007f9ea6  e8db70eaff           call 0x6a0f86
// 007f9eab  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9ea0();
extern int __stdcall G2_func_007f9ea0(int);
int func_007f9ea0()
{
    return G2_func_007f9ea0(G1_func_007f9ea0());
}
