// roc 2007-08 00776320  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00776320
//
// 00776320  e83b87edff           call 0x64ea60
// 00776325  50                   push eax
// 00776326  e8c5a1ebff           call 0x6304f0
// 0077632b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776320();
extern int __stdcall G2_func_00776320(int);
int func_00776320()
{
    return G2_func_00776320(G1_func_00776320());
}
