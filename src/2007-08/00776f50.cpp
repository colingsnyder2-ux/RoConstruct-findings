// roc 2007-08 00776f50  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00776f50
//
// 00776f50  e8db2afaff           call 0x719a30
// 00776f55  50                   push eax
// 00776f56  e89595ebff           call 0x6304f0
// 00776f5b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776f50();
extern int __stdcall G2_func_00776f50(int);
int func_00776f50()
{
    return G2_func_00776f50(G1_func_00776f50());
}
