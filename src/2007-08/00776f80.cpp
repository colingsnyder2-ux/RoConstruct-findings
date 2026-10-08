// roc 2007-08 00776f80  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00776f80
//
// 00776f80  e8ab2bfaff           call 0x719b30
// 00776f85  50                   push eax
// 00776f86  e86595ebff           call 0x6304f0
// 00776f8b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776f80();
extern int __stdcall G2_func_00776f80(int);
int func_00776f80()
{
    return G2_func_00776f80(G1_func_00776f80());
}
