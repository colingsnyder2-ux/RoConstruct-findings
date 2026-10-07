// roc 2008-06 007f9e10  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9e10
//
// 007f9e10  e82b9df9ff           call 0x793b40
// 007f9e15  50                   push eax
// 007f9e16  e86b71eaff           call 0x6a0f86
// 007f9e1b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9e10();
extern int __stdcall G2_func_007f9e10(int);
int func_007f9e10()
{
    return G2_func_007f9e10(G1_func_007f9e10());
}
