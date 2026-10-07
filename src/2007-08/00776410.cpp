// roc 2007-08 00776410  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00776410
//
// 00776410  e8dba0efff           call 0x6704f0
// 00776415  50                   push eax
// 00776416  e8d5a0ebff           call 0x6304f0
// 0077641b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776410();
extern int __stdcall G2_func_00776410(int);
int func_00776410()
{
    return G2_func_00776410(G1_func_00776410());
}
