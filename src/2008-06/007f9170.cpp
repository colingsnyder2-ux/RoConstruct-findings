// roc 2008-06 007f9170  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9170
//
// 007f9170  e83bd9eaff           call 0x6a6ab0
// 007f9175  50                   push eax
// 007f9176  e80b7eeaff           call 0x6a0f86
// 007f917b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9170();
extern int __stdcall G2_func_007f9170(int);
int func_007f9170()
{
    return G2_func_007f9170(G1_func_007f9170());
}
