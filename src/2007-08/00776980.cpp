// roc 2007-08 00776980  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00776980
//
// 00776980  e8cb6ef0ff           call 0x67d850
// 00776985  50                   push eax
// 00776986  e8659bebff           call 0x6304f0
// 0077698b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776980();
extern int __stdcall G2_func_00776980(int);
int func_00776980()
{
    return G2_func_00776980(G1_func_00776980());
}
