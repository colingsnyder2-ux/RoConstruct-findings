// roc 2007-08 00776f90  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00776f90
//
// 00776f90  e83b2cfaff           call 0x719bd0
// 00776f95  50                   push eax
// 00776f96  e85595ebff           call 0x6304f0
// 00776f9b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776f90();
extern int __stdcall G2_func_00776f90(int);
int func_00776f90()
{
    return G2_func_00776f90(G1_func_00776f90());
}
