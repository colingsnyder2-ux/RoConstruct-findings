// roc 2008-06 007f9e40  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9e40
//
// 007f9e40  e81be0f9ff           call 0x797e60
// 007f9e45  50                   push eax
// 007f9e46  e83b71eaff           call 0x6a0f86
// 007f9e4b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9e40();
extern int __stdcall G2_func_007f9e40(int);
int func_007f9e40()
{
    return G2_func_007f9e40(G1_func_007f9e40());
}
