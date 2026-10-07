// roc 2008-06 007f9300  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9300
//
// 007f9300  e8cbe0eeff           call 0x6e73d0
// 007f9305  50                   push eax
// 007f9306  e87b7ceaff           call 0x6a0f86
// 007f930b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9300();
extern int __stdcall G2_func_007f9300(int);
int func_007f9300()
{
    return G2_func_007f9300(G1_func_007f9300());
}
