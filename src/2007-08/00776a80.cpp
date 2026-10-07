// roc 2007-08 00776a80  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00776a80
//
// 00776a80  e8ebcaf3ff           call 0x6b3570
// 00776a85  50                   push eax
// 00776a86  e8659aebff           call 0x6304f0
// 00776a8b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776a80();
extern int __stdcall G2_func_00776a80(int);
int func_00776a80()
{
    return G2_func_00776a80(G1_func_00776a80());
}
