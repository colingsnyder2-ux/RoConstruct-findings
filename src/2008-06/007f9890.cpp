// roc 2008-06 007f9890  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9890
//
// 007f9890  e8bbb7efff           call 0x6f5050
// 007f9895  50                   push eax
// 007f9896  e8eb76eaff           call 0x6a0f86
// 007f989b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9890();
extern int __stdcall G2_func_007f9890(int);
int func_007f9890()
{
    return G2_func_007f9890(G1_func_007f9890());
}
