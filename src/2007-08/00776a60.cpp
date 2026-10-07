// roc 2007-08 00776a60  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00776a60
//
// 00776a60  e8cb0ef3ff           call 0x6a7930
// 00776a65  50                   push eax
// 00776a66  e8859aebff           call 0x6304f0
// 00776a6b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776a60();
extern int __stdcall G2_func_00776a60(int);
int func_00776a60()
{
    return G2_func_00776a60(G1_func_00776a60());
}
