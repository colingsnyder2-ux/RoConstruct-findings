// roc 2008-06 007f9850  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9850
//
// 007f9850  e8fbb5efff           call 0x6f4e50
// 007f9855  50                   push eax
// 007f9856  e82b77eaff           call 0x6a0f86
// 007f985b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9850();
extern int __stdcall G2_func_007f9850(int);
int func_007f9850()
{
    return G2_func_007f9850(G1_func_007f9850());
}
