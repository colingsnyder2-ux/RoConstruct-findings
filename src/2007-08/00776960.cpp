// roc 2007-08 00776960  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00776960
//
// 00776960  e81b6df0ff           call 0x67d680
// 00776965  50                   push eax
// 00776966  e8859bebff           call 0x6304f0
// 0077696b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776960();
extern int __stdcall G2_func_00776960(int);
int func_00776960()
{
    return G2_func_00776960(G1_func_00776960());
}
