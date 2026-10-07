// roc 2011-06 00a2fa60  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2fa60
//
// 00a2fa60  e8abedecff           call 0x8fe810
// 00a2fa65  50                   push eax
// 00a2fa66  e8b3afddff           call 0x80aa1e
// 00a2fa6b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2fa60();
extern int __stdcall G2_func_00a2fa60(int);
int func_00a2fa60()
{
    return G2_func_00a2fa60(G1_func_00a2fa60());
}
