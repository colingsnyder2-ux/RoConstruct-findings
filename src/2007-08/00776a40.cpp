// roc 2007-08 00776a40  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00776a40
//
// 00776a40  e84beff2ff           call 0x6a5990
// 00776a45  50                   push eax
// 00776a46  e8a59aebff           call 0x6304f0
// 00776a4b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776a40();
extern int __stdcall G2_func_00776a40(int);
int func_00776a40()
{
    return G2_func_00776a40(G1_func_00776a40());
}
