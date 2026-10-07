// roc 2008-06 007f9320  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9320
//
// 007f9320  e84bffeeff           call 0x6e9270
// 007f9325  50                   push eax
// 007f9326  e85b7ceaff           call 0x6a0f86
// 007f932b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9320();
extern int __stdcall G2_func_007f9320(int);
int func_007f9320()
{
    return G2_func_007f9320(G1_func_007f9320());
}
