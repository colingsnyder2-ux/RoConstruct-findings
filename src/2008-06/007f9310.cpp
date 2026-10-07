// roc 2008-06 007f9310  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9310
//
// 007f9310  e87bfeeeff           call 0x6e9190
// 007f9315  50                   push eax
// 007f9316  e86b7ceaff           call 0x6a0f86
// 007f931b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9310();
extern int __stdcall G2_func_007f9310(int);
int func_007f9310()
{
    return G2_func_007f9310(G1_func_007f9310());
}
