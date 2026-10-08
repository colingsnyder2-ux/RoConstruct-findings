// roc 2007-08 00776f60  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00776f60
//
// 00776f60  e80b2bfaff           call 0x719a70
// 00776f65  50                   push eax
// 00776f66  e88595ebff           call 0x6304f0
// 00776f6b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776f60();
extern int __stdcall G2_func_00776f60(int);
int func_00776f60()
{
    return G2_func_00776f60(G1_func_00776f60());
}
