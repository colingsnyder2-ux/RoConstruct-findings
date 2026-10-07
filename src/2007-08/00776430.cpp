// roc 2007-08 00776430  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00776430
//
// 00776430  e82bbfefff           call 0x672360
// 00776435  50                   push eax
// 00776436  e8b5a0ebff           call 0x6304f0
// 0077643b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776430();
extern int __stdcall G2_func_00776430(int);
int func_00776430()
{
    return G2_func_00776430(G1_func_00776430());
}
