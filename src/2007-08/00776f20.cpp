// roc 2007-08 00776f20  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00776f20
//
// 00776f20  e84b05faff           call 0x717470
// 00776f25  50                   push eax
// 00776f26  e8c595ebff           call 0x6304f0
// 00776f2b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776f20();
extern int __stdcall G2_func_00776f20(int);
int func_00776f20()
{
    return G2_func_00776f20(G1_func_00776f20());
}
