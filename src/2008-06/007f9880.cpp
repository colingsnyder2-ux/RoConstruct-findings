// roc 2008-06 007f9880  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9880
//
// 007f9880  e8abb7efff           call 0x6f5030
// 007f9885  50                   push eax
// 007f9886  e8fb76eaff           call 0x6a0f86
// 007f988b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9880();
extern int __stdcall G2_func_007f9880(int);
int func_007f9880()
{
    return G2_func_007f9880(G1_func_007f9880());
}
