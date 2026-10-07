// roc 2011-06 00a2fa40  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2fa40
//
// 00a2fa40  e82bedecff           call 0x8fe770
// 00a2fa45  50                   push eax
// 00a2fa46  e8d3afddff           call 0x80aa1e
// 00a2fa4b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2fa40();
extern int __stdcall G2_func_00a2fa40(int);
int func_00a2fa40()
{
    return G2_func_00a2fa40(G1_func_00a2fa40());
}
