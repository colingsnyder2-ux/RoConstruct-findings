// roc 2011-06 00a2fa70  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2fa70
//
// 00a2fa70  e83beeecff           call 0x8fe8b0
// 00a2fa75  50                   push eax
// 00a2fa76  e8a3afddff           call 0x80aa1e
// 00a2fa7b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2fa70();
extern int __stdcall G2_func_00a2fa70(int);
int func_00a2fa70()
{
    return G2_func_00a2fa70(G1_func_00a2fa70());
}
