// roc 2011-06 00a2fa20  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2fa20
//
// 00a2fa20  e83bececff           call 0x8fe660
// 00a2fa25  50                   push eax
// 00a2fa26  e8f3afddff           call 0x80aa1e
// 00a2fa2b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2fa20();
extern int __stdcall G2_func_00a2fa20(int);
int func_00a2fa20()
{
    return G2_func_00a2fa20(G1_func_00a2fa20());
}
