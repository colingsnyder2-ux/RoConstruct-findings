// roc 2007-08 00776400  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00776400
//
// 00776400  e8ebc2eeff           call 0x6626f0
// 00776405  50                   push eax
// 00776406  e8e5a0ebff           call 0x6304f0
// 0077640b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776400();
extern int __stdcall G2_func_00776400(int);
int func_00776400()
{
    return G2_func_00776400(G1_func_00776400());
}
