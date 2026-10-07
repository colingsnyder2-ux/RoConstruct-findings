// roc 2011-06 00a2fa80  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2fa80
//
// 00a2fa80  e86beeecff           call 0x8fe8f0
// 00a2fa85  50                   push eax
// 00a2fa86  e893afddff           call 0x80aa1e
// 00a2fa8b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2fa80();
extern int __stdcall G2_func_00a2fa80(int);
int func_00a2fa80()
{
    return G2_func_00a2fa80(G1_func_00a2fa80());
}
