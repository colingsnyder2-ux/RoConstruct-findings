// roc 2007-08 00776f40  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00776f40
//
// 00776f40  e82b2afaff           call 0x719970
// 00776f45  50                   push eax
// 00776f46  e8a595ebff           call 0x6304f0
// 00776f4b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776f40();
extern int __stdcall G2_func_00776f40(int);
int func_00776f40()
{
    return G2_func_00776f40(G1_func_00776f40());
}
