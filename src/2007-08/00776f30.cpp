// roc 2007-08 00776f30  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00776f30
//
// 00776f30  e8cb22faff           call 0x719200
// 00776f35  50                   push eax
// 00776f36  e8b595ebff           call 0x6304f0
// 00776f3b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776f30();
extern int __stdcall G2_func_00776f30(int);
int func_00776f30()
{
    return G2_func_00776f30(G1_func_00776f30());
}
