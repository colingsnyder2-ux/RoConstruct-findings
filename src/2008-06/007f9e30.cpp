// roc 2008-06 007f9e30  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9e30
//
// 007f9e30  e87bddf9ff           call 0x797bb0
// 007f9e35  50                   push eax
// 007f9e36  e84b71eaff           call 0x6a0f86
// 007f9e3b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9e30();
extern int __stdcall G2_func_007f9e30(int);
int func_007f9e30()
{
    return G2_func_007f9e30(G1_func_007f9e30());
}
