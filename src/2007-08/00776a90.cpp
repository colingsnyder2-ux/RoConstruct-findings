// roc 2007-08 00776a90  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00776a90
//
// 00776a90  e8bbcef3ff           call 0x6b3950
// 00776a95  50                   push eax
// 00776a96  e8559aebff           call 0x6304f0
// 00776a9b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776a90();
extern int __stdcall G2_func_00776a90(int);
int func_00776a90()
{
    return G2_func_00776a90(G1_func_00776a90());
}
